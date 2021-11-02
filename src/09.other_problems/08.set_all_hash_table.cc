#include <unordered_map>

#include "09.other_problems/08.set_all_hash_table.h"

namespace coding_interview_guide::other_problems::set_all_hash_table {

template <typename V>
struct Value {
    Value(long t, const V& v) : timestamp(t), value(v) {
    }
    Value(long t, V&& v) : timestamp(t), value(std::move(v)) {
    }

    long timestamp;
    V value;
};

template struct Value<int>;

template <typename K, typename V>
struct SetAllHashTable<K, V>::Impl {
public:
    Impl() : index(0), value(Value<V>(-1, V())), map({}) {
    }
    void put(const K& k, const V& v) {
        map.insert({k, Value<V>(index++, v)});
    }
    void put(const K& k, V&& v) {
        map.insert({k, Value<V>(index++, std::move(v))});
    }
    const V& get(const K& k) const {
        if (map.at(k).timestamp > value.timestamp) {
            return map.at(k).value;
        } else {
            return value.value;
        }
    }
    bool contains(const K& k) const {
        return map.find(k) != map.end();
    }
    void set_all(const V& v) {
        value = Value<V>(index++, v);
    }
    void set_all(V&& v) {
        value = Value<V>(index++, std::move(v));
    }

private:
    long index;
    Value<V> value;
    std::unordered_map<K, Value<V>> map;
};

template <typename K, typename V>
SetAllHashTable<K, V>::SetAllHashTable() : impl(std::make_unique<Impl>()) {
}

template <typename K, typename V>
SetAllHashTable<K, V>::~SetAllHashTable() = default;

template <typename K, typename V>
void SetAllHashTable<K, V>::put(const K& k, const V& v) {
    impl->put(k, v);
}

template <typename K, typename V>
void SetAllHashTable<K, V>::put(const K& k, V&& v) {
    impl->put(k, std::move(v));
}

template <typename K, typename V>
const V& SetAllHashTable<K, V>::get(const K& k) const {
    return impl->get(k);
}

template <typename K, typename V>
bool SetAllHashTable<K, V>::contains(const K& k) const {
    return impl->contains(k);
}

template <typename K, typename V>
void SetAllHashTable<K, V>::set_all(const V& v) {
    impl->set_all(v);
}

template <typename K, typename V>
void SetAllHashTable<K, V>::set_all(V&& v) {
    impl->set_all(std::move(v));
}

template class SetAllHashTable<int, int>;

}  // namespace coding_interview_guide::other_problems::set_all_hash_table
