// FamilyCar.cpp
#include "FamilyCar.h"
#include <iostream>

FamilyCar::FamilyCar(const std::string& brand, const std::string& model, const std::string& type, const std::string& color, const std::string& chassisNumber, const std::string& registrationNumber, double fuelConsumption,
    double usageFee, double distanceTraveled)
    : Car(brand, model, type, color, chassisNumber, registrationNumber, fuelConsumption), usageFee(usageFee), distanceTraveled(distanceTraveled) {}

void FamilyCar::printInfo() const {
    Car::printInfo();
    std::cout << "Usage Fee: " << usageFee << " BGN/day\nDistance Traveled: " << distanceTraveled << " km\n";
}

double FamilyCar::calculateRentalCost() const {
    double distanceCoefficient = (distanceTraveled < 500) ? 0.7 : 0.4;
    return usageFee * distanceCoefficient;
}
