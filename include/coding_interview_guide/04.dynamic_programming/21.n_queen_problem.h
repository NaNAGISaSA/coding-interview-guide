#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_N_QUEEN_PROBLEM_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_N_QUEEN_PROBLEM_H_

/*
【题目】
N皇后问题是指在N*N的棋盘上要摆N个皇后，要求任何两个皇后不同行，不同列也不再同一条斜线上，求给一个整数n，返回n皇后的摆法。
*/

namespace coding_interview_guide::dynamic_programming::n_queen_problem {

class NQueenProblem {
public:
    static unsigned int methods(const unsigned int board_length);
    static unsigned int methods_opt(const unsigned int board_length);
};

}  // namespace coding_interview_guide::dynamic_programming::n_queen_problem

#endif