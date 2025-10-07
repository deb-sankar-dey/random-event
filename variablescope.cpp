#include<iostream>

int mynum = 3; // [global variable ]

void printnum();
int main(){
    int mynum = 1; 
    std::cout << ::mynum << '\n';

    printnum();


    return 0;
}
void printnum(){
    int mynum = 2; 
    std::cout << ::mynum << '\n';

}