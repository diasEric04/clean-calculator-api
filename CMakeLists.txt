cmake_minimum_required(VERSION 3.10)
project(TESTES)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON) 
set(CMAKE_CXX_EXTENSIONS OFF) 

set(CXX "/usr/bin/g++")

enable_testing()

#adiciona os diretorios no path
add_subdirectory(tests)
add_subdirectory(src)
add_subdirectory(errors)
add_subdirectory(utils)
add_subdirectory(include)

#cria executavel
add_executable(main main.cpp)

file(GLOB_RECURSE SOURCE_FILES 
    src/*.cpp
    errors/*.cpp
    utils/*.cpp
)

add_library(testes STATIC ${SOURCE_FILES})

target_include_directories(testes PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/utils>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/errors>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:include>
)

install(TARGETS testes 
    EXPORT TESTESTargets
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION include
)

# Instala headers
install(DIRECTORY include/ DESTINATION include)

target_link_libraries(main PRIVATE testes)


# Exporta configurações pro find_package
install(EXPORT TESTESTargets
    FILE TESTESTargets.cmake
    NAMESPACE Testes::
    DESTINATION lib/cmake/TESTES
)

# Cria um config file básico
include(CMakePackageConfigHelpers)

write_basic_package_version_file(
    "${CMAKE_CURRENT_BINARY_DIR}/TESTESConfigVersion.cmake"
    VERSION 1.0
    COMPATIBILITY AnyNewerVersion
)

configure_package_config_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake/TESTESConfig.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/TESTESConfig.cmake"
    INSTALL_DESTINATION lib/cmake/TESTES
)

install(FILES
    "${CMAKE_CURRENT_BINARY_DIR}/TESTESConfig.cmake"
    "${CMAKE_CURRENT_BINARY_DIR}/TESTESConfigVersion.cmake"
    DESTINATION lib/cmake/TESTES
)

# # create install
# cmake -B build -S .
# cmake --build build
# cmake --install build --prefix /algum/lugar
