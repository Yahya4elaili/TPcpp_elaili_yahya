//
// Created by yahya on 1/12/2024.
//


#include "Animal.h"
#include <string>

class Reptile : public Animal {
private:
    std::string scalePattern ;

public:
    // Default Constructor
    Reptile();

    // Parameterized Constructor
    Reptile(const std::string& name, const std::string& color, const std::string& diet,
           const std::string& habitat, const std::string& sounds, bool isPet,
           int age, double weight, double height, const std::string& scalePattern);

    // Copy Constructor
    Reptile(const Reptile& other);

    // Setter
    void setScalePattern(const std::string& scalePattern);

    // Getter
    std::string getScalePattern() const;

    // Overridden printInfo Method
    void printInfo() const override;
};


