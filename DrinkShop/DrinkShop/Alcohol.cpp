#include "Alcohol.h"

Alcohol::Alcohol(std::string name, double price, unsigned int quantity, DrinkType type, 
					double volume, double tax)
	: Drink(name, price, quantity, type), volume(volume), tax(tax) {}

double Alcohol::calculatePrice() const
{
	return quantity * (price * tax);
}

//void Alcohol::setVolAlcohol(double volAlc)
//{
//	this->volumeAlcohol = volAlc
//}
//void Alcohol::setAlcTax(double alcTax)
//{
//	this->alcTax = alcTax;
//}
//double Alcohol::getVolAlcohol()
//{
//	return this->volumeAlcohol;
//}






