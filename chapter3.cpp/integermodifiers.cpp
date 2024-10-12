#include <iostream>

int main(){

    int value1 {10};
    signed int value2 {-300};
    unsigned int value3 {4};
   // unsigned int value4{-30};
   //you said unsigned but u r putting signed value hence it will give compile error
    //it doesnt matter what you put i.e signed or unsigned your size will not change

    std::cout<<"value1:"<< value1<< std::endl;
    std::cout<<"value2:"<< value2<<std::endl;

    std::cout<<"size of value 1 and 2: "<<sizeof(value1) <<"  "<<sizeof(value2)<<std::endl;
    /* unsigned int value3 {-30} compile error*/
    return 0;

}
