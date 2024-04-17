#ifndef TASK_3_1_TREE_NODES_H
#define TASK_3_1_TREE_NODES_H
#endif //TASK_3_1_TREE_NODES_H

#pragma once
#include <iostream>

template <typename T>
class TreeNode {
public:
    explicit TreeNode(T value) : value{value} {}
public:
    void setLeftChild(const TreeNode& node);
private:
    TreeNode* leftChild;
    TreeNode* rightChild;
    T value;
};