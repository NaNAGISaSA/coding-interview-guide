#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_GAS_STATION_START_POINT_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_GAS_STATION_START_POINT_H_

/*
【题目】
N个加油站组成一个环形，给定两个长度都是N的非负数组oil和dis(N>1)，
oil[i]代表第i个加油站存的油可以跑多少千米，dis[i]代表第i个加油站到环中下一个加油站相隔多少千米。
假设你有一辆油箱足够大的车，初始时车里没有油。如果车从第i个加油站出发，最终可以回到这个加油站，那么第i个加油站就算良好出发点，否则就不算。
请返回长度为N的boolean型数组res，res[i]代表第i个加油站是不是良好出发点，规定只能按照顺时针走，也就是i只能走到i+1，N只能走到1。
【要求】
时间复杂度O（N），额外空间复杂度O（N）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::gas_station_start_point {

class GasStationStartPoint {
public:
    static std::vector<bool> is_good_station(const std::vector<unsigned int>& oil,
                                             const std::vector<unsigned int>& dis);
};

}  // namespace coding_interview_guide::vector_and_matrix::gas_station_start_point

#endif