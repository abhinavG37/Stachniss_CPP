#include <iostream>
#include <map>
#include <tuple> //demo for using tuples to return more than one type

int fun1(){ std::cout<<"F1 called\n";
            return 1;
            }
void fun2(){std::cout<<"F2 called\n";
return;}

//  std::map<char, int> GetDictionary(){
    // can be written as 
    auto getDictionary(){ //auto detects return type of this Python style Dictionary
        return std::map<char, int>{{'a', 27},{'b', 56}};
    }


// Tuple Demo
auto Foo(){
    return std::make_tuple("Super Variable", 5); //Returns a tuple using make_tuple function
}


//Warning code
//Returning reference to a local variable is not recommended 
//shall output a gargage value as variable is destroyed locally but not reference
int& multiplyBy10(int num){  //return type is a reference
    int retval = 0;
    retval = 10*num;
    //when return is called: A reference to the return variable is called
    return retval; //retval is destroyed at this point after returning a reference to retval


}



int main(){
    fun1();
    fun2();
    
   //stuctured binding example (C++17 onwards only, set compiler option to --std=c++17 when compiling in console)    
   auto [name, value] = Foo();
   std::cout << name<<" has value: "<<value<<std::endl;


    //reference return bug
    int output = multiplyBy10(10);
    std::cout<<"Multiplied Value is: "<< output <<std::endl;
    
    
    
    
    return 0;

}