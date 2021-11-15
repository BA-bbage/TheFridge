#include "shelf.hpp"

void Shelf::displayAllIngredients(){
    for(auto &ingredient : storage){
        ingredient.second.displayIngredient();
    }
}

void Shelf::addIngredient(Ingredient ingredient){
    // Check if the ingredient is unique.
    if(storage.find(ingredient.getName()) == storage.end()){
        // Is unique - insert to map
        storage.insert({ingredient.getName(), ingredient});
    }
    else{
        // Is not unique - increase quantity
        int quantity = storage.at(ingredient.getName()).getQuantity() + ingredient.getQuantity();
        storage.at(ingredient.getName()).setQuantity(quantity);
    }
}