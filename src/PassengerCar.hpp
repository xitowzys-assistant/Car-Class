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

public:
    // Открыть багажник
    void openTrunk();

    // Закрыть багажник
    void closeTrunk();


    PassengerCar(std::string model,
                 std::string color,
                 std::string engine,
                 unsigned int power,
                 unsigned short yearRelease);
};

#endif /* PassengerCar_hpp */
