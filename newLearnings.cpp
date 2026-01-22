#include<iostream>

void star(int s);

int main(){


int s = 5;
star(s);

    return 0;
}

void star(int s){

    if(s > 0){
        std::cout << "*" << '\n';     
        star(s - 1);    
    }

}