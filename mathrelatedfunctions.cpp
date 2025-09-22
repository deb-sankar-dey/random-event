#include <iostream>
#include <cmath>


int main(){

double x = 3.22;
double y = 5;
double z;
z = std::max(x , y);

z = pow(2,5);
z = sqrt(144);
z = abs(-3);  //abs functions gives the positive version or absolute version of any negative no.
z = round(x);
z = ceil(x);
z = floor(x);

std::cout << z << '\n';

}