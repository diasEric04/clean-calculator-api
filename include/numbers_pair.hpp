#pragma once
#include <type_traits>


template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
class NumbersPair {
public:
    NumbersType first;
    NumbersType second;
    
    NumbersPair (NumbersType first, NumbersType second);
};


template class NumbersPair<int>;
template class NumbersPair<float>;
template class NumbersPair<double>;
template class NumbersPair<long long>;
template class NumbersPair<long double>;