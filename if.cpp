#include <iostream>

int main(){

int age;

std::cout << "enter your age :";
std::cin >> age;

//if(age >= 18){
   // std::cout << "you are eligible to watch horror movies";
//}
if(age>=100){
    std::cout << "you are too old to watch !";
}
else if(age >= 18){
    std::cout << "you are eligible to watch horror movies";
}
else{
    std::cout <<"you are not eligible to watch horror movies";

}



}
