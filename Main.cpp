// main.cpp
#include "Animal.h"
#include "Mammal.h"
#include "Zoo.h"
#include "Bird.h"
#include "Reptile.h"
#include <iostream>
#include <memory>

int main() {
    // Create a zoo
    Zoo myZoo("Sunnydale Zoo");

    // Create some animals
    std::shared_ptr<Animal> lion = std::make_shared<Mammal>("Leo", "Golden", "Carnivore",
                                                            "Savannah", "Roar", false,
                                                            5, 190.0, 1.2, "Short Golden");
    std::shared_ptr<Animal> elephant = std::make_shared<Mammal>("Dumbo", "Gray", "Herbivore",
                                                                "Forest", "Trumpet", false,
                                                                10, 6000.0, 3.3, "Gray");
    std::shared_ptr<Animal> stayla = std::make_shared<Bird>("kiko", "yellow", "Herbivore",
                                                                "home", "Trumpet", true,
                                                                10, 1.0, 3.3, 10);

    std::shared_ptr<Animal> Boska = std::make_shared<Reptile>("bouj", "lime", "Carnivore",
                                                                "Forest", "Trumpet", false,
                                                                10, 2.0, 3.3, "diamond");
    // Add animals to the zoo

    myZoo.addAnimal(Boska);
    myZoo.addAnimal(lion);
    myZoo.addAnimal(elephant);
    myZoo.addAnimal(stayla);

    // List all animals in the zoo
    std::cout << "Listing all animals in the zoo:" << std::endl;
    myZoo.listAnimals();

    // Search for an animal by name
    auto searchResult = myZoo.searchAnimalByName("leo");
    if (searchResult != nullptr) {
        std::cout << "Found an animal named Leo:" << std::endl;
        searchResult->printInfo();
    } else {
        std::cout << "No animal named Leo found." << std::endl;
    }

   //the adding of an animal , and verification of the name .
    if (myZoo.addAnimal(Boska)) {
        std::cout << "inserted successully:" << std::endl;

    } else {
        std::cout << "Name already exists." << std::endl;
    }

    // Calculate the average age of Mammals in the zoo
    double averageAge = myZoo.averageAgeForType<Mammal>();
    std::cout << "Average age of Mammals in the zoo: " << averageAge << " years" << std::endl;

    return 0;
}
//
// Created by yahya on 1/12/2024.
//
