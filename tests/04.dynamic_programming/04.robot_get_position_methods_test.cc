#include <gtest/gtest.h>

#include "04.dynamic_programming/04.robot_get_position_methods.h"

using namespace coding_interview_guide::dynamic_programming::robot_get_position_methods;

TEST(ROBOT_GET_POSITION_METHODS, ROBOT_GET_POSITION_METHODS_EXAMPLE_TEST) {
    ASSERT_EQ(RobotGetPositionMethod::method_number(5, 2, 3, 3), 3);
    ASSERT_EQ(RobotGetPositionMethod::method_number(3, 1, 3, 3), 0);
    ASSERT_EQ(RobotGetPositionMethod::method_number(1000, 1, 1000, 1), 591137401);
}
