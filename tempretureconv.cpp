#include <iostream>

int main(){

double temp;
char unit;

std::cout << "*******************TEMP***********************\n";
std::cout << "F = farenhite\n";
std::cout << "C = celcius\n";
std::cout << "what you like to convert to : ";
std::cin >> unit;


if(unit == 'F' || unit == 'f'){

    std::cout << "enter the tempreture in celcius : ";
    std::cin >> temp;

    temp = (1.8 * temp) + 32;
    std::cout << "temp is : " << temp << "F\n";

}
else if(unit == 'C' || unit == 'c'){

    std::cout << "enter the tempreture in farenhite : ";
    std::cin >> temp;

    temp = (temp - 32) / 1.8;
    std::cout << "temp is : " << temp << "C\n";

}
else{
    std::cout << "please enter only between C or F\n";

}



}