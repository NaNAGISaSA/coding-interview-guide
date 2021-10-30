#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_POINT_IN_TRIANGLE_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_POINT_IN_TRIANGLE_H_

/*
【题目】
在二维坐标系中，所有的值都是double类型，那么一个三角形可以由3个点来代表，给定3个点代表的三角形，再给定一个点(x,
y)，判断(x, y)是否在三角形中。
*/

namespace coding_interview_guide::other_problems::point_in_triangle {

class PointInTriangle {
public:
    static bool judge(double x1, double y1, double x2, double y2, double x3, double y3, double x, double y);
};

}  // namespace coding_interview_guide::other_problems::point_in_triangle

#endif