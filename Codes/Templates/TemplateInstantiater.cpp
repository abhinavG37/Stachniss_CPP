#include <iostream>
using namespace std;

template <class T>
class Z{
    public:
        Z(){};
        ~Z(){};
        static void f(T a){cout<<"Value of A:\t"<< a<<endl;}; //static member function
        void g(T a){cout<<"Value of A:\t"<< a<<endl;}; //non static member function
         //You need an object to call a non-static member function

};

int main(){

    //Implicit Instantiation example 
    
    Z<char>::f('a'); //static member function, needs no object to call
    // Z<char>::g('A'); Generates an error as g is a nonstatic member function
    //Object creation done to call g
    Z<char> zchar_obj;
    zchar_obj.g('A');

    Z<int> zi; //generates class Z<int>

    zi.f('A') ;    //and generates function Z<int>::f()
    Z<float> zf ; //implicit instantiation generates class Z<float>
    zf.g('B') ;      //and generates function Z<float>::g()
    //explicit instantiation
    // template class Z<char> ; //explicit instantiation of class Z<int>
    // template class Z<float> ; //explicit instantiation of 
    //                       //class Z<float> 

}