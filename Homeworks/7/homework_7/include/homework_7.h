//
// Created by abhinav137 on 10/07/21.
//

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
#include <opencv2/core/mat.hpp>
namespace ipb {
cv::Mat kMeans(const std::vector<cv::Mat> &descriptors, int k, int max_iters);
}
#endif // HOMEWORK_7_HOMEWORK_7_H
