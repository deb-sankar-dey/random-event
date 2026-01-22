#include<iostream>

double area(double r){
    return 22*r*r/7;
}
double circumfarence(double r){
    return 2*(22/7)*r;
}

int main(){

    double r;

    std::cout << "enter the radius : "<< '\n';
    std::cin >> r;

    std::cout << area(r) << '\n';
    std::cout << circumfarence(r) << '\n';

    return 0;
}