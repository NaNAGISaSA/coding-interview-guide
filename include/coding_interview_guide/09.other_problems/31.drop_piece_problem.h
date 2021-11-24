#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_DROP_PIECE_PROBLEM_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_DROP_PIECE_PROBLEM_H_

/*
【题目】
一座大楼有0∼N层，地面算作第0层，最高的一层为第N层。
已知棋子从第0层掉落肯定不会摔碎，从第i层掉落可能会摔碎，也可能不会摔碎(1⩽i⩽N)。
给定整数N作为楼层数，再给定整数K作为棋子数，返回如果想找到棋子不会摔碎的最高层数，即使在最差的情况下扔的最小次数。
一次只能扔一个棋子。
举例：N=105，K=2，返回14。
第一个棋子先在14层扔，碎了则用仅存的一个棋子试1~13层
若没碎，第一个棋子继续在27层扔，碎了则用仅存的一个棋子试15~26层
若没碎，第一个棋子继续在39层扔，碎了则用仅存的一个棋子试28~38层
若没碎，第一个棋子继续在50层扔，碎了则用仅存的一个棋子试40~49层
若没碎，第一个棋子继续在60层扔，碎了则用仅存的一个棋子试51~59层
若没碎，第一个棋子继续在69层扔，碎了则用仅存的一个棋子试61~68层
若没碎，第一个棋子继续在77层扔，碎了则用仅存的一个棋子试70~76层
若没碎，第一个棋子继续在84层扔，碎了则用仅存的一个棋子试78~83层
若没碎，第一个棋子继续在90层扔，碎了则用仅存的一个棋子试85~89层
若没碎，第一个棋子继续在95层扔，碎了则用仅存的一个棋子试91~94层
若没碎，第一个棋子继续在99层扔，碎了则用仅存的一个棋子试96~98层
若没碎，第一个棋子继续在102层扔，碎了则用仅存的一个棋子试100、101层
若没碎，第一个棋子继续在104层扔，碎了则用仅存的一个棋子试103层
若没碎，第一个棋子继续在105层扔，若到这一步还没碎，那么105便是结果
*/

namespace coding_interview_guide::other_problems::drop_piece_problem {

class DropPieceProblem {
public:
    static unsigned int minimum_times(unsigned int height, unsigned int piece_num);
};

}  // namespace coding_interview_guide::other_problems::drop_piece_problem

#endif