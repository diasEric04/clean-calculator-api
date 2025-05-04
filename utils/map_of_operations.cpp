#pragma once

#include <unordered_map>
#include <iostream>
#include <string>
#include <type_traits>
#include "calculator_errors.hpp"
#include "numbers_pair.hpp"
#include "calculator.hpp"
#include "calculator.hpp"
#include "map_of_operations.hpp"

template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
Calculator<NumbersType>* getMapOfOperation (std::string operationText) {
    try {
        return MAP_OF_OPERATIONS<NumbersType>.at(operationText);
    } catch (const std::out_of_range& e) {
        throw CalculatorUnkownOperationException();
    }
}
