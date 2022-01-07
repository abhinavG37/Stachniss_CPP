#include <iostream>
#include <variant>
#include <utility>
#include <tuple>



int main(){
//Swapper std::swap
//     int a = 3;
//     auto b = 4;
//     std::cout << a<< ' ' << b<<std::endl;
//     std::swap(a,b);


// //Variant  std::variant<int. float>
// // std::variant<int,float> v1;
// // v1 = 12;
// // std::cout<<std::get<0>(v1)<<std::endl;
// // v1 = 3.14f;
// // //holds one value at a time
// // // std::cout<<"INT:\t"<<std::get<0>(v1)<<"FLOAT \t"<<std::get<1>(v1)<<std::endl;


//tuples

using tupleMaker = std::tuple<int,bool,double,int>;
tupleMaker tuple1{1, true, 3.21,12};
  std::cout<<std::get<double>(tuple1)<<std::endl;  
  std::cout<<std::get<3>(tuple1)<<std::endl;   //access 4th index element

// tuple1= std::make_tuple() //can uyse tuple_maker as well;
tuple1.swap(tuple1);


return 0;} 