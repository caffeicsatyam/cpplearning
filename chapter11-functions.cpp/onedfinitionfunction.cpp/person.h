#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include<string>

class Person{
public : 
	Person(const std::string& names_param, int age_param):
	full_name(names_param), age(age_param) {
        // Increment person count when a new person is created
        person_count++;
    }
	
	void print_info()const{
		std::cout << "name : " << full_name << " , age : " << age << std::endl;
	}
private : 
	std::string full_name;
	int age;
	
public : 
	//static variable declaration
	static int person_count;
};

#endif // PERSON_H