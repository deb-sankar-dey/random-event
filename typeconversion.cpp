#include <iostream>

int main()
{

int correct;
std::cout << "enter the first num :";
std::cin >> correct;
int questions;
std::cout << "enter the second num :";
std::cin >> questions;

double score = correct/(double)questions * 100;

std::cout << score << "%";
return 0;

}