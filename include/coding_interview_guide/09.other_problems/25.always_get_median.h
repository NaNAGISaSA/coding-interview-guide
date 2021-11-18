#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_ALWAYS_GET_MEDIAN_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_ALWAYS_GET_MEDIAN_H_

/*
【题目】
有一个源源不断地吐出整数的数据流，假设你有足够的空间来保存吐出的数。请设计一个名字叫
MedianHolder的结构，可以随时取得之前所有数据的中位数。
【要求】
如果当前已吐出N个数则：
1. 将新数加入到MedianHolder的操作，时间复杂度为O（logN）；
2. 取得中位数的操作，时间复杂度为O（1）。
*/

#include <memory>

namespace coding_interview_guide::other_problems::median_holder {

class MedianHolder {
public:
    MedianHolder();
    ~MedianHolder();

    void add_number(int num);
    int get_median() const;

private:
    struct Impl;
    std::unique_ptr<Impl> pimpl;
};

}  // namespace coding_interview_guide::other_problems::median_holder

#endif
