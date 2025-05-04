add_library(calculator_errors STATIC calculator_errors.cpp)

target_include_directories(calculator_errors PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

target_link_libraries (calculator_errors PUBLIC calculator_errors_h)
