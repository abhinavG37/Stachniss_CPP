#include <iostream>



int main(){

        int flag = 0;
        int random;
        int guess;
            
        while (flag != 1){
            random = (rand() % 100); 
            std::cout<<"Enter guessed value\n";
            
            try{
                std::cin>>guess; 
                if(std::cin.fail() == true){
                    throw "Wrong input error";
                }
                else{
                    if(guess > 99 && guess < 0){
                        throw 1;
                    }
                }
            
            }
            catch(char const* err){
                std::cout<< err<<" exception thrown, exiting"<<std::endl;
                exit(0);
            }
            catch(int err){
                std::cout<<"Out of bounds exception thrown, try again"<<std::endl;
                std::cin>>guess; 
            }

            if (random == guess){
                    std::cout<<"Value Guessed Correctly"<<random<<std::endl;
                    flag = 1;
                    break;
                }
                else{
                    std::cout<<"Value Mismatch:"<<random<<std::endl;
                    }
        }


            return 0; 

}