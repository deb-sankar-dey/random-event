#include<iostream>

int main(){

double grade;

std::cout << "enter grade :" << '\n';
std::cin >> grade;

grade >= 90 ? std::cout << "excellent!" : grade >= 60 ? std::cout << "you pass!" : std::cout << "you fail!";



}








