#include<iostream>

void pyramid(int n);

int main(){

 int n = 1;

 pyramid(n);

    return 0 ;
}
void pyramid(int n){
    if(n <= 5){
        std::cout << "*" <<'\n';
        pyramid(n + 1);
    }
}