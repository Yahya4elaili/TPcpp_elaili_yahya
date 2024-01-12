//
// Created by yahya on 1/12/2024.
//




#include "Animal.h"
#include <string>

class Bird : public Animal {
private:
    double wingspan;

public:
    // Default Constructor
    Bird();

    // Parameterized Constructor
    Bird(const std::string& name, const std::string& color, const std::string& diet,
           const std::string& habitat, const std::string& sounds, bool isPet,
           int age, double weight, double height, double wingspan);

    // Copy Constructor
    Bird(const Bird& other);

    // Setter
    void setWingspan(double Wingspan);

    // Getter
    double getWingspan() const;

    // Overridden printInfo Method
    void printInfo() const override;
};

