#include<iostream> 
namespace first{
    int x = 1;
} 
namespace second{
    int x = 2;
}

                        //namespaces = provides a solution for preventing name conflicts in
  int main(){

    using namespace first;

    std::cout << x << '\n';
    std::cout << second::x << '\n';

} 


