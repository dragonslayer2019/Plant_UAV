# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/alan/Plant_UAV/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alan/Plant_UAV/build

# Utility rule file for sdf.

# Include the progress variables for this target.
include rotors_simulator/rotors_gazebo/CMakeFiles/sdf.dir/progress.make

rotors_simulator/rotors_gazebo/CMakeFiles/sdf: /home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo/models/iris/iris.sdf


/home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo/models/iris/iris.sdf: /home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo/models/rotors_description/urdf/iris.xacro
/home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo/models/iris/iris.sdf: /home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo/models/rotors_description/urdf/iris_base.xacro
/home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo/models/iris/iris.sdf: /home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo/models/rotors_description/urdf/component_snippets.xacro
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/alan/Plant_UAV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating /home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo/models/iris/iris.sdf"
	cd /home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo && rm -f /home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo/models/iris/iris.sdf
	cd /home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo && /usr/bin/python2 /home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo/scripts/xacro.py -o /home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo/models/rotors_description/urdf/iris_base.urdf /home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo/models/rotors_description/urdf/iris_base.xacro enable_mavlink_interface:=true enable_ground_truth:=false enable_wind:=false enable_logging:=false rotors_description_dir:=/home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo/models/rotors_description
	cd /home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo && gz sdf -p /home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo/models/rotors_description/urdf/iris_base.urdf >> /home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo/models/iris/iris.sdf
	cd /home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo && rm -f /home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo/models/rotors_description/urdf/iris_base.urdf

sdf: rotors_simulator/rotors_gazebo/CMakeFiles/sdf
sdf: /home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo/models/iris/iris.sdf
sdf: rotors_simulator/rotors_gazebo/CMakeFiles/sdf.dir/build.make

.PHONY : sdf

# Rule to build all files generated by this target.
rotors_simulator/rotors_gazebo/CMakeFiles/sdf.dir/build: sdf

.PHONY : rotors_simulator/rotors_gazebo/CMakeFiles/sdf.dir/build

rotors_simulator/rotors_gazebo/CMakeFiles/sdf.dir/clean:
	cd /home/alan/Plant_UAV/build/rotors_simulator/rotors_gazebo && $(CMAKE_COMMAND) -P CMakeFiles/sdf.dir/cmake_clean.cmake
.PHONY : rotors_simulator/rotors_gazebo/CMakeFiles/sdf.dir/clean

rotors_simulator/rotors_gazebo/CMakeFiles/sdf.dir/depend:
	cd /home/alan/Plant_UAV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alan/Plant_UAV/src /home/alan/Plant_UAV/src/rotors_simulator/rotors_gazebo /home/alan/Plant_UAV/build /home/alan/Plant_UAV/build/rotors_simulator/rotors_gazebo /home/alan/Plant_UAV/build/rotors_simulator/rotors_gazebo/CMakeFiles/sdf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : rotors_simulator/rotors_gazebo/CMakeFiles/sdf.dir/depend

