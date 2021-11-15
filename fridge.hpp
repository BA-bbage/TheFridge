#include <iostream>
#include <map>
#include <string>
#include "shelf.hpp"

class Fridge{
    private:
        // Create 5 compartments for each food type
        std::string foodGroup[5] = {"GRAIN", "FRUIT", "VEGETABLE", "PROTEIN", "DAIRY"};
        std::map<std::string, Shelf> shelves;
    public:
        Fridge(){
            for(int i = 0; i < sizeof(foodGroup)/sizeof(foodGroup[0]); i++){
                shelves.insert({foodGroup[i], Shelf(foodGroup[i])});
            }
        }

        void displayShelf(std::string type);
        void addToShelf(Ingredient ingredient);
        void refillFridge();
};