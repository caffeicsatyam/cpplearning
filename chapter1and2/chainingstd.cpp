//reading data with spaces
#include<iostream>
 int main(){
     int age;
     std::string full_name;

     std::cout<<"please type in your name:"<<std::endl;
     std::getline(std::cin,full_name);

     std::cout<< " type in your age" <<std::endl;
     std::cin>>age;
     std::cout <<"hello "<< full_name << "! you are "<< age <<"years old."<<std::endl;

 }