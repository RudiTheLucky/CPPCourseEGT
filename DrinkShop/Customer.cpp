#include "Customer.h"

Customer::Customer(std::string username)
	: username(username) {}

void Customer::addOrder(Order* order) {
	this->orders.push_back(order);
}

//Customer::Customer(std::string name) {
//	this->userName = name;
//}
//
//void Customer::addOrder(Order o) {
//	this->orders.push_back(o);
//}
//
//void Customer::print() {
//	for (Order o : orders) {
//		o.print();
//	}