# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/TuSimpleLib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TuSimpleLib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TuSimpleLib.dir/flags.make

CMakeFiles/TuSimpleLib.dir/main.c.o: CMakeFiles/TuSimpleLib.dir/flags.make
CMakeFiles/TuSimpleLib.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TuSimpleLib.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TuSimpleLib.dir/main.c.o   -c "/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib/main.c"

CMakeFiles/TuSimpleLib.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TuSimpleLib.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib/main.c" > CMakeFiles/TuSimpleLib.dir/main.c.i

CMakeFiles/TuSimpleLib.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TuSimpleLib.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib/main.c" -o CMakeFiles/TuSimpleLib.dir/main.c.s

CMakeFiles/TuSimpleLib.dir/main.c.o.requires:

.PHONY : CMakeFiles/TuSimpleLib.dir/main.c.o.requires

CMakeFiles/TuSimpleLib.dir/main.c.o.provides: CMakeFiles/TuSimpleLib.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/TuSimpleLib.dir/build.make CMakeFiles/TuSimpleLib.dir/main.c.o.provides.build
.PHONY : CMakeFiles/TuSimpleLib.dir/main.c.o.provides

CMakeFiles/TuSimpleLib.dir/main.c.o.provides.build: CMakeFiles/TuSimpleLib.dir/main.c.o


CMakeFiles/TuSimpleLib.dir/list.c.o: CMakeFiles/TuSimpleLib.dir/flags.make
CMakeFiles/TuSimpleLib.dir/list.c.o: ../list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/TuSimpleLib.dir/list.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TuSimpleLib.dir/list.c.o   -c "/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib/list.c"

CMakeFiles/TuSimpleLib.dir/list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TuSimpleLib.dir/list.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib/list.c" > CMakeFiles/TuSimpleLib.dir/list.c.i

CMakeFiles/TuSimpleLib.dir/list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TuSimpleLib.dir/list.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib/list.c" -o CMakeFiles/TuSimpleLib.dir/list.c.s

CMakeFiles/TuSimpleLib.dir/list.c.o.requires:

.PHONY : CMakeFiles/TuSimpleLib.dir/list.c.o.requires

CMakeFiles/TuSimpleLib.dir/list.c.o.provides: CMakeFiles/TuSimpleLib.dir/list.c.o.requires
	$(MAKE) -f CMakeFiles/TuSimpleLib.dir/build.make CMakeFiles/TuSimpleLib.dir/list.c.o.provides.build
.PHONY : CMakeFiles/TuSimpleLib.dir/list.c.o.provides

CMakeFiles/TuSimpleLib.dir/list.c.o.provides.build: CMakeFiles/TuSimpleLib.dir/list.c.o


CMakeFiles/TuSimpleLib.dir/cast.c.o: CMakeFiles/TuSimpleLib.dir/flags.make
CMakeFiles/TuSimpleLib.dir/cast.c.o: ../cast.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/TuSimpleLib.dir/cast.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TuSimpleLib.dir/cast.c.o   -c "/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib/cast.c"

CMakeFiles/TuSimpleLib.dir/cast.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TuSimpleLib.dir/cast.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib/cast.c" > CMakeFiles/TuSimpleLib.dir/cast.c.i

CMakeFiles/TuSimpleLib.dir/cast.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TuSimpleLib.dir/cast.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib/cast.c" -o CMakeFiles/TuSimpleLib.dir/cast.c.s

CMakeFiles/TuSimpleLib.dir/cast.c.o.requires:

.PHONY : CMakeFiles/TuSimpleLib.dir/cast.c.o.requires

CMakeFiles/TuSimpleLib.dir/cast.c.o.provides: CMakeFiles/TuSimpleLib.dir/cast.c.o.requires
	$(MAKE) -f CMakeFiles/TuSimpleLib.dir/build.make CMakeFiles/TuSimpleLib.dir/cast.c.o.provides.build
.PHONY : CMakeFiles/TuSimpleLib.dir/cast.c.o.provides

CMakeFiles/TuSimpleLib.dir/cast.c.o.provides.build: CMakeFiles/TuSimpleLib.dir/cast.c.o


# Object files for target TuSimpleLib
TuSimpleLib_OBJECTS = \
"CMakeFiles/TuSimpleLib.dir/main.c.o" \
"CMakeFiles/TuSimpleLib.dir/list.c.o" \
"CMakeFiles/TuSimpleLib.dir/cast.c.o"

# External object files for target TuSimpleLib
TuSimpleLib_EXTERNAL_OBJECTS =

TuSimpleLib: CMakeFiles/TuSimpleLib.dir/main.c.o
TuSimpleLib: CMakeFiles/TuSimpleLib.dir/list.c.o
TuSimpleLib: CMakeFiles/TuSimpleLib.dir/cast.c.o
TuSimpleLib: CMakeFiles/TuSimpleLib.dir/build.make
TuSimpleLib: CMakeFiles/TuSimpleLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable TuSimpleLib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TuSimpleLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TuSimpleLib.dir/build: TuSimpleLib

.PHONY : CMakeFiles/TuSimpleLib.dir/build

CMakeFiles/TuSimpleLib.dir/requires: CMakeFiles/TuSimpleLib.dir/main.c.o.requires
CMakeFiles/TuSimpleLib.dir/requires: CMakeFiles/TuSimpleLib.dir/list.c.o.requires
CMakeFiles/TuSimpleLib.dir/requires: CMakeFiles/TuSimpleLib.dir/cast.c.o.requires

.PHONY : CMakeFiles/TuSimpleLib.dir/requires

CMakeFiles/TuSimpleLib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TuSimpleLib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TuSimpleLib.dir/clean

CMakeFiles/TuSimpleLib.dir/depend:
	cd "/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib" "/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib" "/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib/cmake-build-debug" "/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib/cmake-build-debug" "/Users/shenzhu/Desktop/Programming Language and Translators/TuSimpleLib/cmake-build-debug/CMakeFiles/TuSimpleLib.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/TuSimpleLib.dir/depend

