#include "Drink.h"

Drink::Drink(std::string name, double price, unsigned int quantity, DrinkType type)
	: name(name), price(price), quantity(quantity), type(type) {}


std::string Drink::getTypeName(DrinkType type) {
    switch (type) {
    case WINE:
        return "Wine";
    case GIN:
        return "Gin";
    case WHISKEY:
        return "Whiskey";
    case WATER:
        return "Water";
    case JUICE:
        return "Juice";
    case ICE_TEA:
        return "Ice tea";
    default:
        return "Invalid";
    }
}

//void Drink::setName(string drinkname)
//{
//	this->drinkName = drinkname;
//}
//void Drink::setUsername(string username)
//{
//	this->username = username;
//}
//void Drink::setType(string type)
//{
//	this->type = type;
//}
//void Drink::setQuantity(double qty)
//{
//	this->quantity = qty;
//}
//void Drink::setPrice(double price)
//{
//	this->price = price;
//}
//double Drink::calculatePrice(double Quantity* double Price + CityTax) const
//{
//	return 0.0;
//}
