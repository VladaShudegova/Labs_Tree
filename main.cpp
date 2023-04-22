#include <iostream>
#include <vector>
#include <cassert>

#include "BinaryTree.h"
#include "BinaryTreeTester.h"
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::max;
using std::min;
using std::string;


BinaryTree::Node* ten_child_tree() {
    BinaryTree::Node* one = new BinaryTree::Node(1);
    BinaryTree::Node* two = new BinaryTree::Node(2);
    BinaryTree::Node* three = new BinaryTree::Node(3);
    BinaryTree::Node* four = new BinaryTree::Node(4);
    BinaryTree::Node* five = new BinaryTree::Node(5);
    BinaryTree::Node* six = new BinaryTree::Node(6);
    BinaryTree::Node* seven = new BinaryTree::Node(7);
    BinaryTree::Node* eight = new BinaryTree::Node(8);
    BinaryTree::Node* nine = new BinaryTree::Node(9);
    BinaryTree::Node* ten = new BinaryTree::Node(10);

    one->setLeft(two);
    one->setRight(three);
    two->setLeft(four);
    two->setRight(five);
    five->setRight(seven);
    three->setRight(six);
    six->setRight(eight);
    eight->setLeft(nine);
    eight->setRight(ten);

    return one;
}


void printLeaves(BinaryTree::Node* node) {
    if (node == nullptr) {
        return;
    }
    if (node->getLeft() == nullptr && node->getRight() == nullptr) {

        cout << node->getKey() << " ";
    }
    else {
        printLeaves(node->getLeft());
        printLeaves(node->getRight());
    }
}

int main()
{
    BinaryTree binaryTree;
//    refillAndPrint(binaryTree);
//    SearchTree searchTree;
//    searchTree.addNode(searchTree.m_root(), 0);
//    refillAndPrint(searchTree);
//    BinaryTree &binaryTreeRef = searchTree;
//    binaryTreeRef.addNode(binaryTreeRef.m_root(), 0);
//
//    BinaryTree *ptr = new SearchTree();
//    delete ptr;
//
//    //Пример использования класса-тестировщика
    BinaryTreeTester tester;
    for (int size = 10; size < 200; size += 10) {
        tester.test(size);
    }

    BinaryTree b(ten_child_tree());


    return 0;
}
