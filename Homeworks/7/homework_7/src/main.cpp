
#include <iostream>
#include "opencv2/highgui.hpp"
#include "opencv2/features2d.hpp"
#include "opencv2/xfeatures2d.hpp"
#include <string>
#include <opencv2/core.hpp>
#include "homework_5.h"
#include "homework_7.h"
#include <opencv2/core/core.hpp>

using namespace std;
using namespace cv;
using namespace cv::xfeatures2d;
using std::cout;
using std::endl;

#define CLUSTERS 10
#define ITERATIONS 50


int main( int argc, char* argv[] ) {

    cv::Mat m_test = cv::imread("/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/7/homework_7/tests/data/freiburg/images/imageCompressedCam0_0000000.png");
    cout << "ROWS" << m_test.rows << endl;
    cout << "COLS" << m_test.cols << endl;

    std::filesystem::path png_path = "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/7/homework_7/tests/data/freiburg/images";
    std::filesystem::path bin_path = "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/7/homework_7/tests/data/freiburg/bin";
    std::filesystem::create_directories(bin_path);

    ipb::serialization::sifts::ConvertDataset(png_path);


    const std::vector<cv::Mat>& descriptorSet = ipb::serialization::sifts::LoadDataset(bin_path);
    cv::imshow("FeatureDescriptors",descriptorSet.at(0) );
    cv::waitKey(0);

    cv::Mat clusters = ipb::kMeans(descriptorSet, CLUSTERS, ITERATIONS);
    cv::imshow("CLUSTERED", clusters);
    cv::waitKey(0);

    return 0;


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