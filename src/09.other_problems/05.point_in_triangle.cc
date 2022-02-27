#include "09.other_problems/05.point_in_triangle.h"

namespace coding_interview_guide::other_problems::point_in_triangle {

/*
叉积性质：
如果向量AB叉乘向量AC结果为正，说明C在AB的左边；
如果向量AB叉乘向量AC结果为负，说明C在AB的右边；
*/
bool PointInTriangle::judge(double x1, double y1, double x2, double y2, double x3, double y3, double x, double y) {
    auto cross_product = [](double x1, double y1, double x2, double y2) { return x1 * y2 - x2 * y1; };
    if (cross_product(x2 - x1, y2 - y1, x3 - x1, y3 - y1) < 0) {
        double tmp1 = x2, tmp2 = y2;
        x2 = x3;
        y2 = y3;
        x3 = tmp1;
        y3 = tmp2;
    }
    if (cross_product(x2 - x1, y2 - y1, x - x1, y - y1) <= 0) {
        return false;
    }
    if (cross_product(x3 - x2, y3 - y2, x - x2, y - y2) <= 0) {
        return false;
    }
    if (cross_product(x1 - x3, y1 - y3, x - x3, y - y3) <= 0) {
        return false;
    }
    return true;
}

}  // namespace coding_interview_guide::other_problems::point_in_triangle
