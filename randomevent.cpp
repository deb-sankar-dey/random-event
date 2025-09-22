#include<iostream>
#include<ctime>

int main()
{
    srand(time(NULL));

    int randnum = rand() % 5 + 1;

    switch(randnum){
        case 1: std::cout << "you won a travel ticket !\n";
                break;
        case 2: std::cout << "you won a gucci t-shirt !\n";
                break;         
        case 3: std::cout << "you won a headphone !\n";
                break;
        case 4: std::cout << "you won a mobile !\n";
                break;
        case 5: std::cout << "you won a car !\n";
                break;
        

    }

    return 0;
}
