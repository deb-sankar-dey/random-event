#include<iostream>

int main(){

char op;
double num1;
double num2;
double results;

std::cout << "********** CALCULATOR ***********\n";

std::cout << "enter either + ,-,*,/ :";
std::cin >> op;

std::cout << "enter #1: ";
std::cin >> num1;

std::cout << "enter #2: ";
std::cin >> num2;

switch (op)
{
case '+':
    results = num1 + num2;
    std::cout << "results : " << results <<'\n';
    break;
case '-':
    results = num1 - num2;
    std::cout << "results : " << results <<'\n';
    break;

case '*':
    results = num1 * num2;
    std::cout << "results : " << results <<'\n';
    break;

case '/':
    results = num1 / num2;
    std::cout << "results : " << results <<'\n';
    break;

default:
    std::cout << "that wasnt a valid operator!" << '\n';
    break;
}

std::cout << "***************END****************";


}