//
// Created by George Kalinka on 30.11.2021.
//

#ifndef CARCLASS_CAREXCEPTION_H
#define CARCLASS_CAREXCEPTION_H

#include <iostream>

class CarException: public std::exception{

private:
    std::string m_error;
public:
    explicit CarException(std::string error);

    const char* what() const noexcept override;

};


#endif //CARCLASS_CAREXCEPTION_H
