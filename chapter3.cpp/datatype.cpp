#include<iostream>

int main (){

    //braced initializers
    //variable may contain random garbage value
    //int elephant_count; //garbage value because we didnt initalize value

    //int lion_count{}; //initaliazes to zero 
    //int dog_count{10}; //initialzes to 10
    //int cat_count{15}; //initalizes to 15

    //can use expression as initializer
    //int domesticated_animals{dog_count + cat_count};
    //int narrowing_conversion{2.9};
    /*std::cout<<"elephant count:"<<elephant_count<<std::endl;

    std::cout<<"lion count:"<<lion_count<<std::endl;

    std::cout<<"dog count:"<<dog_count<<std::endl;

    std::cout<<"domesticated animal count"<<domesticated_animals<<std::endl;
*/
    int bike_count = 2;
    int truck_count = 7;
    int  vehicle_count = bike_count + truck_count ;
    int narrowing_conversion_assignment = 2.9;

    std::cout<< "bike count"<< bike_count<<std::endl;
    std::cout<<"truck count"<< truck_count<<std::endl;
    std::cout<<"vehicle count"<< vehicle_count<<std::endl;
    std::cout<<"narrowing conversion:"<< narrowing_conversion_assignment<<std::endl;
    //checking the size with size of
    std::cout<<"size of int"<< sizeof(int)<<std::endl;
    std::cout<<"size of truckcount"<< sizeof(truck_count)<<std::endl;

    return 0;

}