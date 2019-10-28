# 808X beginner_tutorials
## Overview
ROS Beginner Tutorials
Note that this repo is for the catkin workspace that contains the beginner_tutorial 

###Pub/Sub Exercise

First pub/sub assignment where user can provide a command line String argument which will be read from argv and published but the 'talker' ros node and 'listener' ros node subscribes to the message and echoes it.

Find the pub/sub project files [here] (./catkin_ws/src/beginner_tutorials)


## Standard install clonning from git
```
git clone --recursive https://github.com/stinta/beginner_tutorials.git
cd <path to repository>
catkin_make
```

## Running and Starting ROS nodes
```
cd <path to repository>
source devel/setup.sh
roscore

Open a couple of terminals and for each run 
cd <path to repository>
source devel/setup.sh
Terminal1: rosrun beginn_tutorials talker "CUSTOM STRING"
Terminal2: rosrun beginn_tutorials listener
```
## Code Checks

cppcheck
```
cppcheck --std=c++11 $(find . -name \*.cpp -or -name \*.srv | grep -vE -e "^./
build/" -e "^./results/")
```
cpplint
```
 cpplint $(find . -name \*.cpp | grep -vE -e "^./build/" -e "^./results")
```
## Author
Sandra P. Tinta

## License
[BSD-3](https://opensource.org/licenses/BSD-3-Clause)
