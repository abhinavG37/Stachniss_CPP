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
CMAKE_SOURCE_DIR = "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Codes/OpenCV_Intro"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Codes/OpenCV_Intro/build"

# Include any dependencies generated for this target.
include CMakeFiles/intro.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/intro.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/intro.dir/flags.make

CMakeFiles/intro.dir/src/OfficialTut1.cpp.o: CMakeFiles/intro.dir/flags.make
CMakeFiles/intro.dir/src/OfficialTut1.cpp.o: ../src/OfficialTut1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Codes/OpenCV_Intro/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/intro.dir/src/OfficialTut1.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/intro.dir/src/OfficialTut1.cpp.o -c "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Codes/OpenCV_Intro/src/OfficialTut1.cpp"

CMakeFiles/intro.dir/src/OfficialTut1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/intro.dir/src/OfficialTut1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Codes/OpenCV_Intro/src/OfficialTut1.cpp" > CMakeFiles/intro.dir/src/OfficialTut1.cpp.i

CMakeFiles/intro.dir/src/OfficialTut1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/intro.dir/src/OfficialTut1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Codes/OpenCV_Intro/src/OfficialTut1.cpp" -o CMakeFiles/intro.dir/src/OfficialTut1.cpp.s

# Object files for target intro
intro_OBJECTS = \
"CMakeFiles/intro.dir/src/OfficialTut1.cpp.o"

# External object files for target intro
intro_EXTERNAL_OBJECTS =

intro: CMakeFiles/intro.dir/src/OfficialTut1.cpp.o
intro: CMakeFiles/intro.dir/build.make
intro: /usr/local/lib/libopencv_gapi.so.4.5.2
intro: /usr/local/lib/libopencv_highgui.so.4.5.2
intro: /usr/local/lib/libopencv_ml.so.4.5.2
intro: /usr/local/lib/libopencv_objdetect.so.4.5.2
intro: /usr/local/lib/libopencv_photo.so.4.5.2
intro: /usr/local/lib/libopencv_stitching.so.4.5.2
intro: /usr/local/lib/libopencv_video.so.4.5.2
intro: /usr/local/lib/libopencv_videoio.so.4.5.2
intro: /usr/local/lib/libopencv_dnn.so.4.5.2
intro: /usr/local/lib/libopencv_imgcodecs.so.4.5.2
intro: /usr/local/lib/libopencv_calib3d.so.4.5.2
intro: /usr/local/lib/libopencv_features2d.so.4.5.2
intro: /usr/local/lib/libopencv_flann.so.4.5.2
intro: /usr/local/lib/libopencv_imgproc.so.4.5.2
intro: /usr/local/lib/libopencv_core.so.4.5.2
intro: CMakeFiles/intro.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Codes/OpenCV_Intro/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable intro"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/intro.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/intro.dir/build: intro

.PHONY : CMakeFiles/intro.dir/build

CMakeFiles/intro.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/intro.dir/cmake_clean.cmake
.PHONY : CMakeFiles/intro.dir/clean

CMakeFiles/intro.dir/depend:
	cd "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Codes/OpenCV_Intro/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Codes/OpenCV_Intro" "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Codes/OpenCV_Intro" "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Codes/OpenCV_Intro/build" "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Codes/OpenCV_Intro/build" "/home/abhinav137/Desktop/Code Projects/C++ Tutorials/Stachniss Modern C++/Codes/OpenCV_Intro/build/CMakeFiles/intro.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/intro.dir/depend

