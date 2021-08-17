#include <algorithm>

#include "03.binary_tree/19.party_max_happiness.h"

namespace coding_interview_guide::binary_tree::party_max_happiness {

namespace {
struct RetInfo {
    unsigned int max_happiness_come;
    unsigned int max_happiness_not_come;
    unsigned int max_happiness;
};

RetInfo max_happiness_internal(const Employee* boss) {
    if (boss->subordinates.size() == 0) {
        return {boss->happy, 0, boss->happy};
    }
    unsigned int happiness_come = boss->happy, happiness_not_come = 0;
    for (auto it = boss->subordinates.begin(); it != boss->subordinates.end(); ++it) {
        RetInfo info = max_happiness_internal(*it);
        happiness_come += info.max_happiness_not_come;
        happiness_not_come += std::max(info.max_happiness_come, info.max_happiness_not_come);
    }
    return {happiness_come, happiness_not_come, std::max(happiness_come, happiness_not_come)};
}
}  // namespace

unsigned int PartyMaxHappiness::max_happiness(const Employee* boss) {
    return max_happiness_internal(boss).max_happiness;
}

}  // namespace coding_interview_guide::binary_tree::party_max_happiness
