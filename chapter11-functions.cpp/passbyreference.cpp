#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>


void say_age(int& age); //declaration

int main(){
    std::cout<<std::endl;
    int age(23);  //local
    std::cout<<"age (before call) : "<<age <<" &age :"<<&age<< std::endl;
    say_age(age); //arguement
     std::cout<<"age (after call) : "<<age <<" &age :"<<&age<< std::endl;

    return 0;
}

void say_age(int& age){  //parameter

    ++(age); //increment the original line
    std::cout<< " Hello , you are " << age <<" &age :"<<&age<< std::endl;

}
