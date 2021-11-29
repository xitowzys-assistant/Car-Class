//
// Created by George Kalinka on 30.11.2021.
//

#include "CarException.h"

#include <utility>

const char *CarException::what() const noexcept {
    return m_error.c_str();
}

CarException::CarException(std::string error) : m_error(std::move(error)) {

}
