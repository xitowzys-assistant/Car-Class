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
    IstransportStart = true;
}

void Car::stopTransport() {
    IstransportStart = false;
}

void Car::refuelTransport(float liters) {
    if(liters < 0)
        throw CarException("Объем не может быть отрицательным!");

    gasolineVolume = liters;
}

void Car::printSpecifications() const {
    using namespace std;

    cout << "Модель: " << model << "\n";
    cout << "Цвет: " << color << "\n";
    cout << "Двигатель: " << engine << "\n";
    cout << "Мощность: " << power << "\n";
    cout << "Год выпуска: " << yearRelease << "\n";
}

void Car::printStatusTransport() const {
    using namespace std;

    if (IstransportStart)
        cout << "Транспорт заведен"<< "\n";
    else
        cout << "Транспорт заглушен"<< "\n";

    cout << "Объем бензина: " << gasolineVolume << "\n";

}
