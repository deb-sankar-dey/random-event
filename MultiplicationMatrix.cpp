#include<iostream>

int main(){

int a[3][3];
int b[3][3];
int c[3][3];

std::cout << "****************start*****************" << '\n';
std::cout << "enter first matrix : " ;
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        std::cin >> a[i][j];
    }
    std::cout << '\n';
}
std::cout << "matrix is : " << '\n';

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        std::cout << a[i][j] << " ";
    }
    std::cout << '\n';
}
std::cout << "enter second matrix : ";
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        std::cin >> b[i][j];
    }
    std::cout << '\n';
}
std::cout << "the matrix is : " << '\n';

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        std::cout << b[i][j] << " ";
    }
    std::cout << '\n';
}
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        for(int k = 0; k < 3; k++){
            c[i][j] = c[i][j] + b[i][j] * a[k][j];
        }
    }
}
std::cout << "the multiplication of matrix is : " << '\n';
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        std::cout << c[i][j] << " ";
    }
    std::cout << '\n';
}

std::cout << "************thank you***********" << '\n';
    return 0;
}