//////
////// Created by abhinav137 on 09/06/21.
//////
////#include <opencv2/imgcodecs.hpp>
////#include <iostream>
////#include <fstream>
////#include <string>
////#include "opencv2/opencv.hpp"
////#include <stdio.h>
////#include <opencv2/objdetect/objdetect.hpp>
////#pragma clang diagnostic push
////#pragma clang diagnostic ignored "-Wint-to-pointer-cast"
////#include <filesystem>
////using namespace std;
////using namespace cv;
////
////
////void serializer(const Mat &mat){
////  string filename = "TestBinFile.bin";
////
////  cout<<"IMAGE DATAEND"<<mat.dataend<<endl;
////  cout<<mat<<endl;
////  string filepath = "../data/"+filename;
////  fstream file (filepath, ios::binary | ios::out);
//////  char* charPointer = (char*)mat.rows;
//////  cout<<"VALUE OF POINTER"<<charPointer<<endl;
////
////  int type = mat.type();
////  int channels = mat.channels();
////  file.write((char*)&mat.rows, sizeof(int));
////  file.write((char*)&mat.cols, sizeof(int));
////  file.write((char*)&type, sizeof(int));
////  file.write((char*)&channels,sizeof(int));
////  cout<<CV_ELEM_SIZE(type)<<endl;
////  if (mat.isContinuous()){
////    const char* ptr = mat.ptr<char>(0);
////
////    file.write(mat.ptr<char>(0), (mat.dataend - mat.datastart));
////    cout<<"STALL"<<endl;
////  }
////
////
////}
////int main(){
////  Mat mat(10, 10, CV_8UC1, 0xff);
//////  serializer(mat);
////
////  std::filesystem::path img_path("/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/data/lenna.png");
////  std::cout<<img_path.extension()<<endl;
////
////  cv::SiftFeatureDetector detector;
////  cv::Mat image_png = cv::imread(img_path, 0);
////  std::vector<cv::KeyPoint> keypoints;
////  detector.detect(image_png, keypoints);
////  cv::Mat output;
////  cv::drawKeypoints(image_png, keypoints, output);
////  cv::imwrite("sift_result.jpg", output);
////
////
////
////
////  return 0;
////}


#include <iostream>
#include "opencv2/highgui.hpp"
#include "opencv2/features2d.hpp"
#include "opencv2/xfeatures2d.hpp"
#include "homework_5.h"
#include <string>
#include <opencv2/core.hpp>
#include <filesystem>
#include <fstream>
namespace fs = std::filesystem;
using namespace std;
using namespace cv;
using namespace cv::xfeatures2d;
using std::cout;
using std::endl;
//int main( int argc, char* argv[] ) {
//  Mat src =
//      imread("/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/data/freiburg/images/imageCompressedCam0_0000000.png",
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
//}
//
//#include <filesystem>
//#include <iostream>
//#include <string>
//namespace fs = std::filesystem;
//int main() {
//  std::filesystem::path img_path =
//      "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/data/freiburg/images/";
//  for (const auto &entry : std::filesystem::directory_iterator(img_path)) {
//    if (entry.path().extension() == ".png") {
//      std::cout << "Entry Path" << entry.path() << std::endl;
//      std::cout << "Entry Path Extension" << entry.path().extension() << std::endl;
//
//      std::string filename = entry.path().filename();
//      std::cout<<filename<<std::endl;
//    }
//  }
//}

int main(){
//  fstream file;
//  string filepath = "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/data/";
//  file.open(filepath, ios::binary | ios::in);
//  int rows, cols, type, channels;
//  file.read((char *)&rows, sizeof(int));
//  file.read((char *)&cols, sizeof(int));
//  file.read((char *)&type, sizeof(int));
//  file.read((char *)&channels, sizeof(int));
//
//
//  cv::Mat mat(rows, cols, type);
//
//  file.read((char *)mat.data, CV_ELEM_SIZE(type) * rows * cols);
//  file.close();
//  return mat;


    std::filesystem::path png_path{"../../src/images"};  //filesystem runs this poth from the binary directory
    std::filesystem::path bin_path = "./data/freiburg/bin/";
    for(auto &entry : fs::directory_iterator(png_path)){
        fs::path path = entry.path();
        cout<<path<<endl;
    }



//    const std::filesystem::path sandbox{"sandbox"};
//    std::filesystem::create_directories(sandbox/"dir1"/"dir2");
//    std::ofstream{sandbox/"file1.txt"};
//    std::ofstream{sandbox/"file2.txt"};
//
//    std::cout << "directory_iterator:\n";
//    for(auto const& dir_entry: std::filesystem::directory_iterator{sandbox})
//        std::cout << dir_entry << '\n';
//
//    std::cout << "recursive_directory_iterator:\n";
//    for(auto const& dir_entry: std::filesystem::recursive_directory_iterator{sandbox})
//        std::cout << dir_entry << '\n';
//
//    std::filesystem::remove_all(sandbox);
    return 0;

}