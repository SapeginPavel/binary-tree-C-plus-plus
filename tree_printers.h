#pragma once
#include <iostream>
#include "trees.h"
#include "tree_nodes.h"

using namespace std;

template <typename T>
class TreePrinter {
public:
    static void printTree(Tree<T>* tree) {
        if (tree == nullptr || tree->getRoot() == nullptr) {
            cout << "Tree is empty" << endl;
            return;
        }
        printSubTree(tree->getRoot(), 0); // Начинаем с корня на уровне 0
    }

private:
    static void printSubTree(TreeNode<T>* node, int level) {
        if (node == nullptr) {
            return;
        }

        // Рекурсивно обходим левое поддерево
        printSubTree(node->getLeftChild(), level + 1);

        // Выводим узел текущего уровня с отступами в зависимости от его уровня
        for (int i = 0; i < level; ++i) {
            cout << "   "; // Отступ в виде трех пробелов
        }
        cout << "|--" << node->getValue() << endl;

        // Рекурсивно обходим правое поддерево
        printSubTree(node->getRightChild(), level + 1);
    }
};