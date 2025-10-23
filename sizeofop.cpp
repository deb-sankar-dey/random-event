#include<iostream>


int main(){

std::string name = "ankush is unstopable"; 
double score = 3.9;
char grade = 'A';
bool dsd = true;
char grades[] = {'a', 'b', 'c', 'd', 'f'};

std::cout << sizeof(name) << "bytes" << '\n';
std::cout << sizeof(score)  << "bytes" << '\n';
std::cout << sizeof(grade)  << "bytes" << '\n';
std::cout << sizeof(dsd)  << "bytes" << '\n';
std::cout << sizeof(grades)/sizeof(char) << "bytes" << '\n';





    return 0;
}