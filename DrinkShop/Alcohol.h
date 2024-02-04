#ifndef ALCOHOL_H
#define ALCOHOL_H

#include "Drink.h"

class Alcohol : public Drink {
private:
    double volume;
    double tax;

public:
    Alcohol(std::string name, double price, unsigned int quantity, DrinkType type,
        double volume, double tax);

    double calculatePrice() const;
    double print() const;

        //: wine(brand), gin(brand), whiskey(brand), water(brand), water(brand),
        //juice(brand), icetea(brand) {}
        //: : Drinks(Name, Price, Quantity, Type), calculatePrice(calculatePrice) {}
};

#endif /* ALCOHOL_H */