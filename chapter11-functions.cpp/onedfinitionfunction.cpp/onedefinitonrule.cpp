//it says that you cant have files with same name
#include <iostream>
#include "person.h"

//Variable : Declaration and definition
double weight {};



struct Point
{
    double m_x{};
    double m_y{};
};

int Person::person_count=8;
int main(){

    Person p1("John Snow",35);
    p1.print_info();

    //std::cout<<Person::person_count<<std::endl;


    return 0;
}

