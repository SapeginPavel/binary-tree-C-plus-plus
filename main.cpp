#include <iostream>
#include "tree_nodes.h"
#include "trees.h"
#include "tree_printers.h"
#include "tests.h"
using namespace std;

//todo: балл макс.
//todo: работа с очищением памяти ; попробовать ifndef

//todo: как и что нужно удалять? Если нет ответа, самому смотреть

int main() {
    Test::test();


    cout << endl << endl;


    cout << "Integer tree:" << endl;
    TreeNode<int> intRoot{5};
    Tree integerTree{&intRoot};

    intRoot.setLeftChild(new TreeNode<int>{4});
    intRoot.getLeftChild()->setLeftChild(new TreeNode<int>{44});
    intRoot.getLeftChild()->setRightChild(new TreeNode<int>{46});
    intRoot.setRightChild(new TreeNode<int>{6});
    TreePrinter<int>::printTree(&integerTree);


    cout << endl << endl;


    cout << "String tree:" << endl;
    TreeNode<string> stringRoot{"root"};
    Tree stringTree{&stringRoot};

    stringTree.getRoot()->setLeftChild(new TreeNode<string>{"l"});
    stringTree.getRoot()->getLeftChild()->setLeftChild(new TreeNode<string>{"ll"});
    stringTree.getRoot()->getLeftChild()->setRightChild(new TreeNode<string>{"lr"});
    stringTree.getRoot()->setRightChild(new TreeNode<string>{"r"});
    TreePrinter<string>::printTree(&stringTree);

    return 0;
}
