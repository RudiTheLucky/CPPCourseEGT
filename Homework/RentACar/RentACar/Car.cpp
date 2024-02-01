// Car.cpp
#include "Car.h"
#include <iostream>

Car::Car(const std::string& brand, const std::string& model, const std::string& type, const std::string& color, const std::string& chassisNumber, const std::string& registrationNumber, double fuelConsumption)
    : brand(brand), model(model), type(type), color(color), chassisNumber(chassisNumber), registrationNumber(registrationNumber), fuelConsumption(fuelConsumption) {}

void Car::printInfo() const {
    std::cout << "Brand: " << brand << "\nModel: " << model << "\nType: " << type << "\nColor: " << color << "\nChassis Number: " << chassisNumber
        << "\nRegistration Number: " << registrationNumber << "\nFuel Consumption: " << fuelConsumption << " liters/km\n";
}

#include "FamilyCar.h"
#include "LuxuryCar.h"
#include <vector>

int main() {
    // ????????? ?? ?????? ?? ????????? FamilyCar ? LuxuryCar
    FamilyCar familyCar1("Toyota", "Corolla", "Sedan", "Blue", "123456", "AB1234", 5.5, 30.0, 300);
    FamilyCar familyCar2("Volkswagen", "Golf", "Hatchback", "Silver", "789012", "CD5678", 6.0, 25.0, 600);

    LuxuryCar luxuryCar1("Mercedes", "S-Class", "Sedan", "Black", "234567", "EF9012", 10.0, 100.0, 150, 40.0);
    LuxuryCar luxuryCar2("BMW", "X5", "SUV", "White", "345678", "GH3456", 12.0, 120.0, 250, 50.0);

    // ?????????? ?? ???????? ??? ??????
    std::vector<Car*> cars;
    cars.push_back(&familyCar1);
    cars.push_back(&familyCar2);
    cars.push_back(&luxuryCar1);
    cars.push_back(&luxuryCar2);

    // ????????? ?? ???????????? ? ??????????? ?? ?????? ?? ???? ?? ????? ?????????
    for (const auto& car : cars) {
        car->printInfo();
        std::cout << "Rental Cost: " << car->calculateRentalCost() << " BGN\n\n";
    }

    return 0;
}
