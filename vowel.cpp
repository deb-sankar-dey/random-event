#include<iostream>

int main(){

    char vowel;
    std::cout << "press A,E,I,O,U :";
    std::cin >> vowel;

    switch(vowel){
    case 'a':
        std::cout << "is a vowel";
        break;
    case 'A':
            std::cout << "is a vowel";
            break;
    case 'E':
            std::cout << "is a vowel";
            break;
    case 'e':
            std::cout << "is a vowel";
            break;
    case 'I':
            std::cout << "is a vowel";
            break;
    case 'i':
            std::cout << "is a vowel";
            break;
    case 'O':
            std::cout << "is a vowel";
            break;
    case 'o':
            std::cout << "is a vowel";
            break;
    case 'U':
            std::cout << "is a vowel";
            break;
    case 'u':
            std::cout << "is a vowel";
            break;
    default :
            std::cout << "is not a vowel";    
        

    }


}