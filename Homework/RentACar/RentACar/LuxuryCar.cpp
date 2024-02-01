// LuxuryCar.cpp
#include "LuxuryCar.h"
#include <iostream>

LuxuryCar::LuxuryCar(const std::string& brand, const std::string& model, const std::string& type, const std::string& color, const std::string& chassisNumber, const std::string& registrationNumber, double fuelConsumption,
    double usageFee, double distanceTraveled, double additionalExtrasFee)
    : Car(brand, model, type, color, chassisNumber, registrationNumber, fuelConsumption),
    usageFee(usageFee), distanceTraveled(distanceTraveled), additionalExtrasFee(additionalExtrasFee) {}

void LuxuryCar::printInfo() const {
    Car::printInfo();
    std::cout << "Usage Fee: " << usageFee << " BGN/day\nDistance Traveled: " << distanceTraveled << " km\nAdditional Extras Fee: " << additionalExtrasFee << " BGN\n";
}

double LuxuryCar::calculateRentalCost() const {
    double distanceCoefficient = (distanceTraveled < 200) ? 0.6 : 0.4;
    return (usageFee + additionalExtrasFee) * distanceCoefficient;
}
