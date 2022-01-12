
#include <iostream>
#include "opencv2/highgui.hpp"
#include <opencv2/core.hpp>
#include "homework_5.h"
#include "homework_7.h"

using namespace std;
using namespace cv;
using std::cout;
using std::endl;

#define CLUSTERS 2
#define ITERATIONS 50


int main( int argc, char* argv[] ) {

    cv::Mat m_test = cv::imread("/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/7/homework_7/tests/data/freiburg/images/imageCompressedCam0_0000000.png");
    cout << "ROWS\t" << m_test.rows << endl;
    cout << "COLS\t" << m_test.cols << endl;

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

}