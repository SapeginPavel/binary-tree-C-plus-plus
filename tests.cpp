#include "tests.h"

void Test::test() {
    TreeNode<int> rootInt{5};
    Tree treeInt{&rootInt};
    testLeftAddingInt(&treeInt);
    testRightAddingInt(&treeInt);
    testSetValueInt(&treeInt);
}

void Test::testLeftAddingInt(Tree<int>* treeInt) {
    int testValue = 100;
    string testName = "left adding int";
    treeInt->getRoot()->setLeftChild(new TreeNode<int>{testValue});
    if (treeInt->getRoot()->getLeftChild()->getValue() != testValue) {
        printMessage(testName, false);
        exit(-1);
    }
    printMessage(testName, true);
}

void Test::testRightAddingInt(Tree<int>* treeInt) {
    int testValue = 100;
    string testName = "right adding int";
    treeInt->getRoot()->setRightChild(new TreeNode<int>{testValue});
    if (treeInt->getRoot()->getLeftChild()->getValue() != testValue) {
        printMessage(testName, false);
        exit(-1);
    }
    printMessage(testName, true);
}

void Test::testSetValueInt(Tree<int> *treeInt) {
    int prevValue = treeInt->getRoot()->getValue();
    int testValue = prevValue == 100 ? -100 : 100;
    string testName = "set value int";
    treeInt->getRoot()->setValue(testValue);
    if (treeInt->getRoot()->getValue() != testValue) {
        printMessage(testName, false);
        exit(-1);
    }
    printMessage(testName, true);
}

void Test::testLeftAddingString(Tree<string>* treeStr) {

}

void Test::testRightAddingString(Tree<string>* treeStr) {

}

void Test::printMessage(string message, bool isSuccess) {
    if (isSuccess) {
        cout << "Testing of " << message << " is success!" << endl;
    } else {
        cout << "Testing of " << message << " failed!" << endl;
    }
}


