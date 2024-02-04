#include "NoAlcohol.h"

NoAlcohol::NoAlcohol(std::string name, double price, unsigned int quantity, DrinkType type,
	double liters, double cityTax)
	: Drink(name, price, quantity, type), liters(liters), cityTax(cityTax) {}

double NoAlcohol::calculatePrice() const
{
	return quantity * price + cityTax;
}

//void NoAlcohol::print() const {
//	std::cout << "NoAlcohol -> name: " << name << ", price: "
//		<< price << ", quantity:" << quantity << ", type: " << Drink::getTypeName(type)
//		<< ", liters: " << liters << ", cityTax: " << cityTax << std::endl;
//}

//NoAlcohol#::NoAlcohol(const std::string& name, string type, double qty,double price, double liters, double cityTax)
//    : Drink(name, type, qty, price, liters, "non-alcoholic"), liters(liters), cityTax(cityTax) {}
//
//double NoAlcohol::CalculatePrice() const {
//    return getQuantity() * getPrice() * (getCityTax()+1);
//}
//void NoAlcohol::print()
//{
//    cout << "Product: " getName() << " " << getType << " " << getQuantity() << "Price per unit" << getPrice
//        cout << GetLiterVol() << " Litres requested,owes a city tax of: " << getCityTax() << endl;
//    cout << "Total due: " << calcPrice() << endl;
//}
//
//4