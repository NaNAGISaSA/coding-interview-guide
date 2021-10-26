#include <queue>

#include "08.vector_and_matrix/27.project_max_profit.h"

namespace coding_interview_guide::vector_and_matrix::project_max_profit {

namespace {
struct Project {
    Project(unsigned int cost, unsigned int profit) : cost_(cost), profit_(profit) {
    }

    unsigned int cost_;
    unsigned int profit_;
};
}  // namespace

unsigned int ProjectMaxProfit::max_profit(unsigned int w,
                                          unsigned int k,
                                          const std::vector<unsigned int>& costs,
                                          const std::vector<unsigned int>& profits) {
    if (w == 0 || costs.size() == 0 || profits.size() == 0) {
        return 0U;
    } else if (k == 0) {
        return w;
    }

    auto cost_cmp = [](const Project& p1, const Project& p2) { return p1.cost_ > p2.cost_; };
    auto profit_cmp = [](const Project& p1, const Project& p2) { return p1.profit_ < p2.profit_; };
    std::priority_queue<Project, std::vector<Project>, decltype(cost_cmp)> cost_min_heap(cost_cmp);
    std::priority_queue<Project, std::vector<Project>, decltype(profit_cmp)> profit_max_heap(profit_cmp);

    for (size_t i = 0; i < costs.size(); ++i) {
        cost_min_heap.push(Project(costs[i], profits[i]));
    }

    for (unsigned int i = 0; i < k; ++i) {
        while (cost_min_heap.size() > 0 && w >= cost_min_heap.top().cost_) {
            profit_max_heap.push(cost_min_heap.top());
            cost_min_heap.pop();
        }
        if (profit_max_heap.size() > 0) {
            w += profit_max_heap.top().profit_;
            profit_max_heap.pop();
        }
    }
    return w;
}

}  // namespace coding_interview_guide::vector_and_matrix::project_max_profit
