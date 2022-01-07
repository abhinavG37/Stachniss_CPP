#include <vector> //Dynamic table. Size can be included at runtime
#include <iostream>
#include <string>
using std::string;
using std::vector;
using std::cout;
using std::endl;

#include <array>

int main(){
    vector  <int> number_vec = {1,2,3};
    //OR//
    vector <char> char_vec{'a', 'b', 'c'};
    //Ways to initialize vectors 
    //access similar to arrays
    // cout<< "Before clearing: " << number_vec<<endl; CANNOT DIRECTLY PRINT AN ARRAY/VECTOR
    //Add a value:
    char_vec.emplace_back('d');
    //OR
    char_vec.push_back('e');

    for (const auto& val:char_vec){
        cout<<"ELEMENT VALUE: "<< val << endl;
        
    }
    //Clear command
    number_vec.clear();


    //DYNAMIC SIZING DEMO FOR VECTORS

    const int N = 100; //define capacity of vector

    vector<int> number_vec2;

    number_vec2.reserve(N); // Reserving capacity of N to optimize memory allocation as earlier size was unkown

    for( int i = 1; i<=100; i++){
        number_vec2.emplace_back(i);
    }
    //VEC HAS SIZE HUNDRED
    vector<int> number_vec3;
    for( int i = 1; i<=100; i++){
        number_vec3.emplace_back(i);
        //number_vec3.insert(position, value) POSITION SHOULD BE AN INDEX
        // number_vec3.insert(number_vec3.begin()+2, 10);
    }
    //SIZE !=CAPACITY

    cout << "Preallocated size VECTOR 2 Capacity" << number_vec2.capacity()<<endl; //100 = N
    cout << "Preallocated size VECTOR 2 SIZE" << number_vec2.size()<<endl; // 100

    cout << "Preallocated size VECTOR 3 Capacity" << number_vec3.capacity()<<endl; //128
    cout << "NO PREALLOCATION VVECTOR 3 SIZE" << number_vec3.size()<<endl; //100


    int data[17];
    size_t data_size = sizeof(data) / sizeof(data[0]); //size of container on a C type array
    printf("Size of C Style array: %zu \n", data_size);

    std:: array<int, 17> data_{};
    cout << "Size of Container: " << data_.size() << endl;
    

     
}