#include <array>
#include <iostream>
using std::array;
using std::cout;
using std::endl;


int main(){

    array<float,3>  arr{10.0f, 1.2f, 3.4f};
    array<int, 3> arr2= {1,3,4};  //ways of declaring array
    
    int array3[] = {1,2,3,4}; //Not an STL array, handled differently
    
    
    for(const auto& elem: arr){
        cout << "ELEMENT:"<< elem << endl;
    }
    bool flag = true;
    cout <<"Flag: "<<flag<<endl;

    cout<< std::boolalpha;

    cout <<"Flag: "<<flag<<endl;

    //printing first and last element of array
    //arr_name.size() to return size of array
    cout <<"ELEMENT START: " << arr[0] << "or" << arr.front()<<endl; //arr.front is an access alias
    // array3.front(); // DOES NOT WORK
    cout <<"ELEMENT FINAL: " << arr[arr.size()-1] << "or" << arr.back()<<endl;
}