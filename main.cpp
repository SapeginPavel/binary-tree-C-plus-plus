#include <iostream>
#include "tree_nodes.h"
using namespace std;

//todo: работа с очищением памяти ; создать дерево

int main() {
    cout << "Start!" << endl;

    TreeNode<int> root{100};
    TreeNode<int> l1{10};
    TreeNode<int> r1{50};

    root.setLeftChild(&l1);
    root.setRightChild(&r1);


    return 0;
}
