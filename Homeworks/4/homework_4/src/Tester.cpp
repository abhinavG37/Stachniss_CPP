#include <iostream>
//#include "homework_4.h"

using std::cout;
using std::endl;

namespace ipb{
  template <typename T>
  struct named_vector {
  private:
    typedef T* iterator;
    unsigned int length = 0;
    unsigned int capacity = 0;
//    std::vector<T> vector;
  public:
    named_vector();
    explicit named_vector(T input_val);
//    named_vector(unsigned int length, const T &initValue);
//    ~named_vector();
//
//    void pushback(const T &inValue);
//    void popback();
//
//    void reserve(unsigned int capacity);
//    void resize(unsigned int size);
  };
};

template <typename T>
ipb::named_vector<T>::named_vector() {
  std::cout<<"Default Constructor Called"<<std::endl;
}

template <typename T>
ipb::named_vector<T>::named_vector(T input_val) {
  std::cout<<"Default Constructor Called with passed Value:\t"<< value <<std::endl;
}


int main(){
  ipb::named_vector<char> named_vector_1(3);
  ipb::named_vector<char> named_vector_2;

  std::cout<<"DONE CALLING CONSTRUCTOR"<<std::endl;
  return 0;
}