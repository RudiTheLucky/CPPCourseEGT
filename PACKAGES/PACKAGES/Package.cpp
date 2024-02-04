#include <iostream>
#include "Package.h"
using namespace std;

Package::(int price, double w, Address sa, Address ra)
	: senderAddress(sa), receuverAddress(ra), {
	    setBasePrice(price);
		setweight(w);

}

double Package::calculateCost() {
	return getBasePrice() * getweight();

}

void Package::print() {
	this->senderAddress.print();
	this->receiveAddress.print();
	cout << getBasePrice() << " " << getWeight() << endl;
}

int::Package::getBasePrice() {
	return this->basePrice;
}

double Package::setWeight() {
	return this->weight;
}

double Package::setWeight() {
	return this->setWeight;
}

void Package::setWeight(double w) {
	this->setWeight = w;
}