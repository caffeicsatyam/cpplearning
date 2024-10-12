#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>

// void enter_bar(size_t age){ //function pararmeter

//     if(age>18){
//         std::cout<<"You're "<< age <<"years old,please proceed. "<<std::endl;
//     }else{
//         std::cout<<"sorry, you are too young,no offence!"<<std::endl;
//     }
// }


void max( int a, int b){

}

//function that doesn't take parameter and return nothing
void say_hello(){
    std::cout<<"hello there!" <<std::endl;
   // return; //you could omit this return  statment for function returning void
}



int lucky_number(){
    return 99;
}

int main(){
//     std::cout<<std::endl;
    
//   /*
//     enter_bar(22); //function calling
//     enter_bar(9);
//     for( size_t i{0};i<=22;i++){
//         enter_bar(i);
//     }
//     */
   int x{22};
   int y{44};
//    int results = max(10,24); //arguements
//    std::cout<<results<<std::endl;

//    int result =max(x,y);
//    std::cout<<result<<std::endl;

//    result = lucky_number();
//    std::cout<<result<<std::endl;
say_hello();
int result  = lucky_number();
std::cout<<"result : "<<result<<std::endl;

   
}