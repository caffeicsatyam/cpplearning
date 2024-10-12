#include<iostream>


int main(){

    //declare and initialize pointer
    int* p_number{}; //will initalize with nullptr
    double* p_fractional_number{};

    //explicitly initialize with nullptr
    int *p_number1{nullptr};
    int *p_fractional_number1{nullptr};
    
    //pointers to different variables are of the same size
    std::cout<< "sizeof(int) : "<< sizeof(int)  <<std::endl; //4
    std::cout<< "sizeof(double) : "<< sizeof(double)  <<std::endl; //8
    std::cout<< "sizeof(double*) : "<< sizeof(double*)  <<std::endl;
    std::cout<< "sizeof(int*) : "<< sizeof(int*)  <<std::endl;
    std::cout<< "sizeof(p_number1) : "<< sizeof(p_number1)  <<std::endl;
    std::cout<< "sizeof(p_factional_number1) : "<< sizeof(p_fractional_number1)  <<std::endl;
    
    //it doesnt matter where you put the * symbol 
    int* p_number2{nullptr};
    int * p_number3{nullptr};
    int *p_number4{nullptr};

    int *p_number5{}, other_int_ver{};
    int* p_number6{}, other_int_ver6{}; //confusing as you wonder if other_int_ver6
                                        //is also a pointer to int. It is not the structure
                                        //is exactly same for the previous statement


    // other is that you should put into other lines

    //initialzing pointer and assigning them data
    //we know that pointer store addressses of variable
    int int_var{43};
    int *p_int{&int_var}; //the addresses of operator(&);

    std::cout<<"int var : " << int_var << std::endl;
    std::cout<< "p_int(address in memory) : "<<p_int<<std::endl;

    //you can change the address stored in a pointer any time
    int int_var1{65};
    p_int = &int_var1;
    std::cout<< "p_int (with different addresses) : "<<p_int << std::endl;
     
    
    
    //can't cross assign between pointers of different types
    int *p_int1{nullptr};
    double double_var{33};


   // p_int = &double_var; //compiler error
    

   //dereferencing a pointer : 
    int* p_int2{nullptr};
    int int_data{56};
    p_int2 = &int_data;
    
    std::cout<< " value : " << *p_int2 << std::endl; //dereferencing a pointer



    return 0;
}