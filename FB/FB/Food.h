#ifndef FOOD_H
#define FOOD_H

enum FoodType 
{
    Biscuits = 0,
    Chocolates,
    Nuts,
    Tea,
    Coffee
};

class Food {

private:
    FoodType type;

public:
    Food();

//protected:
//    std::string Biscuits;
//    std::string Chocolates;
//    std::string Nuts;
//    std::string Tea;
//    std::string Coffee;
//
//
//
//public:
//    Food(const std::string& biscuits, const std::string& chocolates, const std::string& nuts
//        const std::string& tea, const std::string& coffee)
//        double )
//        : biscuits(brand), chocolates(brand), nuts(brand), tea(brand), coffee(brand), {}
//
//    virtual double (double * double ) const = 0; // Чисто виртуална функция
};

#endif /* FOOD_H */
