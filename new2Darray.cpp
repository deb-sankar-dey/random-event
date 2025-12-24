#include<iostream>

int main(){

int a[2][2];
int b[2][2];
int c[2][2];
std::cout << "enter first array : " << '\n';
for(int i = 0;i<2;i++){
    for(int j = 0;j<2;j++){
    std::cin >> a[i][j];
    }
    std::cout << '\n';
}
std::cout << "enter second array : " << '\n';
for(int i = 0;i<2;i++){
    for(int j = 0;j<2;j++){
    std::cin >> b[i][j];
    }
    std::cout << '\n';
}

for(int i = 0;i<2;i++){
    for(int j = 0;j<2;j++){
    std::cout << a[i][j] << " ";
    }
    std::cout << '\n';
}
for(int i = 0;i<2;i++){
    for(int j = 0;j<2;j++){
    std::cout << a[i][j] << " ";
    }
    std::cout << '\n';
}
for(int i = 0; i<2; i++){
    for(int j = 0;j<2;j++){
        c[i][j] = a[i][j] - b[i][j];
    }
}
for(int i = 0; i<2; i++){
    for(int j = 0;j<2;j++){
        std::cout << c[i][j] << " ";
    }
    std::cout << '\n';
}

    return 0;
}