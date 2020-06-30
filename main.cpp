#include <iostream>
#include <sstream>
#include <string>


// DSA_Intro: Asymptotic Analysis
// Lesson Link: https://www.programiz.com/dsa/master-theorem
// Additional Resources: 
// - https://en.wikipedia.org/wiki/Master_theorem_(analysis_of_algorithms)
// - https://brilliant.org/wiki/master-theorem/
//
// Master Theorem is a formula used to solve recurrence relations of the form
// T(n) = aT(n/b) + f(n)
// where:
// n = size of the input
// a = number of subproblems in the recursion
// n/b = size of each subproblems(all subproblems are assumed of equal size)
// b = level
// f(n) = cost of work done outside recursive call
// - a >= 1 and b > 1, both are constants
// - f(n) is an asymptotically positive function
//
// 3 cases for Master Theorem:
// Let c = log(base b)(a) 
// 1. if f(n) < n ^ log(base b)(a), then T(n) = (theta)(n ^ log(base b)(a))
// 2. if f(n) = n ^ log(base b)(a), then T(n) = (theta)(n ^ log(base b)(a) * log(n))
// 3. if f(n) > n ^ log(base b)(a), then T(n) = (theta)(f(n))


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