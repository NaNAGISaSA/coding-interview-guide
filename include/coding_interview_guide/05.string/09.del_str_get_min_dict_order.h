#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_DEL_STR_GET_MIN_DICT_ORDER_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_DEL_STR_GET_MIN_DICT_ORDER_H_

/*
【题目】
给一个全是小写字母的字符串str，删除多余字符，使得每种字符只保留一个，并且让最终结果字符串字典序最小。
【要求】
时间复杂度O（N），额外空间复杂度O（1）。
*/

#include <string>

namespace coding_interview_guide::string::del_str_get_min_dict_order {

class GetMinDictOrderStr {
public:
    static std::string process(const std::string& str);
};

}  // namespace coding_interview_guide::string::del_str_get_min_dict_order

#endif