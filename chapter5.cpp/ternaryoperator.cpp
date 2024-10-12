//result=(condition)?option1option2;
/*
similar to
if(condition){
  result = option1;
}else{
  result = option2;
}
*/
#include <iostream>
#include<string>


int main(){

	int max{};
    
    int a{35};
    int b{200};
	
    std::cout << std::endl;
	std::cout << "using regular if " << std::endl;
	
    std::cout<<std::endl;

   /* if(a >  b){
        max = a;
    }else{
        max = b;
    }
    */
    std::cout<<std::endl;

    max = (a > b)? a : b; // Ternary operator
	
    std::cout << "max : " << max << std::endl;

    std::cout<<std::endl;

    auto  max1= (a>b)?a:200.5; 
    std::cout<<max1<<std::endl;
    int max2= (a>b)?a:200.5f;
    std::cout<<max2<<std::endl; 

    
	
    
    return 0;
}
