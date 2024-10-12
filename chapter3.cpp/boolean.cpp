#include<iostream>
int main(){
    bool redlight{false}; //yaha input le rahae false to output go through ayega
    bool greenlight{true};

    if(redlight == true){
        std::cout<<"stop!"<<std::endl;
    }else{
        std::cout<<"go throught!"<<std::endl;
    }
    std::cout<<std::endl;
    if(greenlight){
        std::cout<<"the light is green"<<std::endl;//ye program check kar rha kki light green hai ki nhi agar nhi to else case
    }else{
        std::cout<<"the light  is not green"<<std::endl;
    }

    //sizeof
    std::cout<<"sizeof(bool):"<< sizeof(bool)<<std::endl;

    //printing out a bool 
    //1--> true
    //0-->false
    std::cout<<std::endl;
    std::cout<<"redlight:"<< redlight <<std::endl;  //print value stored in redlight 
    std::cout<<"greenlight:"<<greenlight<<std::endl;//print value stored in greenlight
    
    std::cout<<std::boolalpha; // it pushes the binary no to true  and false
    std::cout<<std::endl;
    std::cout<<"redlight:"<< redlight <<std::endl;  //print value stored in redlight 
    std::cout<<"greenlight:"<<greenlight<<std::endl;//print value stored in greenlight
    
    return 0;
}