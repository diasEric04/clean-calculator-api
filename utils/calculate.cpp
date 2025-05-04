#pragma once

#include <iostream>
#include <type_traits>
#include "numbers_pair.hpp"
#include "map_of_operations.cpp"
#include "calculator_errors.hpp"
#include "calculate.hpp"

INSTANTIATE_FUNCTION_FOR_ALL_TYPES_(tryCalculate)
INSTANTIATE_FUNCTION_FOR_ALL_TYPES_(calculate)

template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
NumbersType calculate (NumbersType firstNumber, std::string operationText, NumbersType secondNumber) {
    try {
        return tryCalculate(firstNumber, operationText, secondNumber);
    } catch (const CalculatorDivisionByZeroException& e) {
        std::cout << e.what();
        exit(EXIT_FAILURE);
    } catch (const CalculatorUnkownOperationException& e) {
        std::cout << e.what();
        exit(EXIT_FAILURE);
    } catch (const CalculatorException& e) {
        std::cout << "unkown error";
        exit(EXIT_FAILURE);
    }
}

template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
NumbersType tryCalculate (NumbersType firstNumber, std::string operationText, NumbersType secondNumber) {    
    Calculator<NumbersType>* calculator = getMapOfOperation<NumbersType>(operationText);
    NumbersPair<NumbersType> pairOfNumbers (firstNumber, secondNumber);
    NumbersType operationResult {calculator->calculate(pairOfNumbers)};
    return operationResult;
}
