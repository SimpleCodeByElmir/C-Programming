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
CMAKE_SOURCE_DIR = /home/elmir/Projects/C7_SmartCalc_v1.0-0/src/exe

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/elmir/Projects/C7_SmartCalc_v1.0-0/src/application

# Utility rule file for Smartcalc_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/Smartcalc_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Smartcalc_autogen.dir/progress.make

CMakeFiles/Smartcalc_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/elmir/Projects/C7_SmartCalc_v1.0-0/src/application/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Smartcalc"
	/usr/bin/cmake -E cmake_autogen /home/elmir/Projects/C7_SmartCalc_v1.0-0/src/application/CMakeFiles/Smartcalc_autogen.dir/AutogenInfo.json ""

Smartcalc_autogen: CMakeFiles/Smartcalc_autogen
Smartcalc_autogen: CMakeFiles/Smartcalc_autogen.dir/build.make
.PHONY : Smartcalc_autogen

# Rule to build all files generated by this target.
CMakeFiles/Smartcalc_autogen.dir/build: Smartcalc_autogen
.PHONY : CMakeFiles/Smartcalc_autogen.dir/build

CMakeFiles/Smartcalc_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Smartcalc_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Smartcalc_autogen.dir/clean

CMakeFiles/Smartcalc_autogen.dir/depend:
	cd /home/elmir/Projects/C7_SmartCalc_v1.0-0/src/application && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elmir/Projects/C7_SmartCalc_v1.0-0/src/exe /home/elmir/Projects/C7_SmartCalc_v1.0-0/src/exe /home/elmir/Projects/C7_SmartCalc_v1.0-0/src/application /home/elmir/Projects/C7_SmartCalc_v1.0-0/src/application /home/elmir/Projects/C7_SmartCalc_v1.0-0/src/application/CMakeFiles/Smartcalc_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Smartcalc_autogen.dir/depend

