#include<iostream>

int add(int a, int b){
    
    return a + b;
}
int sub(int a, int b){
    
    return a - b;
    
}
int multi(int a, int b){
    return a * b;
    
}
double div(int a, int b){
  static_cast<double>(a) / b;
}

int main(){

int a;
int b;
char x;
std::cout << "enter a option : " << '\n';
std::cin >> x;
std::cout << "enter fst no : ";
std::cin >> a;

std::cout << "enter scnd no : ";
std::cin >> b;

switch (x)
{
case '+': 
           std::cout <<  add(a, b);
            break;
case '-':
            std::cout << sub(a, b);
            break;
case '*':
            std ::cout << multi(a, b);
            break;
case '/':   
            if(b==0){
                std::cout << "divided by zero : !";
            }
            else{
            std::cout << div(a, b);
            }
            break;
default :
            std::cout << "invalid input";            

}
}