#ifndef _CODING_INTERVIEW_GUIDE_STRING_FIND_ODD_COUNT_NUM_H_
#define _CODING_INTERVIEW_GUIDE_STRING_FIND_ODD_COUNT_NUM_H_

/*
【题目】
给一个数组arr，其中只有一个数出现了奇数次，其它数出现了偶数次，打印这个数。
【进阶】
有两个数出现了奇数次，其它数出现了偶数次，打印这两个数。
【要求】
时间复杂度O（N），额外空间复杂度O（1）。
*/

#include <tuple>
#include <vector>

namespace coding_interview_guide::bitwise::find_odd_count_num {

class FindOddCountNumber {
public:
    static int find_one(const std::vector<int>& vec);
    static std::tuple<int, int> find_two(const std::vector<int>& vec);
};

}  // namespace coding_interview_guide::bitwise::find_odd_count_num

#endif