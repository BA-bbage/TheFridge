#include <iostream>
#include <string>
#include <map>
#include "ingredient.hpp"

class Shelf{
    private:
        std::string name;
        std::map<std::string,Ingredient> storage;
    public:
        Shelf(std::string _name){
            name = _name;
        }

        void displayAllIngredients();
        void addIngredient(Ingredient ingredient);
};