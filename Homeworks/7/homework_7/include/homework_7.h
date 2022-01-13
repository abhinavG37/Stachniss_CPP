//
// Created by abhinav137 on 10/07/21.
//
#include <opencv2/core/mat.hpp>
#include <opencv2/core/core.hpp>
#include "opencv2/highgui.hpp"
#include <map>

#ifndef HOMEWORK_7_HOMEWORK_7_H
#define HOMEWORK_7_HOMEWORK_7_H
/**
* @brief
* 1. Given cluster centroids i initialized in some way,
* 2. For iteration t=1..T:

    1. Compute the distance from each point x to each cluster centroid,
    2. Assign each point to the centroid it is closest to,
    3. Recompute each centroid as the mean of all points assigned to it,

* @param descriptors: The input SIFT descriptors to cluster.
* @param k: The size of the dictionary, ie, number of visual words.
* @param max_iterations: Maximum number of iterations before convergence.
* @return cv::Mat
One unique Matrix representing all the $k$-means(stacked).
*/

namespace ipb {

    class BowDictionary{
    private:
        int K;
        int MAX_ITERS;
        std::vector<cv::Mat> DESCRIPTOR_SET;
        cv::Mat BOW_DICT;

    public:
        BowDictionary();
        cv::Mat kMeans(std::vector<cv::Mat> &descriptors, int k, int max_iters);

        //Getter Methods
        [[nodiscard]] int max_iterations() const;
        [[nodiscard]] int size() const;
        [[nodiscard]] std::vector<cv::Mat> descriptors() const;
        [[nodiscard]] cv::Mat vocabulary() const;
        [[nodiscard]] int total_features() const;

        //Setter Methods
        void set_params(int Iterations, int ClusterCount, std::vector<cv::Mat>& descriptor_set);
        void set_max_iterations(int Iterations);
        void set_cluster_size(int ClusterCount);
        void set_descriptors(std::vector<cv::Mat>& descriptor_set);
    };
}
#endif // HOMEWORK_7_HOMEWORK_7_H
