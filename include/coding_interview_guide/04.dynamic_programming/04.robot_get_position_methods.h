#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_ROBOT_GET_POSITION_METHODS_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_ROBOT_GET_POSITION_METHODS_H_

/*
【题目】
假设有排成一行的N个位置，记为1~N，开始时机器人在M位置，机器人可以往左或者往右走，如果机器人在1位置，那么下一步机器人只能走到2位置，
如果机器人在N位置，那么下一步机器人只能走到N-1位置。规定机器人只能走k步，最终能来到P位置的方法有多少种。
由于方案数可能比较大，所以答案需要对1e9+7取模。
【要求】
时间复杂度O(N*k)。
*/

namespace coding_interview_guide::dynamic_programming::robot_get_position_methods {

class RobotGetPositionMethod {
public:
    static unsigned long method_number(const unsigned int pos_number,
                                       const unsigned int init_pos,
                                       const unsigned int steps,
                                       const unsigned int final_pos);
};

}  // namespace coding_interview_guide::dynamic_programming::robot_get_position_methods

#endif