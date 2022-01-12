#include <iostream>
using std::cout;
using std::endl;
#include "homework_7_vanilla.h"
#include <opencv2/core/core.hpp>
#include "opencv2/highgui.hpp"
#include <map>

/**
* @brief
*
* 1. Given cluster centroids i initialized in some way,
* 2. For iteration t=1..T:
    1. Compute the distance from each point x to each cluster centroid,
    2. Assign each point to the centroid it is closest to,
    3. Recompute each centroid as the mean of all points assigned to it,

* @param descriptors: The input SIFT descriptors to cluster.
* @param k: The size of the dictionary, ie, number of visual words.
* @param max_iterations: Maximum number of iterations before convergence.
* @return cv::Mat : One unique Matrix representing all the $k$-means(stacked).
*/

/*
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
 *
 * */


cv::Mat ipb::kMeansVanilla( const std::vector<cv::Mat> &descriptorSet, int k, int max_iters){
    cv::Mat unclusteredDescriptors, clusteredDescriptors;
    std::map<int, cv::Mat> descriptorMap;

    //Reshape Descriptor Set to stack all descriptors into one cv::Mat object
    for(const auto & soloDescriptor : descriptorSet) {
        unclusteredDescriptors.push_back(soloDescriptor);
    }
    unclusteredDescriptors.convertTo(unclusteredDescriptors, CV_32F);

    //Randomly select initial cluster centers
    std::vector<cv::Mat> clusterCenters;
    for(int i = 0; i<k; i++){
        clusterCenters.push_back(unclusteredDescriptors.row(static_cast<int>(rand() % unclusteredDescriptors.rows+0)));
    }

    const unsigned int singleLineSize = unclusteredDescriptors.rows * unclusteredDescriptors.cols;
    const unsigned int K = 10;
    cv::Mat data = unclusteredDescriptors;
    data.convertTo(data, CV_32F);
    std::vector<int> labels;
    cv::Mat1f colors;
    std::cout<<"Working"<<std::endl;
    cv::kmeans(data, K, labels, cv::TermCriteria(cv::TermCriteria::EPS + cv::TermCriteria::COUNT, 10, 1.), max_iters, cv::KMEANS_PP_CENTERS, colors);
    std::vector<cv::Mat> stacks(k);

    for(int i = 0; i<labels.size(); i++) {
        for(int j = 0; j<k;j++){
            if(labels.at(i)== j){
                stacks.at(j).push_back(data.row(i));
            }
        }
    }
    cv::Mat means;
    for(const auto& stackNumber : stacks){
        cv::Mat temp;
        cv::reduce(stackNumber, temp, 0, cv::REDUCE_AVG);
        means.push_back(temp);
        std::cout<<"averaged"<<std::endl;
    }
    return clusteredDescriptors;
}