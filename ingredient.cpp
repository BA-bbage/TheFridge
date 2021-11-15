#include "ingredient.hpp"

void Ingredient::displayIngredient(){
    std::cout << "Name: " << getName() << "\t";
    std::cout << "Group: " << getfoodGroup() << "\t";
    std::cout << "Quantity: " << getQuantity() << std::endl;
}