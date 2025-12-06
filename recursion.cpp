#include<iostream>

void Walk(int steps);
int main(){

int steps = 100;
Walk(steps);

    return 0;
}
void Walk(int steps){
    if(steps > 0){
        std::cout << "you take a step\n";
        Walk(steps - 1);
    }
}