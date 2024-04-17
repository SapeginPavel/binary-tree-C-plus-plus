#pragma once
#include <iostream>

using namespace std;

template <typename T>
class TreeNode {
public:
    explicit TreeNode(T value) : value{value} { //, leftChild{nullptr}, rightChild{nullptr}
        this->leftChild = nullptr;
        this->rightChild = nullptr;
    }

public:
    void setLeftChild(TreeNode *node);
    void setRightChild(TreeNode *node);
    TreeNode<T>* getLeftChild();
    TreeNode<T>* getRightChild();
    T getValue() const;
    void setValue(T newValue);
private:
    TreeNode<T>* leftChild;
    TreeNode<T>* rightChild;
    T value;
};

template<typename T>
void TreeNode<T>::setValue(T newValue) {
    this->value = newValue;
}

template<typename T>
T TreeNode<T>::getValue() const {
    return this->value;
//    return 3; // для теста
}

template<typename T>
TreeNode<T>* TreeNode<T>::getRightChild() {
    return this->rightChild;
}

template<typename T>
TreeNode<T>* TreeNode<T>::getLeftChild() {
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