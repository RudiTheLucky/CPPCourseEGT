#ifndef PACKAGESYSTEM_PACKAGE_H
#define PACKAGESYSTEM_OACKAGE_H

#include "Address.h"

class Package {
public:
	Package(int, double, Address, Address);
	double calculateCost();
	void print();
	void setBasePrice(int);
	void setWeight(double);



};


#pragma once
