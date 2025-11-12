#include<iostream>

int main(){

int a[3][3];

std::cout << "enter the matrix : ";
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        std::cin >> a[i][j];
    }
    std::cout << '\n';
}
std::cout << "transpose form are : " << '\n';

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        std::cout << a[j][i] << " ";
    }
    std::cout << '\n';
}




    return 0;
}