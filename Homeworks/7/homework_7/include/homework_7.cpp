#include <iostream>
using std::cout;
using std::endl;
#include "homework_7.h"
#include <opencv2/core/core.hpp>


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
* @return cv::Mat
One unique Matrix representing all the $k$-means(stacked).
*/

cv::Mat ipb::kMeans(const std::vector<cv::Mat> &descriptors, int k, int max_iters){
  cv::Mat mat;
  return mat;
}