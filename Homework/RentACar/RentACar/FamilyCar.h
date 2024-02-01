// FamilyCar.h
#ifndef FAMILYCAR_H
#define FAMILYCAR_H

#include "Car.h"

class FamilyCar : public Car {
public:
    FamilyCar(const std::string& brand, const std::string& model, const std::string& type, const std::string& color, const std::string& chassisNumber, const std::string& registrationNumber, double fuelConsumption,
        double usageFee, double distanceTraveled);

    void printInfo() const override;
    double calculateRentalCost() const; // Функция за изчисляване на цената за наем

private:
    double usageFee;
    double distanceTraveled;
};

#endif // FAMILYCAR_H



