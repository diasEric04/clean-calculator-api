#pragma once
#include <exception>
#include "calculator_errors.hpp"

const char* CalculatorDivisionByZeroException::what () const noexcept {
    return "cannot divide anything by 0";
}

const char* CalculatorUnkownOperationException::what () const noexcept {
    return "Invalid math operation";
}