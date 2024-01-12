#include "Animal.h"
#include <vector>
#include <memory>
#include <string>

class Zoo {
private:
    std::string name;
    std::vector<std::shared_ptr<Animal>> animals;
    static const int MAX_CAPACITY;

public:
    // Constructor
    explicit Zoo(const std::string& name);

    // Method to add an animal
    bool addAnimal(const std::shared_ptr<Animal>& animal);

    // Method to remove an animal by name
    bool removeAnimalByName(const std::string& name);

    // Method to search for an animal by name
    std::shared_ptr<Animal> searchAnimalByName(const std::string& name) const;

    // Method to list all animals
    void listAnimals() const;

    // Method to calculate the average age of a specific type of animals
    template <typename T>
    double averageAgeForType() const {
        double totalAge = 0.0;
        int count = 0;
        for (const auto &animal: animals) {
            std::shared_ptr<T> specificType = std::dynamic_pointer_cast<T>(animal);
            if (specificType) {
                totalAge += specificType->getAge();
                count++;
            }
        }

        return count > 0 ? totalAge / count : 0.0;

    }
};
