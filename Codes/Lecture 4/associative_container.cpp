//maps
#include <map>
#include <unordered_map>

#include <iostream>
using std::unordered_map;
using std::map;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main(){
    using studentList = map<int, string>;
    studentList cpp_students;

    cpp_students.emplace(1509, "Abhi");
    cpp_students.emplace(1900, "Sana");
    cpp_students.emplace(200, "Corgi");


    using studentList2 = unordered_map<int, string>;
    studentList2 cpp_students2;

    cpp_students2.emplace(1509, "Abhi");
    cpp_students2.emplace(1900, "Sana");
    cpp_students2.emplace(200, "Corgi");

    for(const auto& [id, name]:cpp_students){
        cout<< "ID: " << id << "NAME: "<<name<<endl;

    }
    for(const auto& [id, name]:cpp_students2){
        cout<< "ID: " << id << "NAME: "<<name<<endl;

    }
    return 0;


}