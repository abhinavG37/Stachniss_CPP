//
// Created by abhinav137 on 25/06/21.
//
#include <assert.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
#include <io_tools.hpp>

uchar& at_1(cv::Mat data_, int row, int col) {

  uchar &val = data_.at<uchar>(row, col);
  std::cout<<"data"<<data_<<std::endl;
//  std::vector<cv::Mat> data1_;
//  cv::split(data_, data1_);
//  std::cout<<"data (1,1)"<<data1_[0].at<cv::Vec3b>(1,1)<<std::endl;

  cout<< "val:"<< val<<std::endl;
  return val;
}

int calc_grid_index(int row, int col, int columns) {
  int index = (row*columns)+ col;
  return index;
}


uint8_t& at(std::vector<uint8_t> &data_, int row, int col) {
  int index = calc_grid_index(1,1,4);
  uint8_t &val = data_.at(index);
  std::cout<<"Original data at "<<row<<"\t"<<col<<"\t"<<data_.at(index)<<std::endl;

  cout<< "val:"<< (unsigned)val<<std::endl;
  return val;
}

int main () {
//  cv::Mat data_ = cv::imread("/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/data/imageCompressedCam0_0000100.png", cv::IMREAD_GRAYSCALE);
//  std::cout<< "BEGIN"<<std::endl;
//
//  at(data_, 1,1) = 2;
//  std::cout << at(data_, 1,1) << std::endl;
//  std::cout<<data_<<std::endl;

  std::vector<uint8_t> data_1(8,1);
  std::cout<< "BEGIN"<<std::endl;

  at(data_1, 1,1) = 100;
  std::cout << (unsigned)at(data_1, 1,1) << std::endl;
//  std::cout<<data_1<<std::endl;


  uint8_t value1 = 39;
  ulong value2 = 49;
  assert(value1 < value2);


  string data_path = "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/data/lena.ascii.pgm";

  igg::io_tools::ImageData img_obj;
          //Creating a struct object from struct def in igg::io_tools::ImageData
  img_obj = igg::io_tools::ReadFromPgm(data_path);
         //Assign value returned by ReadFromPGB(returns a struct of type ImageData) to an ImageData Objected
  std::printf("Rows:%d\tCols:%d\tMax_val:%hhu", img_obj.rows, img_obj.cols,img_obj.max_val);
//  int bins = 10;
//  std::vector<ulong> Hist(bins,0);
//  std::vector<ulong> Bin_markers(bins+1, 0);
//  for(int marker_num =1; marker_num<Bin_markers.size(); marker_num++){
//    Bin_markers.at(marker_num) = (255.0/bins)*marker_num; // NOLINT(cppcoreguidelines-narrowing-conversions)
//  }
//  for(int pixel_num = 0; pixel_num< img_obj.data.size(); pixel_num++){
//    cout<<pixel_num<<endl;
//    int bin_number = 0;
//    for(int j = 0; j<=bins; j++){
////      cout<<"\n Pixel Value:"<< (ulong)img_obj.data.at(pixel_num)<< "\tBin Markers:"<<Bin_markers.at(j)<<"\t"<<Bin_markers.at(j+1)<<endl;
//      if (Bin_markers.at(j) <= (ulong)img_obj.data.at(pixel_num) && (ulong)img_obj.data.at(pixel_num) < Bin_markers.at(j+1)){
////        assert((ulong)img_obj.data.at(pixel_num) < Bin_markers.at(j+1));
//        bin_number = j;
//        break;
//      }else{continue;}
//    }
//    Hist.at(bin_number)+=1;
//  }
//  cout<<"HISTOGRAM MADE"<<endl;

  std::vector<int> Temp1;
  std::vector<int> Temp2(10, 10);

  Temp1.insert(Temp1.end(), Temp2.begin(), Temp2.end());
//  Temp1.push_back(Temp2.at(1));
  std::cout<<"INSERTION DONE"<<std::endl;


  
  return 0;
}




