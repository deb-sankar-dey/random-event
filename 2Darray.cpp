#include<iostream>


int main(){

    std::string foods[][3] = {{"kimchi", "sushi", "ramen"},
                              {"rosogolla", "khir", "payesh"}, 
                              {"pizza", "burger", "rolls"}};

    int rows = sizeof(foods)/sizeof(foods[0]);
    int columns = sizeof(foods[0])/sizeof(foods[0][0]);

    for(int i = 0; i < columns; i++){
        for(int j = 0; j < rows; j++){
            std::cout << foods[i][j] << " ";
        }
        std::cout << '\n';
    }
   


    return 0;
}