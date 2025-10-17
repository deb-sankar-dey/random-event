#include<iostream>
#include<ctime>

char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);

int main(){
    char player;
    char computer;
  
    player = getuserchoice();
    std::cout << "your choice : ";
    showchoice(player);

    computer = getcomputerchoice();
    std::cout << "computer's choice: ";
    showchoice(computer);

    choosewinner(player, computer);


    return 0;
}
char getuserchoice(){
    char player;
    std::cout << "'rock-paper-scissor' game\n";
    std::cout << "****************\n";
    do{
        std::cout << "choose one of the following\n";
        std::cout << "*************//**************\n";
        std::cout << "r for rock\n";
        std::cout << "p for paper\n";
        std::cout << "s for scissors\n";

    std::cin >> player;
    std::cout << player;
    }while(player !='r' && player != 'p' && player!= 's');
    return player;

}
char getcomputerchoice(){
    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1 : return 'r';
        case 2 : return 'p';
        case 3 : return 's'; 
    }
}
void showchoice(char choice){

    switch(choice){
        case 'r': std::cout << "rock\n";
            break;
        case 'p': std::cout << "paper\n";
            break;
        case 's': std::cout << "scissor\n";
            break;
    }
}
void choosewinner(char player, char computer){

    switch(player){
        case 'r': if(computer == 'r'){
            std::cout << "**tie**\n";
        
        }
                  else if(computer == 'p'){
            std::cout << "**you lose**\n";
        
        }
                  else{
            std::cout << "**you win**\n";
        }
        break;
    case 'p':   if(computer == 'p'){
            std::cout << "**tie**\n";
        
        }
                else if(computer == 's'){
            std::cout << "**you lose**\n";
        
        }
                else{
            std::cout << "**you win**";
        }
        break;
    case 's' : if(computer == 's'){
                   std::cout << "**tie**\n";
        
        }
               else if(computer == 'r'){
                   std::cout << "**you lose**\n";
        
        }
                else{
                  std::cout << "**you win\n**";
        }
        break;
    }
}