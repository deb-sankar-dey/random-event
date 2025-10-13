#include <iostream>
#include<iomanip>

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

double balance = 0;
int choice = 0;

do{
std::cout << "^^^^^^^enter your choice^^^^^^^ : \n";
std::cout << " 1.show balance : \n";
std::cout << " 2. deposit money : \n";
std::cout << " 3. withdraw money : \n";
std::cout << " 4. exit \n";

std::cin >> choice;

std::cin.clear();
fflush(stdin);

switch(choice){

case 1: showbalance(balance);
            break;
case 2: balance = balance + deposit();
        showbalance(balance);
            break;
case 3: balance -= withdraw(balance);
        showbalance(balance);
            break;
case 4: std::cout << "^^thanks for visiting^^\n";
            break;
default: std::cout << "invalid choice";


}

}while(choice != 4);

}
void showbalance(double balance){
    std::cout << "your balance is : $"<< std::setprecision(2) << std::fixed << balance << '\n'; 
}
double deposit(){

    double amount = 0;
     std::cout << "enter amount to deposit : ";
     std::cin >> amount;
     
     if(amount > 0){
        return amount;
     }
     else{
        std::cout << "thats not a valid amount\n";
     }

}
double withdraw(double balance){
    double amount = 0;
    std::cout << "enter amount to withdraw : ";
    std::cin >> amount;

    return amount;
}