#include "Order.h"
#include <iostream>

Order::Order() {
	this->datetime = time(0);
	this->totalAmount = 0;
}

void Order::addDrink(Drink* drink) {
	this->drinks.push_back(drink);
	this->totalAmount += drink->calculatePrice();
}

void Order::print() {

}

//int Order::numberofOrders = 0;
//Order::Order(std::string name) {
//	this->orderName = name;
//	numberofOrders++;
//	this->number = numberofOrders;
//}
//void Order::addDrink(*Drink) {
//	this->drinks.push_back(Drink);
//}
//void Order::print() {
//	cout << "Order number" << this->number <<
//		for (int i = 0; i < drinks.size();i++) {
//			drinks.at(i)->print();
//		}
//}