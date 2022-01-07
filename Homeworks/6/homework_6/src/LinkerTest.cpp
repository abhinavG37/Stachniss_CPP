//
// Created by abhinav137 on 29/06/21.
//

#include <io_tools.hpp>



int main(){
  int rows_ = 10, cols_ = 5, scale = 2;
  std::vector<uint8_t> data(10,10);
  int linearIndex = 0;
  std::vector<int> LinearIndexVec(0,0);
  for(int rowIndex = 0; rowIndex <rows_; rowIndex++){
    if(rowIndex % scale == 0){
      linearIndex+=cols_;
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
          linearIndex+=1;
        }
      }
    }

  return 0;
}
