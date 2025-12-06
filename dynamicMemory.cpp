#include<iostream>

int main(){

int *pnum = NULL;

pnum = new int;

*pnum = 19;

std::cout << "address " << pnum << '\n';
std::cout << "value " << *pnum << '\n';





    return 0;
}