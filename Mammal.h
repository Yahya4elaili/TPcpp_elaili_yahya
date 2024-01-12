//
// Created by yahya on 1/12/2024.
//



#include "Animal.h"
#include <string>

class Mammal : public Animal {
private:
    std::string furColor;

public:
    // Default Constructor
    Mammal();

    // Parameterized Constructor
    Mammal(const std::string& name, const std::string& color, const std::string& diet,
           const std::string& habitat, const std::string& sounds, bool isPet,
           int age, double weight, double height, const std::string& furColor);

    // Copy Constructor
    Mammal(const Mammal& other);

    // Setter
    void setFurColor(const std::string& furColor);

    // Getter
    std::string getFurColor() const;

    // Overridden printInfo Method
    void printInfo() const override;
};
