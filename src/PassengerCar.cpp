//
//  PassengerCar.cpp
//  carClass
//
//  Created by George Kalinka on 19.11.2021.
//

#include "PassengerCar.hpp"

PassengerCar::PassengerCar(std::string model,
                           std::string color,
                           std::string engine,
                           unsigned int power,
                           unsigned short yearRelease,
                           bool liftback,
                           bool roofRack) : Car(model,
                                                             color,
                                                             engine,
                                                             power,
                                                             yearRelease) {

    this->liftback = liftback;
    this->roofRack = roofRack;
}

void PassengerCar::openTrunk() {
    this->statusTruck = true;
}

void PassengerCar::closeTrunk() {
    this->statusTruck = false;
}

void PassengerCar::printStatusTransport() const {
    using namespace std;

    Car::printStatusTransport();

    if (statusTruck)
        cout << "Багажник открыт\n";
    else
        cout << "Багажник закрыт\n";
}

void PassengerCar::printSpecifications() const {
    using namespace std;
    Car::printSpecifications();

    if (liftback)
        cout << "Присутствует лифтбэк\n";
    else
        cout << "Лифтбэк отсутствует\n";

    if (roofRack)
        cout << "Багажник на крыше присутствует\n";
    else
        cout << "Багажника на крышу нету\n";
}
