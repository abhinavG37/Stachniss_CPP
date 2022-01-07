//
// Created by abhinav137 on 10/06/21.
//
//
// Created by abhinav137 on 08/06/21.
//
#include <opencv2/core/core.hpp>
#include <string>
#include <fstream>
#include <iostream>
#include "homework_5.h"
using namespace std;

// https://www.cplusplus.com/doc/tutorial/files/
//  SCROLL TO BINARY FILES SECTION

cv::Mat ipb::serialization::Deserialize(const std::string &filepath) {
  fstream file;
//  string filepath = "";
  file.open(filepath, ios::binary | ios::in);
  int rows, cols, type, channels;
  file.read((char *)&rows, sizeof(int));
  file.read((char *)&cols, sizeof(int));
  file.read((char *)&type, sizeof(int));
  file.read((char *)&channels, sizeof(int));


  cv::Mat mat(rows, cols, type);

  file.read((char *)mat.data, CV_ELEM_SIZE(type) * rows * cols);
  file.close();
  return mat;
}
