#include "Person.h"

Person::Person(std::string name, std::string birthPlace, int age) : 
name(name), birthPlace(birthPlace), age(age){ }

Person::~Person(){}

std::string Person::getName(){
    return name;
}

std::string Person::getBirthPlace(){
    return birthPlace;
}

int Person::getAge(){
    return age;
}

void Person::printPerson(){
    std::cout 
    << "Name: " << name << "\n"
    << "City of birth: " << birthPlace << "\n"
    << "Age: " << age << "\n";

}