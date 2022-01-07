
#include <iostream>
#include "opencv2/highgui.hpp"
#include "opencv2/features2d.hpp"
#include "opencv2/xfeatures2d.hpp"
#include <string>
#include <opencv2/core.hpp>
#include "homework_5.h"
using namespace std;
using namespace cv;
using namespace cv::xfeatures2d;
using std::cout;
using std::endl;
#include <opencv2/core/core.hpp>


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

  using namespace cv::xfeatures2d;
  using std::cout;
  using std::endl;

int main( int argc, char* argv[] ) {

    cv::Mat m_test = cv::imread("/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/7/homework_7/tests/data/freiburg/images/imageCompressedCam0_0000000.png");
    cout << "ROWS" << m_test.rows << endl;
    cout << "COLS" << m_test.cols << endl;
    std::filesystem::path png_path = "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/7/homework_7/tests/data/freiburg/images";
    ipb::serialization::sifts::ConvertDataset(png_path);

    std::filesystem::path bin_path = "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/7/homework_7/tests/data/freiburg/bin";
    std::filesystem::create_directories(bin_path);
    std::vector<cv::Mat> keypoints_vec = ipb::serialization::sifts::LoadDataset(bin_path);

//
//    Mat src =
//      imread(png_path+"/imageCompressedCam0_0000000.png",
//             IMREAD_GRAYSCALE);
//  //-- Step 1: Detect the keypoints using SURF Detector
//  int minHessian = 400;
//  Ptr<SIFT> detector = SIFT::create(minHessian);
//  std::vector<KeyPoint> keypoints;
//  detector->detect(src, keypoints);
//  //-- Draw keypoints
//  Mat img_keypoints;
//  drawKeypoints(src, keypoints, img_keypoints);
//  //-- Show detected (drawn) keypoints
//  imshow("SIFT Keypoints", img_keypoints);
//  ipb::serialization::Serialize(img_keypoints, "SIFT.bin");
//  Mat img_keypoints_Deserialized = ipb::serialization::Deserialize("SIFT.bin");
//  imshow("SIFT Keypoints Deserialized", img_keypoints_Deserialized);
//  waitKey(0);
//  return 0;
}