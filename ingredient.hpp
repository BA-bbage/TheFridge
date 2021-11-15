#include <iostream>
#include <string>

class Ingredient{
    private:
        std::string name;
        std::string foodGroup;
        int quantity;
    public:
        Ingredient(std::string _name, std::string _foodGroup, int _quantity){
            name = _name;
            foodGroup = _foodGroup;
            quantity = _quantity;
        }

        // Getters
        std::string getName(){return name;}
        std::string getfoodGroup(){return foodGroup;}
        int getQuantity(){return quantity;}

        // Setters
        void setName(std::string _name){name = _name;}
        void setFoodGroup(std::string _foodGroup){foodGroup = _foodGroup;}
        void setQuantity(int _quantity){quantity = _quantity;}

        // Functions
        void displayIngredient();
};