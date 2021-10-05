#ifndef _CODING_INTERVIEW_GUIDE_STRING_FIND_STR_IN_ORDER_VEC_H_
#define _CODING_INTERVIEW_GUIDE_STRING_FIND_STR_IN_ORDER_VEC_H_

/*
【题目】
给定一个字符串数组strs[]，在strs中有些位置为null，但在不为null的位置上，其字符串是按照字典序由小到大出现的。
在给定一个字符串str，请返回str在strs中出现的最左位置，如果strs中不存在str请输出“-1”。
【要求】
时间复杂度O（logN），额外空间复杂度O（1）。
*/

#include <string>
#include <vector>

namespace coding_interview_guide::string::find_str_in_order_vec {

class FindStrInOrderVec {
public:
    static long find_index(const std::vector<std::string>& vec, const std::string& str);
};

}  // namespace coding_interview_guide::string::find_str_in_order_vec

#endif