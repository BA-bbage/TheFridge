#include "fridge.hpp"

void Fridge::displayShelf(std::string type)
{
    auto it = shelves.find(type);
    it->second.displayAllIngredients();
}

void Fridge::addToShelf(Ingredient ingredient)
{
    shelves.at(ingredient.getfoodGroup()).addIngredient(ingredient);
}

void Fridge::refillFridge()
{
    std::string name;
    std::string foodGroup;
    int quantity;

    std::cout << "What are you putting inside the fridge?" << std::endl;
    std::cin >> name;

    std::cout << "How much are you putting?" << std::endl;
    std::cin >> quantity;

    std::cout << "Which shelf are you putting into?\n"
              << "A. GRAIN\nB. FRUIT\nC. VEGETABLE\nD. PROTEIN\nE. DAIRY"
              << std::endl;
    char choice;
    bool loop = true;
    while(loop){
        std::cin >> choice;
        switch (choice){
            case 'A': case 'a':
                foodGroup = "GRAIN";
                loop = false;
                break;
            case 'B': case 'b':
                foodGroup = "FRUIT";
                loop = false;
                break;
            case 'C': case 'c':
                foodGroup = "VEGETABLE";
                loop = false;
                break;
            case 'D': case 'd':
                foodGroup = "PROTEIN";
                loop = false;
                break;
            case 'E': case 'e':
                foodGroup = "DAIRY";
                loop = false;
                break;
            default:
                std::cout << "Invalid input, try again." << std::endl;
        }
    }

    system("CLS");
    std::cout << "Name:\t\t" << name << std::endl;
    std::cout << "Amount:\t\t" << quantity << std::endl;
    std::cout << "Group:\t\t" << foodGroup << std::endl;
    Ingredient ingredient(name, foodGroup, quantity);
    std::cout << "The following will be put inside the fridge. Is this correct? (y/n)" << std::endl;
    std::cin >> choice;
    loop = true;
    while(loop){
        switch (choice){
            case 'Y': case 'y':
                addToShelf(ingredient);
                loop = false;
                break;
            case 'N': case 'n':
                std::cout << "Please start over" << std::endl;
                loop = false;
                break;
            default:
                std::cout << "Invalid input: try again" << std::endl;
        }
    }
}