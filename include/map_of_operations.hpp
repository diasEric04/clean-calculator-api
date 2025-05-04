#pragma once
#include <type_traits>
#include <unordered_map>
#include <string>
#include <calculator.hpp>

template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
const std::unordered_map<std::string, Calculator<NumbersType>*> MAP_OF_OPERATIONS = {
    {"+", new SumCalculator<NumbersType>},
    {"-", new MinusCalculator<NumbersType>},
    {"*", new MultiplicationCalculator<NumbersType>},
    {"/", new DivisionCalculator<NumbersType>},
    {"e", new PowerCalculator<NumbersType>}    
};

template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
Calculator<NumbersType>* getMapOfOperation (std::string operationText);

template Calculator<int>* getMapOfOperation (std::string operationText);
template Calculator<float>* getMapOfOperation (std::string operationText);
template Calculator<double>* getMapOfOperation (std::string operationText);
template Calculator<long long>* getMapOfOperation (std::string operationText);
template Calculator<long double>* getMapOfOperation (std::string operationText);