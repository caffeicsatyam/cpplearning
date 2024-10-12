#include<iostream>

int main(){
      char char1{'a'};
      char char2{'b'};
      char char3{'c'};
      char char4{'d'};

      std::cout<<char1<<std::endl;
      std::cout<<char2<<std::endl;
      std::cout<<char3<<std::endl;
      std::cout<<char4<<std::endl;

      std::cout<<std::endl;

      char value= 65;  //ASCII character code for "A" basically koi variable leke %d ke samne rakkha hai aur use print karwaya hai
      std::cout<< "value:" <<value <<std::endl;
      std::cout<< "value(int):"<<static_cast<int>(value)<<std::endl; //isko type cast karke isko integer me change kar diya hai is lliya ye sidha 65 print karega

      //auto-let the compile deduce the type-kud ba khud bata dega konsa type hai

      /*
      auto var1{12};
      auto var2{13.0};
      auto var3{14.0f};
      auto var4{15.0l};
      auto var5{'e'};


      int modifier suffixes
      auto var6{123u};
      auto var7{123ul};
      auto var8{123ll};
      
      std::cout << "var1 occupies : " << sizeof(var1) << " bytes" << std::endl;
      std::cout << "var2 occupies : " << sizeof(var2) << " bytes" << std::endl;
      std::cout << "var3 occupies : " << sizeof(var3) << " bytes" << std::endl;
      std::cout << "var4 occupies : " << sizeof(var4) << " bytes" << std::endl;
      std::cout << "var5 occupies : " << sizeof(var5) << " bytes" << std::endl;
      std::cout << "var6 occupies : " << sizeof(var6) << " bytes" << std::endl;
      std::cout << "var7 occupies : " << sizeof(var7) << " bytes" << std::endl;
      std::cout << "var8 occupies : " << sizeof(var8) << " bytes" << std::endl;
      */
     //assignment

     int var1{123};
     std::cout<<"var1:"<< var1 <<std::endl;
     
     var1=55;
     std::cout<< "var1:"<<std::endl;

     std::cout<<"<------------------------>"<<std::endl;

     double var2={44.55};
     std::cout<<"var2: "<<var2<<std::endl;

     var2=99.99;
     std::cout<<"var2: "<<var2<<std::endl;

     std::cout<<std::endl;

     //bus jub unsign assign ki to signed value nhi dal sakte


     std::cout<<std::endl;

}