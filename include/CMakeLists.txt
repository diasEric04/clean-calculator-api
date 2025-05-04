add_library(calculator_h INTERFACE)
add_library(calculate_h INTERFACE)
add_library(calculator_errors_h INTERFACE)
add_library(map_of_operations_h INTERFACE)
add_library(numbers_pair_h INTERFACE)

target_include_directories(calculator_h INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

target_include_directories(calculate_h INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

target_include_directories(calculator_errors_h INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

target_include_directories(map_of_operations_h INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

target_include_directories(numbers_pair_h INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

install(TARGETS calculator_h calculate_h calculator_errors_h map_of_operations_h numbers_pair_h 
    EXPORT TESTESTargets
    INCLUDES DESTINATION include
)