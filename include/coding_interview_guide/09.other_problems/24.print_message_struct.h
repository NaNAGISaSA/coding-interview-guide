#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_PRINT_MESSAGE_STRUCT_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_PRINT_MESSAGE_STRUCT_H_

/*
【题目】
已知一个消息流会不断地吐出整数1∼N，但不一定按照顺序吐出。如果上次打印的数为i，那么当i+1出现时，
请打印i+1及其之后接收过的并且连续的所有数，直到1∼N全部接收并打印完，请设计这种接收并打印的结构。
示例：
消息流吐出2，一种结构接收而不打印2，因为1还没出现。
消息流吐出1，一种结构接收1，并且打印：1, 2。
消息流吐出4，一种结构接收而不打印4，因为3还没出现。
消息流吐出5，一种结构接收而不打印5，因为3还没出现。
消息流吐出7，一种结构接收而不打印7，因为3还没出现。
消息流吐出3，一种结构接收3，并且打印：3, 4, 5。
消息流吐出9，一种结构接收而不打印9，因为6还没出现。
消息流吐出8，一种结构接收而不打印8，因为6还没出现。
消息流吐出6，一种结构接收6，并且打印：6, 7, 8, 9。
【要求】
消息流最终会吐出全部的1∼N，当然最终也会打印完所有的1∼N，要求接收和打印1∼N的整个过程，时间复杂度为O(N)。
*/

#include <memory>

namespace coding_interview_guide::other_problems::print_message_struct {

class PrintMessageStruct {
public:
    PrintMessageStruct();
    ~PrintMessageStruct();
    void receive(unsigned int num);

private:
    struct Impl;
    std::unique_ptr<Impl> pimpl;
};

}  // namespace coding_interview_guide::other_problems::print_message_struct

#endif
