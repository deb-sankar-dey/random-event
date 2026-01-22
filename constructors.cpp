#include<iostream>

class student{
    public:
        std::string name;
        int age;

    student(std::string name, int age){
        this->name = name;
        this->age = age;
    }
};

int main(){

student ankush("Deb sankar Dey", 19);

std::cout << ankush.name << '\n';
std::cout << ankush.age << '\n';

    return 0;
}