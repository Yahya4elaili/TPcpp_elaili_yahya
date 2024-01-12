// Zoo.cpp
#include "Zoo.h"
#include "Animal.h"
#include <algorithm>
#include <iostream>

const int Zoo::MAX_CAPACITY = 100; // Assuming a maximum capacity

// Constructor
Zoo::Zoo(const std::string& name) : name(name) {}

// Method to add an animal
bool Zoo::addAnimal(const std::shared_ptr<Animal>& animal) {
    if (animals.size() < MAX_CAPACITY) {
        animals.push_back(animal);
        return true;
    }
    return false;
}

// Method to remove an animal by name
bool Zoo::removeAnimalByName(const std::string& name) {
    auto it = std::find_if(animals.begin(),
                           animals.end(),
                           [&name](const std::shared_ptr<Animal>& animal) {
                               return animal->getName() == name;
                           });

    if (it != animals.end()) {
        animals.erase(it);
        return true;
    }
    return false;
}

// Method to search for an animal by name
std::shared_ptr<Animal> Zoo::searchAnimalByName(const std::string& name) const {
    auto it = std::find_if(animals.begin(), animals.end(),
                           [&name](const std::shared_ptr<Animal>& animal) {
                               return animal->getName() == name;
                           });

    if (it != animals.end()) {
        return *it;
    }
    return nullptr;
}

// Method to list all animals
void Zoo::listAnimals() const {
    std::cout << "Animals in " << name << " Zoo:" << std::endl;
    for (const auto& animal : animals) {
        animal->printInfo();
        std::cout<< std::endl;
    }
}

// Method to calculate the average age of a specific type of animals
template <typename T>
double Zoo::averageAgeForType() const {
}