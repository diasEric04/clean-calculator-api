#include <gtest/gtest.h>
#include "calculator.hpp"
#include "numbers_pair.hpp"
#include "calculate.hpp"
#include "calculator_errors.hpp"

TEST(CalculatorClassTest, SumTest) {
    SumCalculator<int> calc;
    int result = calc.calculate(NumbersPair<int>(2, 2));
    EXPECT_EQ(result, 4);
}

TEST(CalculatorClassTest, TestSumCalculatorReturnsCorrectResult) {
    MinusCalculator<int> calc;
    int result = calc.calculate(NumbersPair<int>(2, 2));
    EXPECT_EQ(result, 0);
}

TEST(CalculatorClassTest, TestMinusCalculatorReturnCorrectResult) {
    MultiplicationCalculator<int> calc;
    int result = calc.calculate(NumbersPair<int>(2, 2));
    EXPECT_EQ(result, 4);
}

TEST(CalculatorClassTest, TestDivisionCalculatorReturnCorrectResult) {
    DivisionCalculator<int> calc;
    int result = calc.calculate(NumbersPair<int>(2, 2));
    EXPECT_EQ(result, 1);
}

TEST(CalculatorClassTest, TestPowerCalculatorReturnCorrectResult) {
    PowerCalculator<int> calc;
    int result = calc.calculate(NumbersPair<int>(2, 3));
    EXPECT_EQ(result, 8);
}

TEST(CalculateFunctionTest, TestCalculateFunctionReturnCorrectSum) {
    int result = calculate(2, "+", 5);
    EXPECT_EQ(result, 7);
}

TEST(CalculateFunctionTest, TestCalculateFunctionReturnCorrectSubtraction) {
    int result = calculate(2, "-", 5);
    EXPECT_EQ(result, -3);
}

TEST(CalculateFunctionTest, TestCalculateFunctionReturnCorrectMultiplication) {
    int result = calculate(2, "*", 5);
    EXPECT_EQ(result, 10);
}

TEST(CalculateFunctionTest, TestCalculateFunctionReturnCorrectDivision) {
    int result = calculate(10, "/", 5);
    EXPECT_EQ(result, 2);
}

TEST(CalculateFunctionTest, TestCalculateFunctionReturnCorrectPower) {
    int result = calculate(2, "e", 4);
    EXPECT_EQ(result, 16);
}

TEST(ExceptionTest, TestDivisionByZeroThrowsException) {
    EXPECT_THROW(tryCalculate(10, "/", 0), CalculatorDivisionByZeroException);
}

TEST(ExceptionTest, TestCalculateWithUnkownOperationThrowsException) {
    EXPECT_THROW(tryCalculate(10, "1", 20), CalculatorUnkownOperationException);
}