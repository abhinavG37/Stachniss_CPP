//
// Created by abhinav137 on 08/06/21.
//
#include "homework_5.h"
#include <string>
#include <fstream>
#include <opencv2/opencv.hpp>
using namespace std;

void ipb::serialization::Serialize(const cv::Mat& mat,  const string& filepath) {

  // https://www.cplusplus.com/doc/tutorial/files/
  //  SCROLL TO BINARY FILES SECTION
  const std::filesystem::path path = filepath;
  fstream file;
  //  string test_filepath = "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/data"+filename;
  string base_path      = path.parent_path().parent_path();
  std::cout<<base_path<<std::endl;
   string file_name      = path.stem();
  string file_extension = path.extension();
//  string png_filepath = "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/data/freiburg/images/" + filename+".png";
  string bin_filepath   =   base_path+"/bin/"+file_name+".bin";
  if (file_extension == ".png"){
    int type = mat.type();
    int channels = mat.channels();
    int rows = mat.rows;
    int cols = mat.cols;
    file.open(bin_filepath, ios::binary | ios::out);
    file.write((char *)&mat.rows, sizeof(int));
    file.write((char *)&mat.cols, sizeof(int));
    file.write((char *)&type, sizeof(int));
    file.write((char *)&channels, sizeof(int));

    if (mat.isContinuous()) {
      file.write(mat.ptr<char>(0), (mat.dataend - mat.datastart));
    } else {
      int rowsize = CV_ELEM_SIZE(mat.type()) * mat.cols;
      for (int r = 0; r < mat.rows; ++r) {
        file.write(mat.ptr<char>(r), rowsize);
      }
      file.close();
    }
  }

}