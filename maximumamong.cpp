#include<iostream>

int main(){

int x;
    std::cout << "enter first no. :";
    std::cin >> x;
int y;
    std::cout << "enter second no. :";
    std::cin >> y;
int z;
    std::cout << "enter third no. :";
    std::cin >> z;
    
if(x > y){
    if(x > z){
        std::cout << "largest no is :" << x;
    }
    else{
        std::cout << "largest no is :" << z;
    }
}
else{
    if(y > z){
        std::cout << "largest no is :" << y;
    }
    else{
        std::cout << "largest no is :" << z;
    }
}










}