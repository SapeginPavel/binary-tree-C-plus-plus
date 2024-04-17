#pragma once
#include <iostream>

template <typename T>
class TreeNode {
public:
    explicit TreeNode(T value) : value{value} {}
public:
    void setLeftChild(TreeNode *node);
    void setRightChild(TreeNode *node);
    TreeNode<T> getLeftChild();
    TreeNode<T> getRightChild();
private:
    TreeNode<T>* leftChild;
    TreeNode<T>* rightChild;
    T value;
};

template<typename T>
TreeNode<T> TreeNode<T>::getRightChild() {
    return this->rightChild;
}

template<typename T>
TreeNode<T> TreeNode<T>::getLeftChild() {
    return this->leftChild;
}

template<typename T>
void TreeNode<T>::setLeftChild(TreeNode *node) {
    this->leftChild = node;
}

template<typename T>
void TreeNode<T>::setRightChild(TreeNode *node) {
    this->rightChild = node;
}