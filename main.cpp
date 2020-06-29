#include <iostream>
#include <sstream>
#include <string>


// DSA_Intro: Asymptotic Analysis
// Lesson Link: https://www.programiz.com/dsa/asymptotic-notations
// Additional Resource: https://www.geeksforgeeks.org/analysis-of-algorithms-set-3asymptotic-notations/
//
// Asymptotic Notations are used to describe the running time of an
// algorithm. There are three main notations.
//
// - Theta Notation(AVERAGE)
//      - Encloses the function from above and below, represents the
//      average case complexity of an algorithm
//
//      - For a function g(n), (theta)(g(n)) is given by the following relation:
//      = {f(n): there exists positive constants c1, c2 and n0 such that 
//      0 <= c1g(n) <= f(n) <= c2g(n) for all n >= n0}
//
// - Big-O Notation(WORST-CASE)
//      - Represents the upper bound of the algorithm running time, 
//      denoting the worst case complexity
//
//      - For a function g(n), (big-O)(g(n)) is given by the following relation:
//      = {f(n): there exists positive constants c and n0 such that
//      0 <= f(n) <= cg(n) for all n >= n0}
//
// - Omega Notation(BEST-CASE)
//      - Represents the lower bound of the algorithm running time, 
//      denoting the best case complexity
//
//      - For a function g(n), (omega)(g(n)) is given by the following relation:
//      = {f(n): there exists positive constants c and n0 such that
//      0 <= cg(n) <= f(n) for all n >= n0}


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