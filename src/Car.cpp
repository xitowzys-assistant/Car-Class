//
//  Car.cpp
//  carClass
//
//  Created by George Kalinka on 19.11.2021.
//

#include "Car.hpp"

#include <utility>

Car::Car(std::string model,
         std::string color,
         std::string engine,
         unsigned int power,
         unsigned short yearRelease) {
    this->model = std::move(model);
    this->color = std::move(color);
    this->engine = std::move(engine);
    this->power = power;
    this->yearRelease = yearRelease;
}

void Car::runTransport() {

}

void Car::stopTransport() {

}

void Car::refuelTransport(float liters) {

}

std::string Car::printSpecifications() {
    std::cout << "Модель: " << model << "\nЦвет: " << color << "\nДвигатель: " << engine << "\n";
    return std::string();
}
