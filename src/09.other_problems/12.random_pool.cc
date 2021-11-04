#include <random>

#include "09.other_problems/12.random_pool.h"

namespace coding_interview_guide::other_problems::random_pool {

RandomPool::RandomPool() : index_key_map{}, key_index_map{}, pool_size{0} {
}

void RandomPool::insert(int key) {
    if (key_index_map.find(key) != key_index_map.end()) {
        return;
    }
    index_key_map[pool_size] = key;
    key_index_map[key] = pool_size++;
}

void RandomPool::del(int key) {
    if (key_index_map.find(key) == key_index_map.end()) {
        return;
    }
    size_t delete_index = key_index_map[key];
    int last_key = index_key_map[--pool_size];
    index_key_map[delete_index] = last_key;
    key_index_map[last_key] = delete_index;
    key_index_map.erase(key);
    index_key_map.erase(pool_size);
}

int RandomPool::get_random() {
    if (pool_size == 0) {
        return -1;
    }
    std::mt19937 generator(1);
    std::uniform_int_distribution<size_t> distrib(0, pool_size);
    return index_key_map[distrib(generator)];
}

}  // namespace coding_interview_guide::other_problems::random_pool
