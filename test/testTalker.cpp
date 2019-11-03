#include <gtest/gtest.h>
#include <ros/ros.h>
#include "beginner_tutorials/updateStr.h"

std::shared_ptr<ros::NodeHandle> nh;

TEST(TESTSuite, test_customStr)
{
  ros::ServiceClient client = nh->serviceClient<beginner_tutorials::updateStr>(
      "updateStr");
  bool exists(client.waitForExistence(ros::Duration(1)));
  EXPECT_TRUE(exists);

  beginner_tutorials::updateStr srv;
  srv.request.lclStr = "HelloFromTest";
  client.call(srv);

  EXPECT_EQ(srv.response.lclStr, srv.request.lclStr);
}

