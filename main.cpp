#include <iostream>
#include <sstream>
#include <string>


// DSA_Intro: Why DSA's are important
// Lesson Link: https://www.programiz.com/dsa/why-algorithms

// Why are Data Structures and Algorithms Important?
// - Time
//      - Allows programs to run faster
// - Scalabilitiy
//      - Can deal with larger problems
// - Memory
//      - Can use the least or use memory in
//      the most efficient way possible

double factorial(int num);
double sumNaturalNumbers(int n);
int getIntegerInput(std::string message);

int main(){
    // std::cout << "--- Simple Factorial Program ---\n";
    // std::cout << factorial(getIntegerInput("Enter an integer: ")) << '\n';
    
    std::cout << "--- Sum Natural Numbers Program --- \n";
    std::cout << sumNaturalNumbers(getIntegerInput("Enter a number: ")) << '\n';
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
    double fact = 1;
    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
    return fact;
}

double sumNaturalNumbers(int n){
    // Natural number series:
    // https://en.wikipedia.org/wiki/1_%2B_2_%2B_3_%2B_4_%2B_%E2%8B%AF
    return n * (n + 1)/2;
}