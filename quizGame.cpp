#include<iostream>

int main(){

    std::string questions[] = {"1. when C++ was invented?: ", 
                               "2. who invented C++?: ",
                               "3. predessecor of C++?: ",
                               "4. is the earth flat?: "};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. guido rossum", "B. Bjarne stostrup", "C.john hunchback", "D. mark juckerbrug"},
                                {"A. c", "B. C+", "C. C#", "D. C--"},
                                {"A. yes", "B. no", "C. sometimes", "D. rectangular"}};
                                
    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        std::cout << "**********************\n";
        std::cout << questions[i] << '\n';
        std::cout << "**********************\n";

        for(int j = 0; j < sizeof(options[0])/sizeof(options[0][0]); j++){
            std::cout << options[i][j] << '\n';
        }   
        std::cout << "try to guess : ";
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "correct\n";
        }
        else{
            std::cout << "not corrrect ";
            std::cout << "answer is: " << answerKey[i] << '\n';
        }
    }

    return 0;
}