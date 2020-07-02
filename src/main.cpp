#include <iostream>
#include <sstream>
#include <string>
#include "Person.h"

double factorial(int num);
int getIntegerInput(std::string message);
std::string getStringInput(std::string message);
Person createPerson();

int main(){
    std::cout << "---- Create a person ---- \n";
    Person newPerson = createPerson();
    newPerson.printPerson();
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

std::string getStringInput(std::string message){
    std::string input;
    std::cout << message;
    std::getline(std::cin, input);
    return input;
}

Person createPerson(){
    std::string name = getStringInput("Enter the person's name: ");
    std::string birthPlace = getStringInput("Enter the person's birth place: ");
    int age = getIntegerInput("Enter the person's age: ");

    Person createdPerson = Person(name, birthPlace, age);
    return createdPerson;
}
double factorial(int num){
    double fact = 1;
    for (int i = 1; i <= num; i++){
        fact = fact * i;
    }
    return fact;
}