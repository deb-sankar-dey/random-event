#include<iostream>


void prinntNum(int n);

int main(){

    int n = 100;
    prinntNum(n);

    return 0;
}

void prinntNum(int n){

    if(n >= 0){
        std::cout << n <<'\n';
        prinntNum(n - 1);
    }
    
}