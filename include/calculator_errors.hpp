#pragma once
#include <exception>

class CalculatorException : std::exception {
public:
    const char* what () const noexcept override = 0;
};

class CalculatorDivisionByZeroException : public CalculatorException {
public:
    const char* what () const noexcept override;
};

class CalculatorUnkownOperationException : public CalculatorException {
public:
    const char* what () const noexcept override;
};