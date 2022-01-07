

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

#include <fstream>
using std::fstream;
using std::ofstream;


//globally creating fstream object
fstream html_files; //create fstream object

int main(){


    cout<<"Opening & Printing html5 file line 1 to stdout\n";
    if(!html_files.is_open()){
        cout<<"NOOOO"<<endl;
    }
    // string path; 
    // while(!html_files)
    // // {   cout<<"Enter Path of file \n";
    //     cin>>"/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/3/homework_3/FILE.html";
        html_files.open("/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/3/homework_3/FILE.html", fstream::in | fstream::out);
    // }//keep trying opening this until file not found
    
    string sLine;
    
    if (html_files)
    {
        std::getline(html_files,sLine);
        cout<<sLine<<endl;         
        //sLine contains only first line of opened HTML5 file when it is found
    }
}