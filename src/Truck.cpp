//
//  Truck.cpp
//  carClass
//
//  Created by George Kalinka on 19.11.2021.
//

#include "Truck.hpp"

#include <utility>

Truck::Truck(std::string model,
             std::string color,
             std::string engine,
             unsigned int power,
             unsigned short yearRelease,
             unsigned int loadCapacity,
             unsigned int bodyVolume,
             bool sleepingBag,
             bool preservation,
             bool retractableLegs) : Car(std::move(model),
                                         std::move(color),
                                         std::move(engine),
                                         power,
                                         yearRelease) {

    if (bodyVolume > INT_MAX)
        throw CarException("Объем кузова не может быть отрицательным!");
    else
        this->bodyVolume = bodyVolume;

    if (loadCapacity > INT_MAX)
        throw CarException("Грузоподъемность не может быть отрицательным!");
    else
        this->loadCapacity = loadCapacity;

    this->sleepingBag = sleepingBag;
    this->preservation = preservation;
    this->retractableLegs = retractableLegs;

}

void Truck::liftBody() {

}

void Truck::lowerBody() {

}

void Truck::extendSupports() {

}

void Truck::returnSupports() {

}

void Truck::printStatusTransport() const {
    using namespace std;

    Car::printStatusTransport();

}

void Truck::printSpecifications() const {
    using namespace std;

    Car::printSpecifications();

    cout << "Грузоподъемность: " << loadCapacity << "\n";
    cout << "Объем кузова: " << bodyVolume << "\n";

    if (sleepingBag)
        cout << "Спатьник есть\n";
    else
        cout << "Спатьника нету\n";

    if (preservation)
        cout << "Присутствует консервация\n";
    else
        cout << "Консервации нету\n";

    if (retractableLegs)
        cout << "Имеются выдвижные секции ног\n";
    else
        cout << "Выдвижных секции ног нету\n";
}
