#ifndef LABS_TREE_BINARYTREETESTER_H
#define LABS_TREE_BINARYTREETESTER_H

#include <iostream>
#include <vector>
#include "BinaryTree.h"

class BinaryTreeTester{

public:
    BinaryTreeTester(const bool useConsoleOutput);
    ~BinaryTreeTester() = default;

    void test(const int size);

protected:
    BinaryTree *allocateTree();
    void deallocateTree(BinaryTree *tree);
    void check_addAndCount(const BinaryTree *tree, const int size);
    void check_remove(const BinaryTree *tree, const int size);
    void check_clear(const BinaryTree *tree, const int size);
    //ToDo: check_assign()
    void check_height(const BinaryTree &tree, const int size);

private:
    void addAndCount();
    void destructor();
    void remove();
    void clear(); //ToDo: реализовать
    void assign(); //ToDo: переделать из функции
    void height();
    void height_trivialCases();
    void height_longOnlyLeftSubtree();
    void height_longOnlyRightSubtree();
    void height_longOnlyLeftAndRightSubtrees();
    void height_longRandomZigzagSubtrees();
    std::vector<const BinaryTree::Node *> treeNodes(const BinaryTree *tree);

private:
    int m_maxSize;
    bool m_useConsoleOutput;

};

#endif //LABS_TREE_BINARYTREETESTER_H
