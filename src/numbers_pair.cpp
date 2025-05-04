#pragma once

#include "numbers_pair.hpp"
#include <type_traits>

template <typename NumbersType>
requires std::is_arithmetic_v<NumbersType>
NumbersPair<NumbersType>::NumbersPair (NumbersType first, NumbersType second):
    first{first},
    second{second}
{}
