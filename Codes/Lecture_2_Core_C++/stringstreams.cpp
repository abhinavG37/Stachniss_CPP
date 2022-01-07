#include <iomanip>
#include <iostream>
#include  <sstream>

using namespace std;

int main(){
    stringstream filename{"00205.txt"};

    int num = 0;
    string ext;
    filename >> num >>ext;
    cout <<"Number is:" <<num <<endl;
    cout<<"Extension is:" <<ext <<endl;
    return 0;
    
}