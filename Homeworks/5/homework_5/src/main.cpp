
#include <iostream>
#include <opencv2/opencv.hpp>
#include "homework_5.h"
using namespace std;

int main(){
    cout<<"HI"<<endl;
//  cv::Mat m = cv::imread("/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/data/lenna.png");
//  cout << "ROWS" << m.rows << endl;
//  cout << "COLS" << m.cols << endl;
//  cv::imshow("Original",m);
//  cv::waitKey(0);
//
//
//  ipb::serialization::Serialize(m, "raw.bin");
//
//  cv::Mat de_mat = ipb::serialization::Deserialize("raw.bin");
//  cv::imshow("Deserialized", de_mat);
//  cv::waitKey(0);


//Dataset Testing
//  cv::Mat m_test = cv::imread("./tests/data/freiburg/images/imageCompressedCam0_0000000.png");
//  cout << "ROWS" << m.rows << endl;
//  cout << "COLS" << m.cols << endl;
    cout << "OpenCV version : " << CV_VERSION << endl;
  std::filesystem::path png_path = "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/data/freiburg/images";
  std::filesystem::path bin_path = "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/data/freiburg/bin";
  ipb::serialization::sifts::ConvertDataset(png_path);
  std::vector<cv::Mat> keypoints_vec = ipb::serialization::sifts::LoadDataset(bin_path);

  return (0);
}
