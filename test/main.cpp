#include <gtest/gtest.h>
#include <ros/ros.h>

/**
* @brief Stages and runs all test for Talker
*/
int main(int argc, char** argv) {
  
  ros::init(argc, argv, "allTalkerTests");

  // Initialize Google Test
  ::testing::InitGoogleTest(&argc, argv);

  // Run all tests
  return RUN_ALL_TESTS();
}
