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
CMAKE_SOURCE_DIR = "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/2/homework_2/task_1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/2/homework_2/task_1/bin"

# Include any dependencies generated for this target.
include CMakeFiles/guesser.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/guesser.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/guesser.dir/flags.make

CMakeFiles/guesser.dir/src/main.cpp.o: CMakeFiles/guesser.dir/flags.make
CMakeFiles/guesser.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/2/homework_2/task_1/bin/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/guesser.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/guesser.dir/src/main.cpp.o -c "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/2/homework_2/task_1/src/main.cpp"

CMakeFiles/guesser.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/guesser.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/2/homework_2/task_1/src/main.cpp" > CMakeFiles/guesser.dir/src/main.cpp.i

CMakeFiles/guesser.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/guesser.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/2/homework_2/task_1/src/main.cpp" -o CMakeFiles/guesser.dir/src/main.cpp.s

# Object files for target guesser
guesser_OBJECTS = \
"CMakeFiles/guesser.dir/src/main.cpp.o"

# External object files for target guesser
guesser_EXTERNAL_OBJECTS =

guesser: CMakeFiles/guesser.dir/src/main.cpp.o
guesser: CMakeFiles/guesser.dir/build.make
guesser: CMakeFiles/guesser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/2/homework_2/task_1/bin/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable guesser"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/guesser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/guesser.dir/build: guesser

.PHONY : CMakeFiles/guesser.dir/build

CMakeFiles/guesser.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/guesser.dir/cmake_clean.cmake
.PHONY : CMakeFiles/guesser.dir/clean

CMakeFiles/guesser.dir/depend:
	cd "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/2/homework_2/task_1/bin" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/2/homework_2/task_1" "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/2/homework_2/task_1" "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/2/homework_2/task_1/bin" "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/2/homework_2/task_1/bin" "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/2/homework_2/task_1/bin/CMakeFiles/guesser.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/guesser.dir/depend
