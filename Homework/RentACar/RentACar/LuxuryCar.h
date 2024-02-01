// LuxuryCar.h
#ifndef LUXURYCAR_H
#define LUXURYCAR_H

#include "Car.h"

class LuxuryCar : public Car {
public:
    LuxuryCar(const std::string& brand, const std::string& model, const std::string& type, const std::string& color, const std::string& chassisNumber, const std::string& registrationNumber, double fuelConsumption,
        double usageFee, double distanceTraveled, double additionalExtrasFee);

    void printInfo() const override;
    double calculateRentalCost() const; // Функция за изчисляване на цената за наем

private:
    double usageFee;
    double distanceTraveled;
    double additionalExtrasFee;
};

#endif // LUXURYCAR_H
