#include "08.vector_and_matrix/29.gas_station_start_point.h"

namespace coding_interview_guide::vector_and_matrix::gas_station_start_point {

std::vector<bool> GasStationStartPoint::is_good_station(const std::vector<unsigned int>& oil,
                                                        const std::vector<unsigned int>& dis) {
    if (oil.size() < 2 || dis.size() < 2 || oil.size() != dis.size()) {
        return {};
    }

    size_t station_num = oil.size(), init = station_num;

    std::vector<int> oil_sub_dis(station_num, 0);
    for (size_t i = 0; i < station_num; ++i) {
        oil_sub_dis[i] = static_cast<int>(oil[i] - dis[i]);
        if (oil_sub_dis[i] >= 0) {
            init = i;
        }
    }

    if (init == station_num) {
        return std::vector<bool>(station_num, false);
    }

    auto next_station = [&station_num](size_t index) { return index == station_num - 1 ? 0 : index + 1; };
    auto last_station = [&station_num](size_t index) { return index == 0 ? station_num - 1 : index - 1; };

    size_t start = init, end = next_station(start);
    int need = 0, rest = 0;
    std::vector<bool> result(station_num, false);

    while (true) {
        if (start != init && next_station(start) == end) {
            break;
        }
        if (oil_sub_dis[start] >= need) {
            // 从当前的start位置可以走到init位置，则end尝试向后移动
            rest = rest + oil_sub_dis[start] - need;
            need = 0;
            while (rest >= 0 && end != start) {
                rest += oil_sub_dis[end];
                end = next_station(end);
            }
            if (rest >= 0) {
                // 当前start是找到的第一个良好出发点，start到init之间的点一定不是，init到start之前的点可能是
                result[start] = true;
                need = 0;
                for (size_t i = last_station(start); i != init;) {
                    need -= oil_sub_dis[i];
                    if (need <= 0) {
                        need = 0;
                        result[i] = true;
                    }
                    i = last_station(i);
                }
                break;
            }
        } else {
            need -= oil_sub_dis[start];
        }
        start = last_station(start);
    }

    return result;
}

}  // namespace coding_interview_guide::vector_and_matrix::gas_station_start_point
