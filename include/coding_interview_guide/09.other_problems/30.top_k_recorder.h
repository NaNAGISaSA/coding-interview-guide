#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_TOP_K_RECORDER_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_TOP_K_RECORDER_H_

/*
【题目】
设计并实现TopKRecorder结构，可以不断地向其中加入字符串，并且可以随时打印
加入次数最多的前k个字符串，具体为：
1. k在TopKRecorder实例化时指定，并且不再变化；
2. 含有add(String str)方法；
3. 含有printTopK()方法，打印字符串时不要求严格按照排名顺序；
【要求】
add的时间复杂度为O(logk)，print的时间复杂度为O(k)。
*/

#include <memory>
#include <string>

namespace coding_interview_guide::other_problems::top_k_recorder {

class TopKRecorder {
public:
    TopKRecorder(unsigned int k);
    ~TopKRecorder();
    void add(const std::string& str);
    void print_top_k();

private:
    struct Impl;
    std::unique_ptr<Impl> pimpl;
};

}  // namespace coding_interview_guide::other_problems::top_k_recorder

#endif