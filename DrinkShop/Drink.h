#ifndef DRINK_H
#define DRINK_H

#include <string>

enum DrinkType 
{ 
    WINE = 0,
    GIN,
    WHISKEY,
    WATER,
    JUICE,
    ICE_TEA
};

class Drink {
protected:
    std::string name;
    double price;
    unsigned int quantity;
    DrinkType type;

public:
    Drink(std::string name, double price, unsigned int quantity, DrinkType type);
    virtual double calculatePrice() const = 0; // Чисто виртуална функция
    static std::string getTypeName(DrinkType type);

};

#endif /* DRINK_H */
