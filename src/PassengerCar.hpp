//
//  PassengerCar.hpp
//  carClass
//
//  Created by George Kalinka on 19.11.2021.
//

#ifndef PassengerCar_hpp
#define PassengerCar_hpp

#include <iostream>
#include "Car.hpp"

class PassengerCar : public Car {
private:

    // Есть ли лифтбэк у автомобиля
    bool liftback = false;

    // Багажник на крыше
    bool roofRack = false;

    // Состояние багажника
    bool statusTruck = false;

public:
    // Открыть багажник
    void openTrunk();

    // Закрыть багажник
    void closeTrunk();


    PassengerCar(std::string model,
                 std::string color,
                 std::string engine,
                 unsigned int power,
                 unsigned short yearRelease,
                 bool liftback,
                 bool roofRack);

    // Напечатать состояние автомобиля
    void printStatusTransport() const override;

    // Напечатать характеристики автомобиля
    void printSpecifications() const override;
};

#endif /* PassengerCar_hpp */
