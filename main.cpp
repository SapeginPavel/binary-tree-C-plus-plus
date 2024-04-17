#include <iostream>
#include "tree_nodes.h"
#include "trees.h"
#include "tree_printers.h"
using namespace std;

//todo: работа с очищением памяти ; попробовать ifndef

int main() {
    cout << "Start!" << endl;

    TreeNode<int> root{100};
    TreeNode<int> l1{10};
    TreeNode<int> r1{50};

    root.setLeftChild(&l1);
    root.setRightChild(&r1);

    TreeNode<int> l2{1010};
    TreeNode<int> r2{5050};


    l1.setLeftChild(&l2);
    l1.setRightChild(&r2);

    Tree<int> tree {&root};

    cout << tree.getRoot()->getLeftChild()->getValue() << endl;

    TreePrinter<int>::printTree(&tree);

    return 0;
}
