#include<iostream>

int main(){

int a[2][2];
int b[2][2];
int c[2][2] = {0};

std::cout << "enter first matrix : " << '\n';

for(int i = 0; i < 2; i++){
    for(int j = 0; j<2; j++){
        std::cin >> a[i][j];
    }
    std::cout << '\n';
}
std::cout << "enter second matrix : ";

for(int i = 0;i < 2; i++){
    for(int j = 0; j < 2;j++){
        std::cin >> b[i][j];
    }
    std::cout << '\n';
}

for(int i = 0;i < 2;i++){
    for(int j = 0;j < 2; j++){
        for(int k = 0; k < 2;k++){
            c[i][j] += a[i][k] * b[k][j];
        }
    }
}


std::cout << "results are : " << '\n';

for(int i = 0;i < 2;i++){
    for(int j = 0;j < 2; j++){
        std::cout << c[i][j] << " ";
    }
    std::cout << '\n';
}
    return 0; 
}