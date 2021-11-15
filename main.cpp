#include "fridge.hpp"

int main(){
    Fridge fridge;
    Ingredient Strawberry("Strawberry", "FRUIT", 3);
    fridge.addToShelf(Strawberry);
    fridge.displayShelf("FRUIT");
    fridge.refillFridge();
    fridge.displayShelf("FRUIT");

}