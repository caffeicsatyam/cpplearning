#include<iostream>

int main(){
    int value{5};

    //increment by one
    value = value  + 1;
    std::cout<<"value is "<< value <<std::endl;

    value = 5;

    value = value -1;
    std::cout<<"value:"<<value<<std::endl;

    //=======================================//

    std::cout<<"============prefix&postfix=================="<<std::endl;
    value = 5;
    std::cout<<"increment value is:"<<value++ <<std::endl;;//6
    std::cout<<"decrement value is:"<< value-- <<std::endl;//6-1=5

    
    std::cout<<"============prefix&postfix=================="<<std::endl;
    value = 5;
    ++value;
    std::cout<<"increment value is:"<<value++ <<std::endl;;//6
    std::cout<<"decrement value is:"<< value-- <<std::endl;//6-1=5

    return 0;
}