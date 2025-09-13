#include <iostream>
#include <vector>
#include <string>

class Animal {
public:
    std::string name;
    std::string species;
    int age;

    Animal(std::string n, std::string s, int a) : name(n), species(s), age(a) {}

    void makeSound() const {
        if (species == "Cow") {
            std::cout << name << " says Moo!" << std::endl;
        } else if (species == "Chicken") {
            std::cout << name << " says Cluck!" << std::endl;
        } else {
            std::cout << name << " makes a generic animal sound." << std::endl;
        }
    }
};

class Crop {
public:
    std::string type;
    int quantity;
    bool harvested;

    Crop(std::string t, int q) : type(t), quantity(q), harvested(false) {}

    void harvest() {
        harvested = true;
        std::cout << "Harvested " << quantity << " units of " << type << "." << std::endl;
    }
};

class Farm {
private:
    std::string name;
    std::vector<Animal> animals;
    std::vector<Crop> crops;
    double landArea; 

public:
    Farm(std::string n, double area) : name(n), landArea(area) {}

    void addAnimal(const Animal& animal) {
        animals.push_back(animal);
        std::cout << animal.name << " (" << animal.species << ") added to the farm." << std::endl;
    }

    void addCrop(const Crop& crop) {
        crops.push_back(crop);
        std::cout << crop.type << " crop added to the farm." << std::endl;
    }

    void displayFarmInfo() const {
        std::cout << "\n--- Farm Information: " << name << " ---" << std::endl;
        std::cout << "Land Area: " << landArea << " acres" << std::endl;

        std::cout << "\nAnimals on the farm:" << std::endl;
        if (animals.empty()) {
            std::cout << "No animals on the farm." << std::endl;
        } else {
            for (const auto& animal : animals) {
                std::cout << "- " << animal.name << " (" << animal.species << ", " << animal.age << " years old)" << std::endl;
            }
        }

        std::cout << "\nCrops on the farm:" << std::endl;
        if (crops.empty()) {
            std::cout << "No crops on the farm." << std::endl;
        } else {
            for (const auto& crop : crops) {
                std::cout << "- " << crop.type << " (Quantity: " << crop.quantity << ", Harvested: " << (crop.harvested ? "Yes" : "No") << ")" << std::endl;
            }
        }
    }
};

int main() {
    Farm myFarm("Green Acres", 100.5);

    Animal cow1("Betsy", "Cow", 5);
    Animal chicken1("Clucky", "Chicken", 1);
    myFarm.addAnimal(cow1);
    myFarm.addAnimal(chicken1);

    Crop wheat("Wheat", 500);
    Crop corn("Corn", 300);
    myFarm.addCrop(wheat);
    myFarm.addCrop(corn);

    myFarm.displayFarmInfo();

    return 0;
}
