# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pili/Desktop/tpg-1c2024-stars

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pili/Desktop/tpg-1c2024-stars/build

# Include any dependencies generated for this target.
include tests/grafo/CMakeFiles/grafo_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/grafo/CMakeFiles/grafo_test.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/grafo/CMakeFiles/grafo_test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/grafo/CMakeFiles/grafo_test.dir/flags.make

tests/grafo/CMakeFiles/grafo_test.dir/grafo_test.cpp.o: tests/grafo/CMakeFiles/grafo_test.dir/flags.make
tests/grafo/CMakeFiles/grafo_test.dir/grafo_test.cpp.o: ../tests/grafo/grafo_test.cpp
tests/grafo/CMakeFiles/grafo_test.dir/grafo_test.cpp.o: tests/grafo/CMakeFiles/grafo_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pili/Desktop/tpg-1c2024-stars/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/grafo/CMakeFiles/grafo_test.dir/grafo_test.cpp.o"
	cd /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/grafo/CMakeFiles/grafo_test.dir/grafo_test.cpp.o -MF CMakeFiles/grafo_test.dir/grafo_test.cpp.o.d -o CMakeFiles/grafo_test.dir/grafo_test.cpp.o -c /home/pili/Desktop/tpg-1c2024-stars/tests/grafo/grafo_test.cpp

tests/grafo/CMakeFiles/grafo_test.dir/grafo_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/grafo_test.dir/grafo_test.cpp.i"
	cd /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pili/Desktop/tpg-1c2024-stars/tests/grafo/grafo_test.cpp > CMakeFiles/grafo_test.dir/grafo_test.cpp.i

tests/grafo/CMakeFiles/grafo_test.dir/grafo_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/grafo_test.dir/grafo_test.cpp.s"
	cd /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pili/Desktop/tpg-1c2024-stars/tests/grafo/grafo_test.cpp -o CMakeFiles/grafo_test.dir/grafo_test.cpp.s

tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/a_estrella/vertice.cpp.o: tests/grafo/CMakeFiles/grafo_test.dir/flags.make
tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/a_estrella/vertice.cpp.o: ../src/a_estrella/vertice.cpp
tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/a_estrella/vertice.cpp.o: tests/grafo/CMakeFiles/grafo_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pili/Desktop/tpg-1c2024-stars/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/a_estrella/vertice.cpp.o"
	cd /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/a_estrella/vertice.cpp.o -MF CMakeFiles/grafo_test.dir/__/__/src/a_estrella/vertice.cpp.o.d -o CMakeFiles/grafo_test.dir/__/__/src/a_estrella/vertice.cpp.o -c /home/pili/Desktop/tpg-1c2024-stars/src/a_estrella/vertice.cpp

tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/a_estrella/vertice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/grafo_test.dir/__/__/src/a_estrella/vertice.cpp.i"
	cd /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pili/Desktop/tpg-1c2024-stars/src/a_estrella/vertice.cpp > CMakeFiles/grafo_test.dir/__/__/src/a_estrella/vertice.cpp.i

tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/a_estrella/vertice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/grafo_test.dir/__/__/src/a_estrella/vertice.cpp.s"
	cd /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pili/Desktop/tpg-1c2024-stars/src/a_estrella/vertice.cpp -o CMakeFiles/grafo_test.dir/__/__/src/a_estrella/vertice.cpp.s

tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/a_estrella/coordenada.cpp.o: tests/grafo/CMakeFiles/grafo_test.dir/flags.make
tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/a_estrella/coordenada.cpp.o: ../src/a_estrella/coordenada.cpp
tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/a_estrella/coordenada.cpp.o: tests/grafo/CMakeFiles/grafo_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pili/Desktop/tpg-1c2024-stars/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/a_estrella/coordenada.cpp.o"
	cd /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/a_estrella/coordenada.cpp.o -MF CMakeFiles/grafo_test.dir/__/__/src/a_estrella/coordenada.cpp.o.d -o CMakeFiles/grafo_test.dir/__/__/src/a_estrella/coordenada.cpp.o -c /home/pili/Desktop/tpg-1c2024-stars/src/a_estrella/coordenada.cpp

tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/a_estrella/coordenada.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/grafo_test.dir/__/__/src/a_estrella/coordenada.cpp.i"
	cd /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pili/Desktop/tpg-1c2024-stars/src/a_estrella/coordenada.cpp > CMakeFiles/grafo_test.dir/__/__/src/a_estrella/coordenada.cpp.i

tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/a_estrella/coordenada.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/grafo_test.dir/__/__/src/a_estrella/coordenada.cpp.s"
	cd /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pili/Desktop/tpg-1c2024-stars/src/a_estrella/coordenada.cpp -o CMakeFiles/grafo_test.dir/__/__/src/a_estrella/coordenada.cpp.s

tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/aem/grafo.cpp.o: tests/grafo/CMakeFiles/grafo_test.dir/flags.make
tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/aem/grafo.cpp.o: ../src/aem/grafo.cpp
tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/aem/grafo.cpp.o: tests/grafo/CMakeFiles/grafo_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pili/Desktop/tpg-1c2024-stars/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/aem/grafo.cpp.o"
	cd /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/aem/grafo.cpp.o -MF CMakeFiles/grafo_test.dir/__/__/src/aem/grafo.cpp.o.d -o CMakeFiles/grafo_test.dir/__/__/src/aem/grafo.cpp.o -c /home/pili/Desktop/tpg-1c2024-stars/src/aem/grafo.cpp

tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/aem/grafo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/grafo_test.dir/__/__/src/aem/grafo.cpp.i"
	cd /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pili/Desktop/tpg-1c2024-stars/src/aem/grafo.cpp > CMakeFiles/grafo_test.dir/__/__/src/aem/grafo.cpp.i

tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/aem/grafo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/grafo_test.dir/__/__/src/aem/grafo.cpp.s"
	cd /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pili/Desktop/tpg-1c2024-stars/src/aem/grafo.cpp -o CMakeFiles/grafo_test.dir/__/__/src/aem/grafo.cpp.s

tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/aem/arista.cpp.o: tests/grafo/CMakeFiles/grafo_test.dir/flags.make
tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/aem/arista.cpp.o: ../src/aem/arista.cpp
tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/aem/arista.cpp.o: tests/grafo/CMakeFiles/grafo_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pili/Desktop/tpg-1c2024-stars/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/aem/arista.cpp.o"
	cd /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/aem/arista.cpp.o -MF CMakeFiles/grafo_test.dir/__/__/src/aem/arista.cpp.o.d -o CMakeFiles/grafo_test.dir/__/__/src/aem/arista.cpp.o -c /home/pili/Desktop/tpg-1c2024-stars/src/aem/arista.cpp

tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/aem/arista.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/grafo_test.dir/__/__/src/aem/arista.cpp.i"
	cd /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pili/Desktop/tpg-1c2024-stars/src/aem/arista.cpp > CMakeFiles/grafo_test.dir/__/__/src/aem/arista.cpp.i

tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/aem/arista.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/grafo_test.dir/__/__/src/aem/arista.cpp.s"
	cd /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pili/Desktop/tpg-1c2024-stars/src/aem/arista.cpp -o CMakeFiles/grafo_test.dir/__/__/src/aem/arista.cpp.s

# Object files for target grafo_test
grafo_test_OBJECTS = \
"CMakeFiles/grafo_test.dir/grafo_test.cpp.o" \
"CMakeFiles/grafo_test.dir/__/__/src/a_estrella/vertice.cpp.o" \
"CMakeFiles/grafo_test.dir/__/__/src/a_estrella/coordenada.cpp.o" \
"CMakeFiles/grafo_test.dir/__/__/src/aem/grafo.cpp.o" \
"CMakeFiles/grafo_test.dir/__/__/src/aem/arista.cpp.o"

# External object files for target grafo_test
grafo_test_EXTERNAL_OBJECTS =

tests/grafo_test: tests/grafo/CMakeFiles/grafo_test.dir/grafo_test.cpp.o
tests/grafo_test: tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/a_estrella/vertice.cpp.o
tests/grafo_test: tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/a_estrella/coordenada.cpp.o
tests/grafo_test: tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/aem/grafo.cpp.o
tests/grafo_test: tests/grafo/CMakeFiles/grafo_test.dir/__/__/src/aem/arista.cpp.o
tests/grafo_test: tests/grafo/CMakeFiles/grafo_test.dir/build.make
tests/grafo_test: lib/libgtest_main.a
tests/grafo_test: lib/libgtest.a
tests/grafo_test: tests/grafo/CMakeFiles/grafo_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pili/Desktop/tpg-1c2024-stars/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable ../grafo_test"
	cd /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/grafo_test.dir/link.txt --verbose=$(VERBOSE)
	cd /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo && /usr/bin/cmake -D TEST_TARGET=grafo_test -D TEST_EXECUTABLE=/home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo_test -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=grafo_test_TESTS -D CTEST_FILE=/home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo/grafo_test[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/share/cmake-3.22/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
tests/grafo/CMakeFiles/grafo_test.dir/build: tests/grafo_test
.PHONY : tests/grafo/CMakeFiles/grafo_test.dir/build

tests/grafo/CMakeFiles/grafo_test.dir/clean:
	cd /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo && $(CMAKE_COMMAND) -P CMakeFiles/grafo_test.dir/cmake_clean.cmake
.PHONY : tests/grafo/CMakeFiles/grafo_test.dir/clean

tests/grafo/CMakeFiles/grafo_test.dir/depend:
	cd /home/pili/Desktop/tpg-1c2024-stars/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pili/Desktop/tpg-1c2024-stars /home/pili/Desktop/tpg-1c2024-stars/tests/grafo /home/pili/Desktop/tpg-1c2024-stars/build /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo /home/pili/Desktop/tpg-1c2024-stars/build/tests/grafo/CMakeFiles/grafo_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/grafo/CMakeFiles/grafo_test.dir/depend

