#pragma once
#include "tree_nodes.h"

template <class T>
class Tree {
public:
//    explicit Tree(TreeNode<T> *root) : root(root) {}
//    TreeNode<T>* getRoot();
//    TreeNode<T>* setRoot(TreeNode<T>* newRoot);

private:
    TreeNode<T>* root;
};

//template<class T>
//TreeNode<T> *Tree<T>::setRoot(TreeNode<T> *newRoot) {
//    return this->root = newRoot; //то, на что ссылался указатель раньше - оно не висит в памяти? Не понимаю, когда удалять, когда нет
//}

//template<class T>
//TreeNode<T> *Tree<T>::getRoot() {
//    return this->root;
//}

