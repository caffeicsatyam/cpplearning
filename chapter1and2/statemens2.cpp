#include<iostream>


int main(){
    int x,y;
    std::cin>>x>>y;
    int first_number{x}; //statement
    int second_number{y}; 
    //statement2
    //storing the data in variables is that you can change the variable as you want.

    std::cout<< "first number:"<<first_number<<std::endl;
    std::cout<<"second number:"<<second_number<<std::endl;
    int sum = first_number + second_number;
    std::cout<< "sum:"<<sum<<std::endl;
    return 0;

}