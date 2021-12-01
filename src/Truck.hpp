//
//  Truck.hpp
//  carClass
//
//  Created by George Kalinka on 19.11.2021.
//

#ifndef Truck_hpp
#define Truck_hpp

#include "Car.hpp"
#include "CarException.h"

class Truck : public Car {
private:

    // Грузоподъемность
    unsigned int loadCapacity = 0;

    // Спальник
    bool sleepingBag = false;

    // Объем кузова
    unsigned int bodyVolume = 0;

    // Консервация
    bool preservation = false;

    // Выдвижные секции ног
    bool retractableLegs = false;

    // Состояние кузова
    bool statusBody = false;

    // Состояние опор
    bool statusSupports = false;
public:
    // Поднять кузов
    void liftBody();

    // Опустить кузов
    void lowerBody();

    // Выдвинуть опоры
    void extendSupports();

    // Верунуть опоры
    void returnSupports();

    // Напечатать состояние грузовика
    void printStatusTransport() const override;

    // Напечатать характеристики грузовика
    void printSpecifications() const override;

    Truck(std::string model,
          std::string color,
          std::string engine,
          unsigned int power,
          unsigned short yearRelease,
          unsigned int loadCapacity,
          unsigned int bodyVolume,
          bool sleepingBag,
          bool preservation,
          bool retractableLegs);

    ~Truck();
};

#endif /* Truck_hpp */
