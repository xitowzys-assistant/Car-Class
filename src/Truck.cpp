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
    this->statusBody = true;
}

void Truck::lowerBody() {
    this->statusBody = false;
}

void Truck::extendSupports() {
    if (retractableLegs)
        this->statusSupports = true;
    else
        throw CarException("Опоры отсутствуют!!!");
}

void Truck::returnSupports() {
    if (retractableLegs)
        this->statusSupports = false;
    else
        throw CarException("Опоры отсутствуют!!!");
}

void Truck::printStatusTransport() const {
    using namespace std;

    Car::printStatusTransport();

    if (statusBody)
        cout << "Кузов поднят\n";
    else
        cout << "Кузов не поднят\n";

    if (statusSupports && retractableLegs)
        cout << "Опоры выдвинуты\n";
    else if (!statusSupports && retractableLegs)
        cout << "Опоры не выдвинуты\n";
}

void Truck::printSpecifications() const {
    using namespace std;

    Car::printSpecifications();

    cout << "Грузоподъемность: " << loadCapacity << "\n";
    cout << "Объем кузова: " << bodyVolume << "\n";

    if (sleepingBag)
        cout << "Спальник есть\n";
    else
        cout << "Спальника нету\n";

    if (preservation)
        cout << "Присутствует консервация\n";
    else
        cout << "Консервации нету\n";

    if (retractableLegs)
        cout << "Имеются выдвижные секции ног\n";
    else
        cout << "Выдвижных секции ног нету\n";
}
