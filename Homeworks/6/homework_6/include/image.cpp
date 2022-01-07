//
// Created by abhinav137 on 24/06/21.
//

#include "image.h"
#include <iostream>
#include <string>
#include <io_tools.hpp>
#include "filesystem"
namespace fs = std::filesystem;

//===========================================================
//====                   Constructors                   =====
//===========================================================

igg::Image::Image(){
  std::cout<<"Default Constructor Used"<<std::endl;
  data_ = std::vector<uint8_t>(0,0);
}

igg::Image::Image(int rows, int cols): rows_{rows}, cols_{cols} {
  std::cout<<"Parameterized image constructor used"<<std::endl;
  data_ = std::vector<uint8_t>(rows*cols,0);
}

//===========================================================
//====                   Getter Function                =====
//===========================================================
int igg::Image::rows() const{
  std::cout<<"Total Rows:\t"<<rows_<<std::endl;
  return rows_;
}
int igg::Image::cols() const{
  std::cout<<"Total Cols:\t"<<cols_<<std::endl;
  return cols_;
}

//===========================================================
//====                   Grid Index Calc                =====
//===========================================================
int igg::Image::calc_grid_index(int row, int col) const{
  int index = (row*cols_)+ col;
  return index;
}

std::tuple<int, int> igg::Image::calc_xy_index(int index) const{
  if(cols_>0) {
    int x_index = (index / cols_);
    int y_index = (index % cols_);
    return std::pair(x_index, y_index);
  }
  else{
    return std::pair(0,0);
  }
}

//===========================================================
//====                   Dynamic reference              =====
//===========================================================

uint8_t& igg::Image::at(int row, int col){

  int index = igg::Image::calc_grid_index( row, col);
  uint8_t &val = data_.at(index);
  std::cout<< "val:"<< (unsigned)val<<std::endl;
  //use unsigned typecast to iostream uint8_t
  return val;
}

//===========================================================
//====                   Read Write Blocks              =====
//===========================================================

bool igg::Image::FillFromPgm(const std::string& filename){

  std::string data_path = "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/data/"+filename;
  igg::io_tools::ImageData read_image_obj; // Struct ImageData object
  read_image_obj = igg::io_tools::ReadFromPgm(data_path);
  std::printf("Rows:%d\tCols:%d\tMax_val:%hhu\n", read_image_obj.rows, read_image_obj.cols,read_image_obj.max_val);
  if(read_image_obj.data.empty()){
    std::printf("Data vector empty\n");
    return false;
  }
  else{
    std::printf("Data vector successfully imported\n");
    return true;
  }//Check if data is empty or not
} //Check file extension is .pgm

void igg::Image::WriteToPgm(const std::string& filename){
  std::string data_path = "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/data/"+ filename;

  uint8_t max_elementVal = *std::max_element(data_.begin(), data_.end());
  igg::io_tools::ImageData write_image_obj(rows_, cols_, max_elementVal, data_);
  //Convert data_ from Image class into ImageData Struct format
  bool WriteFlag = igg::io_tools::WriteToPgm( write_image_obj, data_path);
  if(WriteFlag)
    std::cout<<"FILE WRITTEN SUCCESSFULLY"<<std::endl;
  else
    std::cout<<"FILE WRITING ERROR"<<std::endl;
}

//===========================================================
//====                  Histogram                       =====
//===========================================================

std::vector<ulong> igg::Image::ComputeHistogram(int bins) const{
  std::vector<ulong> Hist(bins,0);
  std::vector<ulong> Bin_markers(bins+1, 0);
  for(int marker_num =1; marker_num<Bin_markers.size(); marker_num++){
    Bin_markers.at(marker_num) = (255.0/bins)*marker_num; // NOLINT(cppcoreguidelines-narrowing-conversions)
  }
  for(int pixel_num = 0; pixel_num< data_.size(); pixel_num++){
    std::cout<<pixel_num<<std::endl;
    int bin_number = 0;
    for(int j = 0; j<=bins; j++){
      std::cout<<"\n Pixel Value:"<< (ulong)data_.at(pixel_num)<< "\tBin Markers:"<<Bin_markers.at(j)<<"\t"<<Bin_markers.at(j+1)<<std::endl;
      if (Bin_markers.at(j) <= (ulong)data_.at(pixel_num) && (ulong)data_.at(pixel_num) < Bin_markers.at(j+1)){
//        assert((ulong)img_obj.data.at(pixel_num) < Bin_markers.at(j+1));
        bin_number = j;
        break;
      }else{continue;}
    }
    Hist.at(bin_number)+=1;
  }
  return Hist;
}


//===========================================================
//====                  Resizing Block                  =====
//===========================================================

void  igg::Image::UpScale(int scale){
//  upScaledData_ = std::vector<uint8_t>(data_.size()*std::pow(2,scale), 0); // NOLINT(cppcoreguidelines-narrowing-conversions)
//Initializing size of vector causes allocation of a garbage value which causes pushback to begin pushing from vector.size() onwards

  /* Sample Up-scaling
   *  1 2
   *  3 4       with a scaling factor of 3 (k)
   *  Define convention: For each element in original matrix
   *                     expand to the right, below and along primary diagonal k times
   *  Thus
   *
   *  1 2 ====> 1 1 1 2 2 2 ==> Corresponds to the following linear indices==> 1  2  3   4   5   6
   *  3 4       1 1 1 2 2 2                                                    7  8  9  10  11  12
   *            1 1 1 2 2 2                                                    13 14 15 16  17  18
   *            3 3 3 4 4 4                                                    19 20 21 22  23  24
   *            3 3 3 4 4 4                                                    25 26 27 28  29  30
   *            3 3 3 4 4 4                                                    31 32 33 34  35  36
   */
//Method proposed: Create unique rows of elements interpolated along one axis and push a copy k-1 times

  /* Sample Up-scaling
   *  Let data_  = std::vector<uint8_t>(1 2 3 4) given rows_ = 2, cols_=2
   *  Then upscaledData =  std::vector<uint8_t>(1 1 1 2 2 2 1 1 1 2 2 2 1 1 1 2 2 2 3 3 3 4 4 4 3 3 3 4 4 4 3 3 3 4 4 4)
   *
   */
  for( int i = 0; i< rows_; i++) {
  // For each row create a temporary vector able to store cols_*scale number of elements Will be later pushed into  upscaledData_
    int counterdata_ = 0; // To keep track of linear index for data_
    std::vector<uint8_t> Temp;
    for (int j = 0; j < cols_; j++) {
      for (int pushbackCounter = 0; pushbackCounter < scale; pushbackCounter++) {
        Temp.push_back(
            data_.at(counterdata_)); // pushes each element in a row "scale" times
      }
      counterdata_++; // increment linear index of original vector data_
    }
    //==Row formed, insert expanded row "scale" number of times====
    for (int insertCounter = 0; insertCounter < scale; insertCounter++) {
      upScaledData_.insert(upScaledData_.end(), Temp.begin(), Temp.end());
      // For empty upScaledData_ this will insert whole Temp Vector from the 0th place
    }
  }
  std::printf("Scaled Up by %d%%\t", scale );

}

void igg::Image::DownScale(int scale){
  int linearIndex = 0;
//  downScaledData_  = std::vector<uint8_t>(std::round(data_.size()/std::pow(2,scale))); // NOLINT(cppcoreguidelines-narrowing-conversions)
  std::vector<int> LinearIndexVec(0,0);
  for(int rowIndex = 0; rowIndex <rows_; rowIndex++){
    if(rowIndex % scale == 0){
      linearIndex+=cols_; //Leave the entire kth row of pixels
      continue; //Do nothing
    }
    else{
      for(int colIndex = 0; colIndex < cols_; colIndex++){
        if(colIndex % scale == 0){
          linearIndex += 1;
          continue; //Do nothing
        }
        else{
          LinearIndexVec.push_back(linearIndex);
          downScaledData_.push_back(data_.at(linearIndex));
          linearIndex+=1;
        }
      }
    }
  }
  std::printf("Scaled Down by %d%%\t", scale );
}