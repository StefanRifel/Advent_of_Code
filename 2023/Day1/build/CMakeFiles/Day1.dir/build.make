# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_SOURCE_DIR = /home/xexeed/Projekts/Advent_of_Code/2023/Day1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xexeed/Projekts/Advent_of_Code/2023/Day1/build

# Include any dependencies generated for this target.
include CMakeFiles/Day1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Day1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Day1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Day1.dir/flags.make

CMakeFiles/Day1.dir/main.cc.o: CMakeFiles/Day1.dir/flags.make
CMakeFiles/Day1.dir/main.cc.o: /home/xexeed/Projekts/Advent_of_Code/2023/Day1/main.cc
CMakeFiles/Day1.dir/main.cc.o: CMakeFiles/Day1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/xexeed/Projekts/Advent_of_Code/2023/Day1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Day1.dir/main.cc.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Day1.dir/main.cc.o -MF CMakeFiles/Day1.dir/main.cc.o.d -o CMakeFiles/Day1.dir/main.cc.o -c /home/xexeed/Projekts/Advent_of_Code/2023/Day1/main.cc

CMakeFiles/Day1.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Day1.dir/main.cc.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xexeed/Projekts/Advent_of_Code/2023/Day1/main.cc > CMakeFiles/Day1.dir/main.cc.i

CMakeFiles/Day1.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Day1.dir/main.cc.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xexeed/Projekts/Advent_of_Code/2023/Day1/main.cc -o CMakeFiles/Day1.dir/main.cc.s

# Object files for target Day1
Day1_OBJECTS = \
"CMakeFiles/Day1.dir/main.cc.o"

# External object files for target Day1
Day1_EXTERNAL_OBJECTS =

Day1: CMakeFiles/Day1.dir/main.cc.o
Day1: CMakeFiles/Day1.dir/build.make
Day1: CMakeFiles/Day1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/xexeed/Projekts/Advent_of_Code/2023/Day1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Day1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Day1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Day1.dir/build: Day1
.PHONY : CMakeFiles/Day1.dir/build

CMakeFiles/Day1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Day1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Day1.dir/clean

CMakeFiles/Day1.dir/depend:
	cd /home/xexeed/Projekts/Advent_of_Code/2023/Day1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xexeed/Projekts/Advent_of_Code/2023/Day1 /home/xexeed/Projekts/Advent_of_Code/2023/Day1 /home/xexeed/Projekts/Advent_of_Code/2023/Day1/build /home/xexeed/Projekts/Advent_of_Code/2023/Day1/build /home/xexeed/Projekts/Advent_of_Code/2023/Day1/build/CMakeFiles/Day1.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Day1.dir/depend

