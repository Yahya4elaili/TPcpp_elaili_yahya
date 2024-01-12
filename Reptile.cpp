//
// Created by yahya on 1/12/2024.
//

#include "Reptile.h"
#include "Mammal.h"

// Default Constructor
Reptile::Reptile() : Animal(), scalePattern("") {}

// Parameterized Constructor
Reptile::Reptile(const std::string& name,
               const std::string& color,
               const std::string& diet,
               const std::string& habitat,
               const std::string& sounds,
               bool isPet,
               int age,
               double weight,
               double height,
               const std::string& scalePattern)
        : Animal(name, color, diet, habitat, sounds, isPet, age, weight, height), scalePattern(scalePattern) {}

// Copy Constructor
Reptile::Reptile(const Reptile& other) : Animal(other), scalePattern(other.scalePattern) {}

// Setter
void Reptile::setScalePattern(const std::string& scalePattern) {
    this->scalePattern = scalePattern;
}

//Getter
std::string Reptile::getScalePattern() const {
    return scalePattern;
}

// Overridden printInfo Method
void Reptile::printInfo() const {
    Animal::printInfo();
    std::cout << "Scale pattern: " << scalePattern << std::endl;
}
