# 808X Week10 Submission
## Overview
The pub/sub assignment where user can provide a command line String argument which will be read from argv and published but the 'talker' ros node and 'listener' ros node subscribes to the message and echoes it.

Additionally, a launch file is provided to start both talker and listener nodes with the option of providing arguments to set a custom string displayed and a rate at which the string is set.  If no argument is provided, default values will be used.

Lastly, the talker nodes provides a service call /updateStr that enables the user to update the string to be used via the rosservice utility. 

## Standard install clonning from git

On a catkin workspace src folder:
```
git clone --recursive https://github.com/stinta/beginner_tutorials.git
```
On a catkin workspace
```
catkin_make
```

## Running and Starting ROS nodes manually
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
## Running and Starting ROS node via the launch file
Ensure that the setup.sh script has been sourced
Note that the arguments to be provided are a string followed by a double.  If no value or invalid values are provided'
the program will sure default values
```
roslaunch beginner_tutorials Week10_HW.launch myArgs:="SENCONDTRY 0.5"
```

## Updating the string via de service
While the nodes are running
```
rosservice call /updateStr "UPDATED VIA  SERVICE CALL"

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
