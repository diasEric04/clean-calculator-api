#pragma once

#include <cmath>
#include "calculator.hpp"
#include "calculator_errors.hpp"

template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
NumbersType SumCalculator<NumbersType>::calculate (NumbersPair<NumbersType> pair) const noexcept {
    return pair.first + pair.second;
}

template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
NumbersType MinusCalculator<NumbersType>::calculate (NumbersPair<NumbersType> pair) const noexcept {
    return pair.first - pair.second;
}

template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
NumbersType MultiplicationCalculator<NumbersType>::calculate (NumbersPair<NumbersType> pair) const noexcept {
    return pair.first * pair.second;
}

template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
NumbersType DivisionCalculator<NumbersType>::calculate (NumbersPair<NumbersType> pair) const {
    if (pair.second == 0) {
        throw CalculatorDivisionByZeroException();
    }

    return pair.first / pair.second;
}

template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
NumbersType PowerCalculator<NumbersType>::calculate (NumbersPair<NumbersType> pair) const noexcept {
    return std::pow(pair.first, pair.second);
}