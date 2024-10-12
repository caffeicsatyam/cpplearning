#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>


void say_age(int age){
    ++age;
    std::cout<< " Hello , you are " << age << " year old " << std::endl;

}

int main(){
    std::cout<<std::endl;
    int age(23);  //local
    std::cout<<"age (before call) : "<<age <<" &age :"<<&age<< std::endl;
    say_age(age);
     std::cout<<"age (after call) : "<<age <<" &age :"<<&age<< std::endl;



    return 0;
}