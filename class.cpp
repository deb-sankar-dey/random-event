#include<iostream>

class human{
    public:
    std::string name;
    std::string occupation;
    int age;

    void eat(){
        std::cout << "the person is eating\n";
    }

};
int main(){

human human1;
human human2;


human1.name = "Deb Sankar Dey";
human1.occupation = "AI engenieer";
human1.age = 26;

human2.name = "Toshiba";
human2.occupation = "Data Scientist";
human2.age = 26;




std::cout << human1.name << '\n';
std::cout << human1.occupation << '\n';
std::cout << human1.age << '\n';

human1.eat();

std::cout << human2.name << '\n';
std::cout << human2.occupation << '\n';
std::cout << human2.age << '\n';

human1.eat();

    return 0;
}