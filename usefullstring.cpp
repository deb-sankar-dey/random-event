#include<iostream>

int main(){

std::string name;

std::cout << "enter your name : ";
std::getline(std::cin, name);

name.insert(1, "@");
std::cout << name;







}