#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main(int argc, char const *argv[]){
    cout << "Got: \t" << argc<<" Params\n";
    cout <<"Program Name\t"<< argv[0]<<endl;

    for( int i = 1; i<argc; ++i){
        cout << "Param:" <<argv[i] <<endl;
        }
        return 0;

}
// ./progInputParams "Abhinav GUPTA" 065