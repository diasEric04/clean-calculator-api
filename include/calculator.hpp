#pragma once
#include "numbers_pair.hpp"

#define INSTANTIATE_CLASS_FOR_ALL_TYPES(ClassName) \
    template class ClassName<int>; \
    template class ClassName<float>; \
    template class ClassName<double>; \
    template class ClassName<long long>; \
    template class ClassName<long double>;


template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
class Calculator {
public:
    virtual NumbersType calculate (NumbersPair<NumbersType>) const = 0;

    virtual ~Calculator () = default;
};

template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
class SumCalculator : public Calculator<NumbersType> {
public:
    virtual NumbersType calculate (NumbersPair<NumbersType> pair) const noexcept override;
};

template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
class MinusCalculator : public Calculator<NumbersType> {
public:
    virtual NumbersType calculate (NumbersPair<NumbersType> pair) const noexcept override;
};

template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
class DivisionCalculator : public Calculator<NumbersType> {
public:
    virtual NumbersType calculate (NumbersPair<NumbersType> pair) const override;
};

template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
class MultiplicationCalculator : public Calculator<NumbersType> {
public:
    virtual NumbersType calculate (NumbersPair<NumbersType> pair) const noexcept override;
};

template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
class PowerCalculator : public Calculator<NumbersType> {
public:
    virtual NumbersType calculate (NumbersPair<NumbersType> pair) const noexcept override;
};

INSTANTIATE_CLASS_FOR_ALL_TYPES(Calculator)
INSTANTIATE_CLASS_FOR_ALL_TYPES(SumCalculator)
INSTANTIATE_CLASS_FOR_ALL_TYPES(MinusCalculator)
INSTANTIATE_CLASS_FOR_ALL_TYPES(DivisionCalculator)
INSTANTIATE_CLASS_FOR_ALL_TYPES(MultiplicationCalculator)
INSTANTIATE_CLASS_FOR_ALL_TYPES(PowerCalculator)