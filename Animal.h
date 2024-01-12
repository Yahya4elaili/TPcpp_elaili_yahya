//
// Created by yahya on 1/12/2024.
//


#include <string>
#include <iostream>

class Animal {
private:
    std::string name;
    std::string color;
    std::string diet;
    std::string habitat;
    std::string sounds;
    bool isPet;
    int age;
    double weight;
    double height;

public:
    // Default Constructor
    Animal();

    // Parameterized Constructor
    Animal(const std::string& name, const std::string& color, const std::string& diet,
           const std::string& habitat, const std::string& sounds, bool isPet,
           int age, double weight, double height);

    // Copy Constructor
    Animal(const Animal& other);

    // Setters
    void setName(const std::string& name);
    void setColor(const std::string& color);
    void setDiet(const std::string& diet);
    void setHabitat(const std::string& habitat);
    void setSounds(const std::string& sounds);
    void setIsPet(bool isPet);
    void setAge(int age);
    void setWeight(double weight);
    void setHeight(double height);

    // Getters
    std::string getName() const;
    std::string getColor() const;
    std::string getDiet() const;
    std::string getHabitat() const;
    std::string getSounds() const;
    bool getIsPet() const;
    int getAge() const;
    double getWeight() const;
    double getHeight() const;

    // Other Methods
    void makeSound() const;
    virtual void printInfo() const;
};


