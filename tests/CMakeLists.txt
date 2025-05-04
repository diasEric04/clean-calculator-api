add_executable(runTests test_calculator.cpp)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

target_include_directories(runTests PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/utils>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/errors>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)


target_link_libraries(runTests PRIVATE 
    calculator_errors_h calculate_h calculator_h map_of_operations_h map_of_operations calculator calculate numbers_pair calculator_errors gtest gtest_main pthread
)

add_test(NAME CalculatorClassTest COMMAND runTests)
add_test(NAME CalculateFunctionTest COMMAND runTests)
add_test(NAME ExceptionTest COMMAND runTests)
