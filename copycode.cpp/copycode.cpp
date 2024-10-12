#include <iostream>

char userchoice();
char compchoice();
void showchoice(char choice);
void choosewin(char user, char comp);



int main (){
    char user;
    char comp;
    user = userchoice();
    std::cout << "Your choice: ";
    showchoice(user);
    comp =compchoice();
    std::cout <<"Computer's choice:";
    showchoice(comp);
    choosewin(user, comp);



    return 0;
}

char userchoice(){
    char user;
    do {
       std::cout<<"'R' for rock\n";
       std::cout<<"'P' for Paper\n";
       std::cout<<"'S' for Scissors\n";
       std::cin >> user ; }while (user != 'R' && user != 'P' && user != 'S' );
    return user;

}
char compchoice(){
    srand(time(0));
    int num= rand() %3 +1;
    switch (num)
    {
    case 1:return 'R';
    case 2:return 'S';
    case 3:return 'P';

    }
    }
void showchoice(char choice){
    switch (choice)
    {
    case 'R':
        std::cout <<"Rock";
        break;
    case 'P':
        std::cout <<"Paper";
        break;
    case 'S':
        std::cout <<"Scissors";
        break;
    
    
    default:
    std::cout <<"Inavlid choice";
        break;
    }


}
void choosewin(char user, char comp){
    switch(user){
        case 'R':if (comp == 'R'){
                   std::cout << "It's a tie.";}
                else if (comp == 'P'){
                   std::cout <<"You lose.";}
                else {
                    std::cout <<"You win!";
                }
                break;

        case 'S':if (comp == 'S'){
                   std::cout << "It's a tie.";}
                else if (comp == 'R'){
                   std::cout <<"You lose.";}
                else {
                    std::cout << "You win!";
                }
                break;

        case 'P':if (comp == 'P'){
                   std::cout << "It's a tie.";}
                else if (comp == 'S'){
                   std::cout <<"You lose.";}
                else {
                    std::cout << "You win!";
                }
                break;
        }


        
    }