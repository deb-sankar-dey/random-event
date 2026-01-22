#include<iostream>

int main(){

int *ptr;
int num = 10;

ptr = &num;
*ptr = num;
std::cout << *ptr << '\n';
std::cout << ptr << '\n';
std::cout << num << '\n';


    return 0;
}