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
CMAKE_SOURCE_DIR = "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build"

# Include any dependencies generated for this target.
include include/CMakeFiles/SerializerLib.dir/depend.make

# Include the progress variables for this target.
include include/CMakeFiles/SerializerLib.dir/progress.make

# Include the compile flags for this target's objects.
include include/CMakeFiles/SerializerLib.dir/flags.make

include/CMakeFiles/SerializerLib.dir/serialize.cpp.o: include/CMakeFiles/SerializerLib.dir/flags.make
include/CMakeFiles/SerializerLib.dir/serialize.cpp.o: ../include/serialize.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object include/CMakeFiles/SerializerLib.dir/serialize.cpp.o"
	cd "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build/include" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SerializerLib.dir/serialize.cpp.o -c "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/include/serialize.cpp"

include/CMakeFiles/SerializerLib.dir/serialize.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SerializerLib.dir/serialize.cpp.i"
	cd "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build/include" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/include/serialize.cpp" > CMakeFiles/SerializerLib.dir/serialize.cpp.i

include/CMakeFiles/SerializerLib.dir/serialize.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SerializerLib.dir/serialize.cpp.s"
	cd "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build/include" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/include/serialize.cpp" -o CMakeFiles/SerializerLib.dir/serialize.cpp.s

include/CMakeFiles/SerializerLib.dir/deserialize.cpp.o: include/CMakeFiles/SerializerLib.dir/flags.make
include/CMakeFiles/SerializerLib.dir/deserialize.cpp.o: ../include/deserialize.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object include/CMakeFiles/SerializerLib.dir/deserialize.cpp.o"
	cd "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build/include" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SerializerLib.dir/deserialize.cpp.o -c "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/include/deserialize.cpp"

include/CMakeFiles/SerializerLib.dir/deserialize.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SerializerLib.dir/deserialize.cpp.i"
	cd "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build/include" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/include/deserialize.cpp" > CMakeFiles/SerializerLib.dir/deserialize.cpp.i

include/CMakeFiles/SerializerLib.dir/deserialize.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SerializerLib.dir/deserialize.cpp.s"
	cd "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build/include" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/include/deserialize.cpp" -o CMakeFiles/SerializerLib.dir/deserialize.cpp.s

include/CMakeFiles/SerializerLib.dir/convert_dataset.cpp.o: include/CMakeFiles/SerializerLib.dir/flags.make
include/CMakeFiles/SerializerLib.dir/convert_dataset.cpp.o: ../include/convert_dataset.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object include/CMakeFiles/SerializerLib.dir/convert_dataset.cpp.o"
	cd "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build/include" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SerializerLib.dir/convert_dataset.cpp.o -c "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/include/convert_dataset.cpp"

include/CMakeFiles/SerializerLib.dir/convert_dataset.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SerializerLib.dir/convert_dataset.cpp.i"
	cd "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build/include" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/include/convert_dataset.cpp" > CMakeFiles/SerializerLib.dir/convert_dataset.cpp.i

include/CMakeFiles/SerializerLib.dir/convert_dataset.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SerializerLib.dir/convert_dataset.cpp.s"
	cd "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build/include" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/include/convert_dataset.cpp" -o CMakeFiles/SerializerLib.dir/convert_dataset.cpp.s

# Object files for target SerializerLib
SerializerLib_OBJECTS = \
"CMakeFiles/SerializerLib.dir/serialize.cpp.o" \
"CMakeFiles/SerializerLib.dir/deserialize.cpp.o" \
"CMakeFiles/SerializerLib.dir/convert_dataset.cpp.o"

# External object files for target SerializerLib
SerializerLib_EXTERNAL_OBJECTS =

lib/libSerializerLib.a: include/CMakeFiles/SerializerLib.dir/serialize.cpp.o
lib/libSerializerLib.a: include/CMakeFiles/SerializerLib.dir/deserialize.cpp.o
lib/libSerializerLib.a: include/CMakeFiles/SerializerLib.dir/convert_dataset.cpp.o
lib/libSerializerLib.a: include/CMakeFiles/SerializerLib.dir/build.make
lib/libSerializerLib.a: include/CMakeFiles/SerializerLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library ../lib/libSerializerLib.a"
	cd "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build/include" && $(CMAKE_COMMAND) -P CMakeFiles/SerializerLib.dir/cmake_clean_target.cmake
	cd "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build/include" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SerializerLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
include/CMakeFiles/SerializerLib.dir/build: lib/libSerializerLib.a

.PHONY : include/CMakeFiles/SerializerLib.dir/build

include/CMakeFiles/SerializerLib.dir/clean:
	cd "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build/include" && $(CMAKE_COMMAND) -P CMakeFiles/SerializerLib.dir/cmake_clean.cmake
.PHONY : include/CMakeFiles/SerializerLib.dir/clean

include/CMakeFiles/SerializerLib.dir/depend:
	cd "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5" "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/include" "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build" "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build/include" "/home/abhinav137/Desktop/Code_Projects/C++ Tutorials/Stachniss Modern C++/Homeworks/5/homework_5/build/include/CMakeFiles/SerializerLib.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : include/CMakeFiles/SerializerLib.dir/depend
