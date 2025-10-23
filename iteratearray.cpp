#include<iostream>

int main(){

std::string students[] = {"allu", "arjun", "chris", "rdj", "DSD"};

for(int i = 0;i < sizeof(students)/sizeof(std::string); i++){
    std::cout << students[i] <<'\n';

}

    return 0;
}