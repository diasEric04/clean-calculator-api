# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/edias/projetos/cpp/testes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/edias/projetos/cpp/testes/build

# Include any dependencies generated for this target.
include src/CMakeFiles/numbers_pair.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/numbers_pair.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/numbers_pair.dir/flags.make

src/CMakeFiles/numbers_pair.dir/numbers_pair.cpp.o: src/CMakeFiles/numbers_pair.dir/flags.make
src/CMakeFiles/numbers_pair.dir/numbers_pair.cpp.o: ../src/numbers_pair.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/edias/projetos/cpp/testes/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/numbers_pair.dir/numbers_pair.cpp.o"
	cd /home/edias/projetos/cpp/testes/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/numbers_pair.dir/numbers_pair.cpp.o -c /home/edias/projetos/cpp/testes/src/numbers_pair.cpp

src/CMakeFiles/numbers_pair.dir/numbers_pair.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numbers_pair.dir/numbers_pair.cpp.i"
	cd /home/edias/projetos/cpp/testes/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/edias/projetos/cpp/testes/src/numbers_pair.cpp > CMakeFiles/numbers_pair.dir/numbers_pair.cpp.i

src/CMakeFiles/numbers_pair.dir/numbers_pair.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numbers_pair.dir/numbers_pair.cpp.s"
	cd /home/edias/projetos/cpp/testes/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/edias/projetos/cpp/testes/src/numbers_pair.cpp -o CMakeFiles/numbers_pair.dir/numbers_pair.cpp.s

# Object files for target numbers_pair
numbers_pair_OBJECTS = \
"CMakeFiles/numbers_pair.dir/numbers_pair.cpp.o"

# External object files for target numbers_pair
numbers_pair_EXTERNAL_OBJECTS =

src/libnumbers_pair.a: src/CMakeFiles/numbers_pair.dir/numbers_pair.cpp.o
src/libnumbers_pair.a: src/CMakeFiles/numbers_pair.dir/build.make
src/libnumbers_pair.a: src/CMakeFiles/numbers_pair.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/edias/projetos/cpp/testes/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libnumbers_pair.a"
	cd /home/edias/projetos/cpp/testes/build/src && $(CMAKE_COMMAND) -P CMakeFiles/numbers_pair.dir/cmake_clean_target.cmake
	cd /home/edias/projetos/cpp/testes/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/numbers_pair.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/numbers_pair.dir/build: src/libnumbers_pair.a

.PHONY : src/CMakeFiles/numbers_pair.dir/build

src/CMakeFiles/numbers_pair.dir/clean:
	cd /home/edias/projetos/cpp/testes/build/src && $(CMAKE_COMMAND) -P CMakeFiles/numbers_pair.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/numbers_pair.dir/clean

src/CMakeFiles/numbers_pair.dir/depend:
	cd /home/edias/projetos/cpp/testes/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/edias/projetos/cpp/testes /home/edias/projetos/cpp/testes/src /home/edias/projetos/cpp/testes/build /home/edias/projetos/cpp/testes/build/src /home/edias/projetos/cpp/testes/build/src/CMakeFiles/numbers_pair.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/numbers_pair.dir/depend

