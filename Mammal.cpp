//
// Created by yahya on 1/12/2024.
//



#include "Mammal.h"

// Default Constructor
Mammal::Mammal() : Animal(), furColor("") {}

// Parameterized Constructor
Mammal::Mammal(const std::string& name,
               const std::string& color,
               const std::string& diet,
               const std::string& habitat,
               const std::string& sounds,
               bool isPet,
               int age,
               double weight,
               double height,
               const std::string& furColor)
        : Animal(name, color, diet, habitat, sounds, isPet, age, weight, height), furColor(furColor) {}

// Copy Constructor
Mammal::Mammal(const Mammal& other) : Animal(other), furColor(other.furColor) {}

// Setter
void Mammal::setFurColor(const std::string& furColor) {
    this->furColor = furColor;
}

//Getter
std::string Mammal::getFurColor() const {
    return furColor;
}

// Overridden printInfo Method
void Mammal::printInfo() const {
    Animal::printInfo();
    std::cout << "Fur Color: " << furColor << std::endl;
}
