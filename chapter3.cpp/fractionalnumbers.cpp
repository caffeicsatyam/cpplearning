#include<iostream>
#include<iomanip>

int main(){
    float number1{1.12345678901234567890f}; //precison 7
    double number2{1.12345678901234567890}; //precision 15
    long double number3{1.12345678901234567890L};
    std::cout<<"sizeof flaot"<<sizeof(float)<<std::endl;
    std::cout<<"sizeof fouble"<<sizeof(double)<<std::endl;
    std::cout<<"sizeof long double:  "<< sizeof(long double)<<std::endl;

    std::cout<< std::setprecision(20); //precision control
    std::cout<<"number1 is :"<<number1<<std::endl;
    std::cout<<"number2 is :"<<number2<<std::endl;
    std::cout<<"number3 is :"<<number3<<std::endl;
    //compile karke dekho to 5 digit tak shai hai baki garbage hai

    //float problems : precison is usually too limited
    //for a lot of applications
    float number4{192400023.0f}  ;  //error : narrow9ing conversion
    std::cout<<"number4 :"<<number4<<std::endl;
     double number5{192400023.0f}  ;  //iska precision same ayega float se kyoki number me f hai
    std::cout<<"number5 :"<<number5<<std::endl;
    double number6{192400023.0}  ;  //isme precision  badal gya kyoki f nikal diya number se
    std::cout<<"number6 :"<<number6<<std::endl;

    /*Scientific notation
    what we have see so far in terms of floating point types
    is fixed notation. There is another notation , scientific
    that is handy if you have really huge numbers or small numbers
    to represent*/
    std::cout<<"<-------------------------------->"<<std::endl;

    double number7{192400023};
    double number8{1.92400023e8};
    double number9{1.924e8}; //can ommit the lower 00023
                             //we haven't specified yet thats why it will chop of 23

    double number10{ 0.0000000003298}; 
    double number11{3.498e-11};

    std::cout<<"number7 is"<< number7<<std::endl;
    std::cout<<"number8 is"<<number8<<std::endl;
    std::cout<<"number9 is"<<number9<<std::endl;
    std::cout<<"number10 is"<<number10<<std::endl;
    std::cout<<"number11 is"<<number11<<std::endl;

    //infinity and nan
    std::cout<< std::endl;
    std::cout<<"infinityn and nan"<< std::endl;

    /*double number12{5.6};
    double number13{}; //initialized to 0;
    double number14{}; //initialized to 0;
    //infinity
    double result{ number12/number13};

    std::cout<<number12<<"/"<<number13<<" yields "<<result<<std::endl;
    std::cout<< result<<"+"<<number12<<" yilds "<<result+ number12<<std::endl; 

     //nan
     result = number13/number14; //  0/0
     std::cout<< number13 <<"/"<< number14 <<" =" << result << std::endl;
    */
    double number12{-5.6};
    double number13{}; //initialized to 0;
    double number14{}; //initialized to 0;
    //infinity
    double result{ number12/number13};

    std::cout<<number12<<"/"<<number13<<" yields "<<result<<std::endl;
    std::cout<< result<<"+"<<number12<<" yilds "<<result+ number12<<std::endl; 

     //nan
     result = number13/number14; //  0/0
     std::cout<< number13 <<"/"<< number14 <<" =" << result << std::endl;
     // ab is wale me -n/0 kiya to - inf answer ayegga




    return 0;
}