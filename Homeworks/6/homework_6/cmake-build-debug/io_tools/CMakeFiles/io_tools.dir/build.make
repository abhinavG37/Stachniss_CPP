# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /snap/clion/158/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/158/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/cmake-build-debug"

# Include any dependencies generated for this target.
include io_tools/CMakeFiles/io_tools.dir/depend.make

# Include the progress variables for this target.
include io_tools/CMakeFiles/io_tools.dir/progress.make

# Include the compile flags for this target's objects.
include io_tools/CMakeFiles/io_tools.dir/flags.make

io_tools/CMakeFiles/io_tools.dir/io_tools.cpp.o: io_tools/CMakeFiles/io_tools.dir/flags.make
io_tools/CMakeFiles/io_tools.dir/io_tools.cpp.o: ../io_tools/io_tools.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object io_tools/CMakeFiles/io_tools.dir/io_tools.cpp.o"
	cd "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/cmake-build-debug/io_tools" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/io_tools.dir/io_tools.cpp.o -c "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/io_tools/io_tools.cpp"

io_tools/CMakeFiles/io_tools.dir/io_tools.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/io_tools.dir/io_tools.cpp.i"
	cd "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/cmake-build-debug/io_tools" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/io_tools/io_tools.cpp" > CMakeFiles/io_tools.dir/io_tools.cpp.i

io_tools/CMakeFiles/io_tools.dir/io_tools.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/io_tools.dir/io_tools.cpp.s"
	cd "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/cmake-build-debug/io_tools" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/io_tools/io_tools.cpp" -o CMakeFiles/io_tools.dir/io_tools.cpp.s

# Object files for target io_tools
io_tools_OBJECTS = \
"CMakeFiles/io_tools.dir/io_tools.cpp.o"

# External object files for target io_tools
io_tools_EXTERNAL_OBJECTS =

../build/lib/libio_tools.a: io_tools/CMakeFiles/io_tools.dir/io_tools.cpp.o
../build/lib/libio_tools.a: io_tools/CMakeFiles/io_tools.dir/build.make
../build/lib/libio_tools.a: io_tools/CMakeFiles/io_tools.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../build/lib/libio_tools.a"
	cd "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/cmake-build-debug/io_tools" && $(CMAKE_COMMAND) -P CMakeFiles/io_tools.dir/cmake_clean_target.cmake
	cd "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/cmake-build-debug/io_tools" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/io_tools.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
io_tools/CMakeFiles/io_tools.dir/build: ../build/lib/libio_tools.a

.PHONY : io_tools/CMakeFiles/io_tools.dir/build

io_tools/CMakeFiles/io_tools.dir/clean:
	cd "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/cmake-build-debug/io_tools" && $(CMAKE_COMMAND) -P CMakeFiles/io_tools.dir/cmake_clean.cmake
.PHONY : io_tools/CMakeFiles/io_tools.dir/clean

io_tools/CMakeFiles/io_tools.dir/depend:
	cd "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6" "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/io_tools" "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/cmake-build-debug" "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/cmake-build-debug/io_tools" "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/6/homework_6/cmake-build-debug/io_tools/CMakeFiles/io_tools.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : io_tools/CMakeFiles/io_tools.dir/depend

