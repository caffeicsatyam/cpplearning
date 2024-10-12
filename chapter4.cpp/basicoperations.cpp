#include<iostream>

int main(){
    /*
     + -*
     / isse integer me fractional no nhi mileg
     %0-modulus
    */
    //addition
    int number1{2};
    int number2{7};
    int result = number1 +  number2;
    std::cout<<"result: "<<result<< std::endl;


    //subtractionn
     result = number2- number1;
     std::cout<<"result : " <<result << std::endl;


     //multiplication
     result = number1*number2;
     std::cout<<"result: "<<result <<std::endl; 

     //divison
     result= number2/number1;
     std::cout<<"result : "<< result <<std::endl;

     //modulus
     result = number2 % number1;
     std::cout<<"result: "<<result <<std::endl;
     

     
    
    return 0;

}