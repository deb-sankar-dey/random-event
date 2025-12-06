#include<iostream>
#include<string>

class student{
    public:
        std::string name;
        int id;
        int age;
        double cgpa;

        void GetstudentDetails(){
           
                std::cout << "enter student name : " << '\n';
                std::getline(std::cin >> std::ws, name);
                
                std::cout << "enter the age :" << '\n';
                std::cin >> age;

                std::cout << "enter id no# : " << '\n';
                std::cin >> id;

                std::cout << "enter cgpa : " << '\n';
                std::cin >> cgpa;
          
        }
        void ShowDetails(){
            
                std::cout << name << '\n';
                std::cout << age << '\n';
                std::cout << id << '\n';
                std::cout << cgpa << '\n';
            
        }
};

int  main(){

student students[10];    

for(int i = 0;i < 10; i++){
    std::cout << "enter details student " << i + 1 << '\n';
    students[i].GetstudentDetails();
}
    std::cout << "student details : " << '\n';
for(int i = 0; i < 10; i++){
    students[i].ShowDetails();
    std::cout << '\n';

}

    return 0;
}