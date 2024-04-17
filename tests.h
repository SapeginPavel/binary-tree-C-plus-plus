#ifndef TASK_3_1_TESTS_H
#define TASK_3_1_TESTS_H

#include <iostream>
#include "tree_nodes.h"
#include "trees.h"
#include "tree_printers.h"
using namespace std;

class Test {
public:
    static void test();
private:
    static void printMessage(string message, bool isSuccess);
    static void testLeftAddingInt(Tree<int>* treeInt);
    static void testRightAddingInt(Tree<int>* treeInt);
    static void testSetValueInt(Tree<int>* treeInt);
    static void testLeftAddingString(Tree<string>* treeStr);
    static void testRightAddingString(Tree<string>* treeStr);
};


#endif //TASK_3_1_TESTS_H
