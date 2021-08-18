#include <unordered_map>

#include "03.binary_tree/20.obtain_post_order_arr.h"

namespace coding_interview_guide::binary_tree::obtain_post_order_arr {

namespace {
void obtain_internal(const std::vector<int>& pre,
                     const size_t pre_begin,
                     const size_t pre_end,
                     const std::vector<int>& in,
                     const size_t in_begin,
                     const size_t in_end,
                     std::vector<int>& post,
                     size_t& fill_index,
                     const std::unordered_map<int, size_t>& map) {
    if (pre_begin > pre_end) {
        return;
    }
    post[fill_index--] = pre[pre_begin];
    size_t in_index = map.at(pre[pre_begin]);
    obtain_internal(pre, pre_end - (in_end - in_index) + 1, pre_end, in, in_index + 1, in_end, post, fill_index, map);
    obtain_internal(
        pre, pre_begin + 1, pre_begin + in_index - in_begin, in, in_begin, in_index - 1, post, fill_index, map);
}
}  // namespace

std::vector<int> ObtainPostOrderArr::obtain(std::vector<int>& pre_order, std::vector<int>& in_order) {
    if (pre_order.size() == 0) {
        return {};
    }
    std::vector<int> post_order(pre_order.size(), 0);
    std::unordered_map<int, size_t> in_order_index_map;
    for (size_t i = 0; i < in_order.size(); ++i) {
        in_order_index_map.insert({in_order[i], i});
    }
    size_t fill_index = post_order.size() - 1;
    obtain_internal(pre_order,
                    0,
                    pre_order.size() - 1,
                    in_order,
                    0,
                    in_order.size() - 1,
                    post_order,
                    fill_index,
                    in_order_index_map);
    return post_order;
}

}  // namespace coding_interview_guide::binary_tree::obtain_post_order_arr
