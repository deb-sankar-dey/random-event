#include<iostream>


int main(){

double price[3] ;

price[0] = 1.09;
price[1] = 7;
price[2] = 9.99;                            //the first element start with 0 then 1 then 2
                             // for printing a particular output you need to clarify the locatin in []
std::cout << price[0] <<'\n';
std::cout << price[1] << '\n';
std::cout << price[2] << '\n';


std::cout << sizeof(price[3]) << "bytes";


    return 0;
}