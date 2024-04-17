#pragma once
#include <iostream>

using namespace std;

template <typename T>
class TreeNode {
public:
    explicit TreeNode(T value) : value{value} {
        this->leftChild = nullptr;
        this->rightChild = nullptr;
    }

    ~TreeNode() {
        cout << "deletam" << endl;
        if (leftChild != nullptr) {
            delete leftChild;
        }
        if (rightChild != nullptr) {
            delete rightChild;
        }
    }
public:
    void setLeftChild(TreeNode *node);
    void setRightChild(TreeNode *node);
    TreeNode<T>* getLeftChild();
    TreeNode<T>* getRightChild();
    T getValue() const;
    void deleteNode();
private:
    TreeNode<T>* leftChild;
    TreeNode<T>* rightChild;
    T value;
};

template<typename T>
void TreeNode<T>::deleteNode() {
//    this->~TreeNode();
    delete this;
}

template<typename T>
T TreeNode<T>::getValue() const {
    return this->value;
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