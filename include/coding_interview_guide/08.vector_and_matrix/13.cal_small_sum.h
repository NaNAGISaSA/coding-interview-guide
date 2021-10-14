#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_CAL_SMALL_SUM_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_CAL_SMALL_SUM_H_

/*
【题目】
数组小和的定义如下：数组s = [1, 3, 5, 2, 4, 6]，
在s[0]的左边小于或等于s[0]的数的和为0；在s[1]的左边小于或等于s[1]的数的和为1；
在s[2]的左边小于或等于s[2]的数的和为1+3=4；在s[3]的左边小于或等于s[3]的数的和为1；
在s[4]的左边小于或等于s[4]的数的和为1+3+2=6；在s[5]的左边小于或等于s[5]的数的和为1+3+5+2+4=15。
所以s的小和为0+1+4+1+6+15=27。给定一个数组s，实现函数返回s的小和。
【要求】
时间复杂度O（NlogN），额外空间复杂度O（N）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::cal_small_sum {

class CalSmallSum {
public:
    static int cal_small_sum(const std::vector<int>& vec);
};

}  // namespace coding_interview_guide::vector_and_matrix::cal_small_sum

#endif