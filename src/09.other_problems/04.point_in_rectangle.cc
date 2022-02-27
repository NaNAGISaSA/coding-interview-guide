#include "09.other_problems/04.point_in_rectangle.h"

namespace coding_interview_guide::other_problems::point_in_rectangle {

/*
平面内直角坐标系中坐标旋转变换公式
1）逆时针
x1 = x * cos(theta) - y * sin(theta);
y1 = y * cos(theta) + x * sin(theta);
2）顺时针
x1 = x * cos(theta) + y * sin(theta);
y1 = y * cos(theta) - x * sin(theta);
*/
bool PointInRectangle::judge(const std::pair<double, double>& left_point,
                             const std::pair<double, double>& top_point,
                             const std::pair<double, double>& bottom_point,
                             const std::pair<double, double>& right_point,
                             const std::pair<double, double>& point) {
    auto parallel_judge = [](double x1, double y1, double x4, double y4, double x, double y) {
        return (x <= x1 || x >= x4 || y >= y1 || y <= y4) ? false : true;
    };
    if (std::get<1>(left_point) == std::get<1>(top_point)) {
        return parallel_judge(std::get<0>(left_point),
                              std::get<1>(left_point),
                              std::get<0>(right_point),
                              std::get<1>(right_point),
                              std::get<0>(point),
                              std::get<1>(point));
    }
    double x = std::get<0>(right_point) - std::get<0>(bottom_point);
    double y = std::get<1>(right_point) - std::get<1>(bottom_point);
    double z = x * x + y * y;
    double sin = y / z, cos = x / z;
    return parallel_judge(cos * std::get<0>(left_point) + sin * std::get<1>(left_point),
                          -1 * sin * std::get<0>(left_point) + cos * std::get<1>(left_point),
                          cos * std::get<0>(right_point) + sin * std::get<1>(right_point),
                          -1 * sin * std::get<0>(right_point) + cos * std::get<1>(right_point),
                          cos * std::get<0>(point) + sin * std::get<1>(point),
                          -1 * sin * std::get<0>(point) + cos * std::get<1>(point));
}

}  // namespace coding_interview_guide::other_problems::point_in_rectangle
