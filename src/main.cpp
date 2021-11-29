//
//  main.cpp
//  test
//
//  Created by George Kalinka on 18.11.2021.
//

#include "PassengerCar.hpp"
#include "Truck.hpp"

int main() {
    PassengerCar toyota = PassengerCar("Toyota Corolla Fielder",
                                       "Gray",
                                       "бензин, 1.5 л, ГБО",
                                       109,
                                       2002);

    Truck hino = Truck("Hino Ranger",
                       "White",
                       "Дизельный",
                       150,
                       2015);

    toyota.printSpecifications();
    std::cout << "----------------------------------------\n";
    hino.printSpecifications();
    return 0;
}

