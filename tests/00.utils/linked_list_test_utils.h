#ifndef _TESTS_LINKED_LIST_LINKDED_LIST_TEST_UTILS_H_
#define _TESTS_LINKED_LIST_LINKDED_LIST_TEST_UTILS_H_

#include <vector>
#include <type_traits>

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::utils {

template <typename T>
struct LinkedListRAII {

    LinkedListRAII() = default;

    ~LinkedListRAII() {
        auto deconstruct_linked_list = [](Node<T>* head) {
            Node<T>* current_head = head;
            Node<T>* delete_head = current_head;
            while(delete_head != nullptr){
                current_head = current_head->next;
                delete delete_head;
                delete_head = current_head;
            }
        };

        for(auto it = head_vector.cbegin(); it != head_vector.cend(); ++it){
            deconstruct_linked_list(*it);
        }
    }

    template <typename TT, std::enable_if_t<std::is_same<std::decay_t<TT>, T>::value, bool> = true, typename... Ts>
    Node<TT>* make_linked_list(TT&& head, Ts&&... values){
        head_vector.push_back(construct_linked_list(std::forward<TT>(head), std::forward<Ts>(values)...));
        return head_vector.back();
    }

private:
    template <typename TT, std::enable_if_t<std::is_same<std::decay_t<TT>, T>::value, bool> = true>
    Node<TT>* construct_linked_list(TT&& head) {
        return new Node(std::forward<TT>(head));
    }

    template <typename TT, std::enable_if_t<std::is_same<std::decay_t<TT>, T>::value, bool> = true, typename... Ts>
    Node<TT>* construct_linked_list(TT&& head, Ts&&... values){
        Node<TT>* node = new Node(std::forward<TT>(head));
        node->next = construct_linked_list(std::forward<Ts>(values)...);
        return node;
    }

    std::vector<Node<T>*> head_vector;
};

}

#endif
