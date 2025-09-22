# include <iostream>
# include <ctime>

int main() 
{

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));

    num = (rand() % 100) + 2;

    std::cout << "***********number guessing game************\n";

    do{
        std::cout << "enter a guess between (1-100) : " ;
        std::cin >> guess; 
        tries++;

        if(guess > num){
            std::cout << "too high!\n";
        }
        else if(guess < num){
            std::cout << "too low!\n";
        }
        else{
            std::cout << "correct! #no of tries" << tries << '\n';
        }


    }while(guess != num); 
    
    std::cout << "***************number guessing game*****************\n";
    
    return 0;

}
    




