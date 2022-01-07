#include <iostream>
using namespace std;

int main(){
    int num = 42;
    int &ref = num;
    const int &kref = num;
    cout <<kref<<endl;
    // kref = 23; //cannot change
    ref = 0;
    cout <<ref<<" "<<num<<" "<<kref<<endl;
    num =42;
    cout <<ref<<" "<<num<<" "<<kref<<endl;
    return 0;
}