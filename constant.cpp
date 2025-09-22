#include<iostream>

int main(){
    const double PI = 3.14;     //costant value cant be change
    double radius = 20;
    double circumstances = 2 * PI * radius;

    std::cout << circumstances << "cm" << '\n';

    const int LIGHT_SPEED = 23656652;
    const int width = 1080;
    const int height = 180;

    std::cout << LIGHT_SPEED << '\n';
    std::cout << width << '\n';
    std::cout << height << " cm" << '\n';


}
