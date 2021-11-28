//
//  Truck.hpp
//  carClass
//
//  Created by George Kalinka on 19.11.2021.
//

#ifndef Truck_hpp
#define Truck_hpp

#include "Car.hpp"

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
public:
    // Поднять кузов
    void liftBody();

    // Опустить кузов
    void lowerBody();

    // TODO: проверять есть ли они
    // Выдвинуть опоры
    void extendSupports();

    // TODO: проверять есть ли они
    // Верунуть опоры
    void returnSupports();

    Truck(std::string model,
          std::string color,
          std::string engine,
          unsigned int power,
          unsigned short yearRelease);
};

#endif /* Truck_hpp */
