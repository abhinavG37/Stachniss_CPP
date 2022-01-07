//
// Created by abhinav137 on 24/06/21.
//
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::printf;

#include "image.h"
#include "io_tools.hpp"

int main(){

  string data_path = "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/data/lena.ascii.pgm";
  igg::io_tools::ImageData read_image_obj;
  read_image_obj = igg::io_tools::ReadFromPgm(data_path);
  std::printf("Rows:%d\tCols:%d\tMax_val:%hhu\n", read_image_obj.rows, read_image_obj.cols,read_image_obj.max_val);
  igg::Image image_obj(read_image_obj.rows, read_image_obj.cols);

  int rows = image_obj.rows();
  int cols = image_obj.cols();
  std::printf("ROWS: %d, COLS:%d\n", rows, cols);


  int& value = image_obj.at(3,3);
  cout<<"Original Value Read\t"<<value<<"\n";

  image_obj.at(3,3) = 20;
  cout<<"Amended Value\t"<<value<<"\n";


}
