#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "08.vector_and_matrix/29.gas_station_start_point.h"

using namespace coding_interview_guide::vector_and_matrix::gas_station_start_point;

TEST(GAS_STATION_START_POINT, GAS_STATION_START_POINT_EXAMPLE_TEST) {
    ASSERT_THAT(GasStationStartPoint::is_good_station({4, 2, 0, 4, 5, 2, 3, 6, 2}, {6, 1, 3, 1, 6, 4, 1, 1, 6}),
                testing::ElementsAre(false, false, false, false, false, false, false, false, false));
    ASSERT_THAT(GasStationStartPoint::is_good_station({4, 5, 3, 1, 5, 1, 1, 9}, {1, 9, 1, 2, 6, 0, 2, 0}),
                testing::ElementsAre(false, false, true, false, false, true, false, true));
}
