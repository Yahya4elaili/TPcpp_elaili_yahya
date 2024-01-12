//
// Created by yahya on 1/12/2024.
//



#include "Bird.h"

// Default Constructor
Bird::Bird() : Animal(), wingspan(10) {}

// Parameterized Constructor
Bird::Bird(const std::string& name,
               const std::string& color,
               const std::string& diet,
               const std::string& habitat,
               const std::string& sounds,
               bool isPet,
               int age,
               double weight,
               double height,
               double wingspan)
        : Animal(name, color, diet, habitat, sounds, isPet, age, weight, height) ,wingspan{} {}

// Copy Constructor
Bird::Bird(const Bird& other) : Animal(other), wingspan(other.wingspan) {}

// Setter
void Bird::setWingspan(double Wingspan) {
    this->wingspan = wingspan;
}

//Getter
double Bird::getWingspan() const {
    return wingspan;
}

// Overridden printInfo Method
void Bird::printInfo() const {
    Animal::printInfo();
    std::cout << "Wingspan : " << wingspan << std::endl;
}
