#include<iostream>

int main(){

    int num;
    int c;
    int a = 0;
    int b = 1;


    std::cout << "enter a no# series :";
    std::cin >> num;
    
    for(int i = 1; i <= num; i++){
        std::cout << a << " ";
        c = a + b;
        a = b;
        b = c;

    }

    return 0;
}