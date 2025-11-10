#include<iostream>

int main(){

    int a[5];
    int b[5];
    int c[5];

    std::cout << "enter the elemetns of 1st array : ";

    for(int i = 0; i < 5; i++){
        std::cin >> a[i];
    }
    std::cout << "enter the elemetns of 2nd array : ";

    for(int i = 0; i < 5; i++){
        std::cin >> b[i];
    }

    for(int i= 0; i < 5; i++){
        c[i] = a[i] + b[i];
    }

    std::cout << "sum of two arrays are :";

    for(int i = 0; i < 5;i++){
        std::cout << c[i] << '\n';
    }

    return 0;
}