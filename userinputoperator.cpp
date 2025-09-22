#include <iostream>

// cout << (insertion opearator)
// cin >> (extraction opeartor)

int main(){

std::string name;
int age;

std::cout << "whats your full name? : ";
std::getline(std::cin, name);

std::cout << "your age : ";
std::cin >> age;

std::cout << "my name is " << '\n';
std::cout << "i am " << " years old";

}


