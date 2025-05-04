add_library(calculator STATIC calculator.cpp)
add_library(numbers_pair STATIC numbers_pair.cpp)

target_include_directories(calculator PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/utils>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/errors>
    $<INSTALL_INTERFACE:include>
)

target_include_directories(numbers_pair PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/utils>
    $<INSTALL_INTERFACE:include>
)

target_link_libraries(calculator PUBLIC map_of_operations calculator_h calculator_errors)
target_link_libraries(numbers_pair PUBLIC map_of_operations numbers_pair_h)
