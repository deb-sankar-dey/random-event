#include<iostream>

double square(double length);
double cube(double length);

int main(){

    double length = 7.7;
    double area = square(length);
    double volume = cube(length);
    std::cout << area << "cm^2\n";
    std::cout << volume << "cm^3\n";
    return 0;
}
double square(double length){
    return length * length;
}
double cube(double length){
    return length * length * length;

}