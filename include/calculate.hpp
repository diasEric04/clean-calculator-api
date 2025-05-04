#pragma once
#include <type_traits>

#define INSTANTIATE_FUNCTION_FOR_ALL_TYPES(function) \
    extern template int function<int>(int, std::string, int); \
    extern template double function<double>(double, std::string, double); \
    extern template float function<float>(float, std::string, float); \
    extern template long long function<long long>(long long, std::string, long long); \
    extern template long double function<long double>(long double, std::string, long double);

#define INSTANTIATE_FUNCTION_FOR_ALL_TYPES_(function) \
    template int function<int>(int, std::string, int); \
    template double function<double>(double, std::string, double); \
    template float function<float>(float, std::string, float); \
    template long long function<long long>(long long, std::string, long long); \
    template long double function<long double>(long double, std::string, long double);


template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
NumbersType tryCalculate (NumbersType firstNumber, std::string operationText, NumbersType secondNumber);

template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
NumbersType calculate (NumbersType firstNumber, std::string operationText, NumbersType secondNumber);

INSTANTIATE_FUNCTION_FOR_ALL_TYPES(tryCalculate)
INSTANTIATE_FUNCTION_FOR_ALL_TYPES(calculate)
