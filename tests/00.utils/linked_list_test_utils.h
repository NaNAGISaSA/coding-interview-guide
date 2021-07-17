#ifndef _TESTS_LINKED_LIST_LINKDED_LIST_TEST_UTILS_H_
#define _TESTS_LINKED_LIST_LINKDED_LIST_TEST_UTILS_H_

#include <type_traits>
#include <vector>

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list {

template <typename T>
struct LinkedListRAII {
    LinkedListRAII() = default;

    ~LinkedListRAII() {
        for (auto it = head_vector.cbegin(); it != head_vector.cend(); ++it) {
            deconstruct_linked_list(*it);
        }
        for (auto it = head_vector2.cbegin(); it != head_vector2.cend(); ++it) {
            deconstruct_linked_list(*it);
        }
    }

    template <typename TT, std::enable_if_t<std::is_same<std::decay_t<TT>, T>::value, bool> = true, typename... Ts>
    Node<TT>* make_linked_list(TT&& head_val, Ts&&... values) {
        head_vector.push_back(construct_linked_list(std::forward<TT>(head_val), std::forward<Ts>(values)...));
        return head_vector.back();
    }

    template <typename TT, std::enable_if_t<std::is_same<std::decay_t<TT>, T>::value, bool> = true, typename... Ts>
    DoubleNode<TT>* make_double_linked_list(TT&& head_val, Ts&&... values) {
        head_vector2.push_back(construct_double_linked_list(std::forward<TT>(head_val), std::forward<Ts>(values)...));
        return head_vector2.back();
    }

private:
    template <typename TT, std::enable_if_t<std::is_same<std::decay_t<TT>, T>::value, bool> = true>
    DoubleNode<TT>* construct_double_linked_list(TT&& head_val) {
        return new DoubleNode(std::forward<TT>(head_val));
    }

    template <typename TT, std::enable_if_t<std::is_same<std::decay_t<TT>, T>::value, bool> = true, typename... Ts>
    DoubleNode<TT>* construct_double_linked_list(TT&& head_val, Ts&&... values) {
        DoubleNode<TT>* node = new DoubleNode(std::forward<TT>(head_val));
        node->next = construct_double_linked_list(std::forward<Ts>(values)...);
        node->next->prev = node;
        return node;
    }

    template <typename TT, std::enable_if_t<std::is_same<std::decay_t<TT>, T>::value, bool> = true>
    Node<TT>* construct_linked_list(TT&& head_val) {
        return new Node(std::forward<TT>(head_val));
    }

    template <typename TT, std::enable_if_t<std::is_same<std::decay_t<TT>, T>::value, bool> = true, typename... Ts>
    Node<TT>* construct_linked_list(TT&& head_val, Ts&&... values) {
        Node<TT>* node = new Node(std::forward<TT>(head_val));
        node->next = construct_linked_list(std::forward<Ts>(values)...);
        return node;
    }

    template <typename N>
    void deconstruct_linked_list(N* head) {
        N* current_head = head;
        N* delete_head = current_head;
        while (delete_head != nullptr) {
            current_head = current_head->next;
            delete delete_head;
            delete_head = current_head;
        }
    }

    std::vector<Node<T>*> head_vector;
    std::vector<DoubleNode<T>*> head_vector2;
};

}  // namespace coding_interview_guide::linked_list

#endif
