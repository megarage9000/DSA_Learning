#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person{

    std::string name;
    std::string birthPlace;
    int age;

    public:

        Person(std::string name, std::string birthPlace, int age);
        ~Person();

        // getters
        std::string getName();
        std::string getBirthPlace();
        int getAge();

        // print function for debugging
        void printPerson();
};

#endif