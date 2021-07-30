#include <deque>
#include <utility>
#include <vector>

#include "03.binary_tree/04.binary_tree_serialization.h"

namespace {
std::vector<std::string> split(const std::string& str) {
    std::vector<std::string> result;
    std::string tmp = "";
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] != '!') {
            tmp += str[i];
        } else {
            result.push_back(std::move(tmp));
        }
    }
    return result;
}
}  // namespace

namespace coding_interview_guide::binary_tree::binary_tree_serialization {

std::string BinaryTreeSerial::pre_order_serial(const Node<int>* root) {
    return root == nullptr ?
               "#!" :
               std::to_string(root->val) + "!" + pre_order_serial(root->left) + pre_order_serial(root->right);
}

namespace {
Node<int>* pre_order_deserial_recurse(std::vector<std::string>& vec) {
    if (vec[0] == "#") {
        vec.erase(vec.begin());
        return nullptr;
    }
    Node<int>* root = new Node<int>(std::stoi(vec[0]));
    vec.erase(vec.begin());
    root->left = pre_order_deserial_recurse(vec);
    root->right = pre_order_deserial_recurse(vec);
    return root;
}
}  // namespace

const Node<int>* BinaryTreeSerial::pre_order_deserial(const std::string& str) {
    auto vec = split(str);
    return pre_order_deserial_recurse(vec);
}

std::string BinaryTreeSerial::level_order_serial(const Node<int>* root) {
    if (root == nullptr) {
        return "#!";
    }
    std::deque<const Node<int>*> queue;
    queue.push_front(root);
    const Node<int>* top = nullptr;
    std::string result = "";
    while (queue.size()) {
        top = queue.front();
        queue.pop_front();
        if (top == nullptr) {
            result.append("#!");
        } else {
            result.append(std::to_string(top->val) + "!");
            queue.push_back(top->left);
            queue.push_back(top->right);
        }
    }
    return result;
}

const Node<int>* BinaryTreeSerial::level_order_deserial(const std::string& str) {
    if (str[0] == '#') {
        return nullptr;
    }
    std::vector<std::string> element = split(str);
    Node<int>* root = new Node<int>(std::stoi(element[0]));
    std::deque<Node<int>*> queue;
    queue.push_back(root);
    element.erase(element.begin());
    Node<int>* top = nullptr;
    while (element.size()) {
        top = queue.front();
        queue.pop_front();
        if (top != nullptr) {
            if (element[0] != "#") {
                top->left = new Node<int>(std::stoi(element[0]));
                queue.push_back(top->left);
            }
            element.erase(element.begin());
            if (element[0] != "#") {
                top->right = new Node<int>(std::stoi(element[0]));
                queue.push_back(top->right);
            }
            element.erase(element.begin());
        }
    }
    return root;
}

}  // namespace coding_interview_guide::binary_tree::binary_tree_serialization
