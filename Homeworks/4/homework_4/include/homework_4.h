//======================================WHY I DO NOT HAVE HOMEWORK_4.cpp in ./include
//=============WHY A DIFFERENT CPP FILE CAUSE A LINKER ERROR=======================
//============WHEN A TEMPLATE FUNCTION IMPLEMENTATION AND DECLARATION IS SPLIT======
// https://stackoverflow.com/questions/3261093/function-template-in-a-namespace-in-a-separate-file-compiles-fine-but-the-linke

/*
 * For Member Initializer lists the syntax:
 *  void function(Typename ParamName) : memberVar1(paramName), memberVar2(ParamName)
 *  void function(Typename ParamName) : memberVar1{paramName}, memberVar2{ParamName}
 *Are Equivalent.
 */

#include <iostream>
using std::cout;
using std::endl;

#ifndef HOMEWORK4_H
#define HOMEWORK4_H

  namespace ipb{
    template <typename T>
    struct named_vector {
    private:
      T *ArrPointer;
      typedef T* iterator;
      unsigned int length = 0;
      unsigned int capacity = 0;
  //    std::vector<T> vector;
    public:
      named_vector();
      explicit named_vector(T size);
      named_vector(T size, T &value);
      ~named_vector();
      void pushback(const T &inValue);
  //    void popback();
  //
  //    void reserve(unsigned int capacity);
  //    void resize(unsigned int size);
    };
  };
#endif

template <typename T>
ipb::named_vector<T>::named_vector() {
  std::cout<<"Default Constructor Called"<<std::endl;
}

template <typename T>
ipb::named_vector<T>::named_vector(T size) : length(size), capacity(size) {
  std::cout<<"Constructor Called with passed Size:\t"<< size <<std::endl;
}

template <typename T>
ipb::named_vector<T>::named_vector(T size, T &value) : length(size), capacity(size) {
  std::cout<<"Constructor Called with passed Size and Value:\t"<< size << "\t" << value <<std::endl;
}

template <typename T>
ipb::named_vector<T>::~named_vector() = default;

template <typename T>
void ipb::named_vector<T>::pushback(const T &inValue){
cout<<"Pushback value provided:\t"<< inValue << endl;

}

