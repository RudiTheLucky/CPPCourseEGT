#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "Order.h"

class Customer {
private:
	std::string username;
	std::vector<Order*> orders;

public:
	Customer(std::string username);
	void addOrder(Order* order);
};

#endif /* CUSTOMER_H */
