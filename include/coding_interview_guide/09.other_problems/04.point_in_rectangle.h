#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_POINT_IN_RECTANGLE_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_POINT_IN_RECTANGLE_H_

/*
【题目】
在二维坐标系中，所有的值是double类型，那么一个矩形可以由四个点来代表，(x1, y1)为最左的点，(x2, y2)为最上的点，(x3,
y3)为最下的点，(x4, y4)为最右的点。给定4个点代表的矩形，再给定一个点(x, y)，判断(x, y)是否在矩形中。
*/

#include <utility>

namespace coding_interview_guide::other_problems::point_in_rectangle {

class PointInRectangle {
public:
    static bool judge(const std::pair<double, double>& left_point,
                      const std::pair<double, double>& top_point,
                      const std::pair<double, double>& bottom_point,
                      const std::pair<double, double>& right_point,
                      const std::pair<double, double>& point);
};

}  // namespace coding_interview_guide::other_problems::point_in_rectangle

#endif