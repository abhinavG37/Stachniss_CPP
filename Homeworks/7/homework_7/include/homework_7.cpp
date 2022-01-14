#include <iostream>
using std::cout;
using std::endl;
#include "homework_7.h"
#include <opencv2/core/core.hpp>
#include <map>

/**
* @brief
    *
    * 1. Given cluster centroids i initialized in some way,
    * 2. For iteration t=1..T:
        1. Compute the distance from each point x to each cluster centroid,
        2. Assign each point to the centroid it is closest to,
        3. Recompute each centroid as the mean of all points assigned to it,

    * Each descriptor is placed in a vector of cv::Mat type
    * Shape of the vector is 1-D with the number of elements equal to the number of images in the dataset
    * Each [DESCRIPTOR SET] is a cv::Mat type matrix with shape [Rows x 128] where each row is an individual descriptor [128 dimension vector]
    * Rows is varying for each image based on the number of viable keypoints and hence the number of descriptors formed in the image.
    *
    * To cluster , convert N*128 dimension (N is the number of descriptor from each image)
    * into an array of M*128 dimension (M number of descriptor from all images).
    * and perform cluster on this data.
    *
    * libconvertDataset.lib is using a maximum of 400 keypoints per image for this.
    * Any changes need to be done in HW5

    * @param descriptors: The input SIFT descriptors to cluster.
    * @param k: The size of the dictionary, ie, number of visual words.
    * @param max_iterations: Maximum number of iterations before convergence.
    * @return cv::Mat : One unique Matrix representing all the $k$-means(stacked).
 */

//===========================================================
//====                   Constructors                   =====
//===========================================================

ipb::BowDictionary::BowDictionary(): K(1), MAX_ITERS(1){};

//===========================================================
//====                   Instantiation                  =====
//===========================================================
ipb::BowDictionary* ipb::BowDictionary::BowDictionaryObj_ = nullptr;
ipb::BowDictionary *ipb::BowDictionary::getInstance(){
    if(BowDictionaryObj_ == nullptr){
        BowDictionaryObj_ = new ipb::BowDictionary();
    }
    return BowDictionaryObj_;
};
//===========================================================
//====                   Setter Functions               =====
//===========================================================

void ipb::BowDictionary::set_params(int Iterations, int ClusterCount, std::vector<cv::Mat>& descriptorSet){
    ipb::BowDictionary::set_descriptors(descriptorSet);
    ipb::BowDictionary::set_size(ClusterCount);
    ipb::BowDictionary::set_max_iterations(Iterations);
}
void ipb::BowDictionary::set_max_iterations(int Iterations){
    MAX_ITERS = Iterations;
}
void ipb::BowDictionary::set_size(int ClusterCount){
    K = ClusterCount;
}
void ipb::BowDictionary::set_descriptors(std::vector<cv::Mat>& descriptorSet){
    DESCRIPTOR_SET = descriptorSet;
}

//===========================================================
//====                   Getter Functions                =====
//===========================================================

int ipb::BowDictionary::max_iterations() const{return MAX_ITERS;}

int ipb::BowDictionary::size() const{return K;}

std::vector<cv::Mat> ipb::BowDictionary::descriptors() const{return DESCRIPTOR_SET; }

cv::Mat ipb::BowDictionary::vocabulary() const{return BOW_DICT;}

int ipb::BowDictionary::total_features() const{
    cv::Mat FeatureMat;
    for(const auto& element:DESCRIPTOR_SET){
        FeatureMat.push_back(element);
    }
    return FeatureMat.rows;
}
//===========================================================
//====                   KNN Functions                  =====
//===========================================================

cv::Mat ipb::BowDictionary::kMeans(std::vector<cv::Mat>& descriptorSet , int k, int max_iters){
    set_params(max_iters, k,  descriptorSet);
    cv::Mat unclusteredDescriptors, clusteredDescriptors;
    std::vector<std::pair<int, cv::Mat>> descriptorMap;

    //Reshape Descriptor Set to stack all descriptors into one cv::Mat object
    for(const auto & soloDescriptor : DESCRIPTOR_SET) {
        unclusteredDescriptors.push_back(soloDescriptor);
    }
    unclusteredDescriptors.convertTo(unclusteredDescriptors, CV_32F);

    //Randomly select initial cluster centers
    std::vector<cv::Mat> clusterCenters; //should be of size [K, 128] for SIFT
    for(int i = 0; i<K; i++){
        auto seed = static_cast<int>(rand() % unclusteredDescriptors.rows+0);
        clusterCenters.push_back(unclusteredDescriptors.row(seed));
    }
    cv::Mat dataVec;
    //Begin KNN clustering
    for(auto i=0; i<MAX_ITERS;i++){
        //Iterate through descriptors
        //Assign index of current cluster center to the current feature descriptor
        for(auto row = 0; row<unclusteredDescriptors.rows; row++) {
            dataVec = unclusteredDescriptors.row(row);
            std::vector<double> Norm;
            //generate norm values for current descriptor from each
            for ( auto& clusterCenter: clusterCenters){
                Norm.push_back(cv::norm(dataVec, clusterCenter));
            }
            int minNormIndex = static_cast<int>(std::min_element(Norm.begin(), Norm.end()) - Norm.begin()); //Find index of smallest norm
            descriptorMap.emplace_back(minNormIndex,dataVec);   //Use smallest norm index as new cluster center for current descriptor vector
        }
        //std::Map cannot be used as non-unique keys are not added just updated

        //Generating new centroids
        std::vector<std::pair<int, cv::Mat>>::iterator it;
        for(int index = 0; index<K; index++){
            cv::Mat temp;
            for (it = descriptorMap.begin(); it != descriptorMap.end(); it++){
                if(it->first == index) {
                    temp.push_back(it->second);
                }
            }
            clusterCenters.at(index) = cv::mean(temp, cv::noArray());
           //Reduce vertically stacked descriptors with the same label to generate new centroid vector
            cv::reduce(temp, clusterCenters.at(index), 0, cv::REDUCE_AVG);
        }
    }
    for(const auto & element : clusterCenters) {
        clusteredDescriptors.push_back(element);
    }
    BOW_DICT = clusteredDescriptors;
    return BOW_DICT;
}


