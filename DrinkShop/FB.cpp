// FB.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Alcohol.h"
#include "NoAlcohol.h"
#include "Drink.h"
#include "Order.h"
#include "Customer.h"

void print(std::vector* customers) {

}

int main() {
    std::vector customers();
    Customer customer("Acho");
    Order order;
    customer.addOrder(&order);
    customers.push_back(customer);

    Alcohol whiskey("Whiskey", 4.99, 2, DrinkType::WHISKEY, 50, 10);
    order.addDrink(&whiskey);

    print(customers);
}

//Customer customer(*Name*);
//Order order(*First Order*);
//
//vector<Drink*> drinksList;
//Drink* aPtr = new Alchohol(*martini*, 2, 15, "A", 10);
//order.addDrink(aPtr);
////invoke calculate total Price
//Drink* aPtr2 = new Alcohol(*vodka*, 5, 25, "A", 30);
//order.addDrink(aPtr2);
////invoke calculate total Price
//
//Order order2(*Second Order*);
//vector<Drink*> drinksList2;
//Drink* aPtr3 = new Alchohol(*jack*, 2, 50, "A", 10);
//order2.addDrink(aPtr3);
//Drink* aPtr4 = new Alcohol("gin", 1, 25, "A", 30);
//order2.addDrink(aPtr4);
//
//customer.addOrder(order);
//customer.addOrder(order2);
//customer.print();


/*Drinks* aPtr = new Alcoholic("user1");
Drinks* naPtr = new Noalcoholic("user2");

Alcohol* aPtr = new Alcoholic();
NoAlcohol* naPtr = new Noalcoholic();

vector<Drinks*> myDrinks;
myDrinks.push_back(aPtr)
myDrinks.push_back(naPtr)

for (int i = 0; i < myDrinks.size;) {
    Alcohol* ptr = dynamic_cast<Alcohol*>(myDrinks.at(i));
    if (prt != 0) {
        cout << Alcohol
    }
    else {
        cout << non alcohol << endl;
    }

}

{
    std::cout << "Hello World!\n";
}*/

