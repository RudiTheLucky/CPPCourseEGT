#ifndef NO_ALCOHOL_H
#define NO_ALCOHOL_H

#include "Drink.h "

class NoAlcohol : public Drink {
private:
    double liters;
    double cityTax;

public:

    NoAlcohol(std::string name, double price, unsigned int quantity, DrinkType type,
        double liters, double cityTax);
    double calculatePrice() const;
    //void print() const;

    //NoAlcoholic(const std::string& water, const std::string& juice, const std::string& icetea)
    //    : Drink(Name, Price, Quantity, Type), calculatePrice(calculatePrice) {}

    //double calculatePrice(double Liters, double CityTax) const override {
    //    double Quantity * Price + CityTax = ();
    //    return usageFee * distanceCoefficient;
    //}
};

#endif /* NO_ALCOHOL_H */

