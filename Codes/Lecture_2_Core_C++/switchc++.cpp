#include <iostream>

int main(){
    enum class RGB{RED, GREEN, BLUE};
    RGB color = RGB::GREEN;
    
    switch(color){
        case RGB::RED:
            std::cout<<"red\n"; 
            break;
        case RGB::BLUE:
            std::cout<<"blue\n"; 
            break;
        case RGB::GREEN:
            std::cout<<"green\n"; 
            break;
        
    }

    const float var = 84.78;
    const bool cmp_result = (84.78 == var);
    std::cout <<cmp_result<<std::endl;
    
    return 0;
}