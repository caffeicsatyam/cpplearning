#include<iostream>

// int max( int a, int b){
//     if(a>b){
//         return a;
//     }else{
//         return b;
//     }
// }

int max(int a,int b); //functuon declaration
                    //does'nt have return type
int min(int a, int b); //function declaration to
                      //doesnt have return type
int mult(int a, int b);


int main(){

    int x{5};
    int y{2};

    int result = max(x,y);
    std::cout<<" max  : "<<result << std::endl;

    int result2  =  min(x,y);
    std::cout<<" min : "<<result2 << std::endl;

    int result3 = mult(x,y);
    std::cout<<" mult :"<<result3<<std::endl; 

    return 0;
}

//function declaration

int max( int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int min( int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int mult( int a,int b){
    return ( (++a)*(++b) ) ;
}