#include <iostream>
#include <sstream>
#include <string>



double factorial(int num);
int getIntegerInput(std::string message);

int main(){
    std::cout << "--- Simple Factorial Program ---\n";
    std::cout << factorial(getIntegerInput("Enter an integer: ")) << '\n';
}

int getIntegerInput(std::string message){

    int result;
    std::string userInput;
    while(true){
        
        std::cout << message;
        std::getline(std::cin, userInput);
        std::stringstream userStream(userInput);
        bool success = (userStream >> result) && !(userStream >> result);
        if(success){
            return result;
        }
        else{
            std::cerr << "Invalid integer input\n";
        }
    }
}


double factorial(int num){
    double n = num;
    int i = n - 1;
    if(n == 0){
        return 1;
    }
    else{
        while(i > 0){
            n *= i;
            i--;
        }
        return n;
    }
}