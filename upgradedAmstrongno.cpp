#include<iostream>
 
int main(){

    int n;
    int arm = 0;
    int c;
    int r;

    std::cout << "enter the no# : " << '\n' ;
    std::cin >> n;

    c = n;

    if(n < 999){
    while(n > 0){
        r = n % 10;
        arm = (r*r*r)+arm;
        n = n / 10;

    }
}
else if(n > 999){
        while(n > 0){
        r = n % 10;
        arm = (r*r*r*r)+arm;
        n = n / 10;

}
}
else{
    std::cout << "enter a valid no !";
}

    if (c == arm){
        std::cout << "amstrong no : ";

    }
    else{
        std::cout << "not a amstriong no !";
    }
}


