#include "./include/homework_3.h"


#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

#include <fstream>
using std::fstream;
using std::ofstream;

#include <fmt/format.h>
#include <filesystem>
namespace fs = std::filesystem;


//globally creating fstream object
fstream html_files; //create fstream object


//div flag to prevent from unopened tags being closed 
static bool row_flag = 0;
static bool body_flag =0; //0 denotes tag not opened

static int image_counter = 0;

void html_writer::OpenDocument(){ //DONE
  cout<<"Opening & Printing html5 file line 1 to stdout\n";
    
    string path; 
    // while(!html_files.is_open())
    {   cout<<"Enter Path of file \n";
        cin>>path;
        cout<<"Path Chosen:\t "<< path<<endl; 
        html_files.open("/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/3/homework_3/FILE.html", fstream::in | fstream::out);
    }//keep trying opening this until file not found
    
    string sLine;
    
    if (html_files.is_open())
    {
        std::getline(html_files,sLine);
        cout<<sLine<<endl;         
        //sLine contains only first line of opened HTML5 file when it is found
    }

}        

void html_writer::CloseDocument(){  //DONE
    if(html_files.is_open()){
    html_files.close();
    }
}

void html_writer::AddCSSStyle(const string& stylesheet){ //DONE

    string Line = string("<link rel=\"stylesheet\" type=\"text/css\" href=\" ") + string(stylesheet) + string("\"/> \n");
    cout <<Line<<endl;
     if (html_files.is_open()){
         html_files <<  Line;
     }
}

void html_writer::OpenBody(){

    string open_body = "<body> \n";
    if (html_files.is_open()){
      html_files<<open_body;  
    } 
    //Tag opened. Set body_flag =1;
    body_flag = 1; 
}


void html_writer::CloseBody(){
    if(body_flag == 1){
        string close_body = "</body> \n";
        if (html_files.is_open()){
        html_files<<close_body;  
        } 
        body_flag = 0; //Flag Reset to 0 after tag closed
    }
    else{
        cout<< "Body tag not opened. Opening body tag. \n";
        OpenBody();
        CloseBody();
    }
}


//Flag setting for div rows



void html_writer::OpenRow(){
    string div_open = "<div class=\"row\"> \n";
    if (html_files.is_open()){
      html_files<<div_open;  
    } 
    row_flag = 1; 
}

void html_writer::CloseRow(){
    if(row_flag == 1){    
        string div_close = "</div>\n";
        if (html_files.is_open()){
        html_files<<div_close;  
        }
        row_flag = 0; //Row Flag reset 
    }
    else{
         cout<< "Row tag not opened. Opening row div tag. \n";
        OpenBody();
        CloseBody();
    }

}


void html_writer::AddImage(const string& img_path, float score, bool highlight){

    string name_tag = string("<h2>") + string(fs::path(img_path).filename()) +string("</h2> \n") ;
    string img_tag = string("<img src=\" ") + string(img_path) + string("\"/> \n");
    string score_tag = string("<p> score=") + std::to_string(0.46f) + string("\"</p> \n");
    
    if(image_counter == 0){
        highlight = true;
    }

    while(html_files.is_open()){
        html_files<<name_tag;
        html_files<<img_tag;
        html_files<<score_tag;  
    }
    image_counter++;


}

void html_writer::printerFunc(){
    cout<<"HELLLLLLOOOOOO\n";
}

