#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_BINARY_TREE_SERIALIZATION_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_BINARY_TREE_SERIALIZATION_H_

/*
【题目】
二叉树被记录为文件的过程叫作二叉树的序列化，通过文件内容重建原来二叉树的过程叫作二叉树的反序列化。
给定一颗二叉树，请将该二叉树先序序列化和层序序列化。
假设序列化的结果字符串为 str，初始时 str = ""，遍历二叉树时，遇到 null 节点，则在 str 的末尾加上
"#!"，否则加上"当前的节点值!"。
*/

#include <string>

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::binary_tree_serialization {

class BinaryTreeSerial {
public:
    static std::string pre_order_serial(const Node<int>* root);
    static const Node<int>* pre_order_deserial(const std::string& str);
    static std::string level_order_serial(const Node<int>* root);
    static const Node<int>* level_order_deserial(const std::string& str);
};

}  // namespace coding_interview_guide::binary_tree::binary_tree_serialization

#endif