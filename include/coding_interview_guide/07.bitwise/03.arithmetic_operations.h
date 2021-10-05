#ifndef _CODING_INTERVIEW_GUIDE_STRING_ARITHMETIC_OPERATIONS_H_
#define _CODING_INTERVIEW_GUIDE_STRING_ARITHMETIC_OPERATIONS_H_

/*
【题目】
给定两个32位整数a和b。要求不使用算术运算符，分别实现a和b的加减乘除运算。
如果给定的a和b执行加减乘除的某些结果本来就会导致数据的溢出，那么你实现的函数不需要对那些结果负责。
【要求】
时间复杂度O（1），额外空间复杂度O（1）。
*/

namespace coding_interview_guide::bitwise::arithmetic_operations {

class ArithmeticOperations {
public:
    static int add(int a, int b);
    static int sub(int a, int b);
    static int multi(int a, int b);
    static int div(int a, int b);
};

}  // namespace coding_interview_guide::bitwise::arithmetic_operations

#endif