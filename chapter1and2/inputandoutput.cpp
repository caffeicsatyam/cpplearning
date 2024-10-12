//std::cout : printing stuff to  the console
#include<iostream>
#include<string>



int main(){
     //print data 
     /* 
     std::cout<<"hello world"<<std::endl;
     std::cout<<"the number is:" << 12<< std::endl;

     int age{12};
     std::cout<<"the age is :"<< age<<std::endl;
     
     //error
     std::cerr<<"std::cerr output : somnething went wrong"<< std::endl;
    
    //log message
     std::clog<< "std::clog output : this is a log  message "<< std::endl;
    */
      //int age1;
      //std::string name;

     // std::cout<<"please type your name and age :" <<std::endl;
      /*std::cin>>name;
      std::cin>>age1;*/
      //std::cin>>name>>age1;

      //std::cout<<"hello " << name << "  you   are "<< age1 <<"years old !"<<std::endl;
     std::string fullname;
     int age;

     std::cout<<"please type in your full name and age"<< std::endl;
     std::getline(std::cin,fullname);

     std::cin>>age;

     std::cout<< "hello "<< fullname << " you are" << age <<" years old!"<<std::endl;

     
     return 0;
}