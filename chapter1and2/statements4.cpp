#include<iostream>
/*to use funtion multiple type we can declare like this*/
//returntype parameter(reurn type parameter , return type parameter){statement}
int addnumber(int first_parameter, int second_parameter){
    int result = first_parameter + second_parameter;
    return result;
}

int main(){

    int x,y;
    std::cin>>x>>y;
    
    //first type of program to sum the number
    int first_number{x};
    int second_number{y};

    std::cout<<"first number:"<< first_number<<std::endl;  //print x
    std::cout<<"second number:"<< second_number<<std::endl; //print y
    int sum= first_number+ second_number;
    std::cout<<"sum:"<< sum<<std::endl;
    
    //second type of program to sum the number
    sum= addnumber(x,y);  //user defind function
    std::cout<<"second sum:"<<sum<<std::endl; //print user defind funtion
    sum= addnumber(57,89);
    std::cout<<"third sum:"<<sum<<std::endl;
    //bonus 
    std::cout<<"fourth sum"<< addnumber(49,56)<<std::endl;
    return 0;
    //easy no yoink ;)

    


}