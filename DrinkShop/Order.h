#ifndef ORDER_H
#define ORDER_H

#include <ctime>
#include <string>
#include <vector>
#include "Drink.h"

class Order {
public:
	Order();
	void addDrink(Drink* drink);
	void print();
private:
	std::vector<Drink*> drinks;
	time_t datetime;
	double totalAmount;
};

#endif /* ORDER_H */
