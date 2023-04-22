#include "BinaryTreeTester.h"

//
//#include <random>
//#include <vector>
//using std::vector;
//
//class BinaryTree
//{
//public:
//    class Node
//    {
//    public:
//        Node(int m_key = 0, Node *leftChild = nullptr, Node *rightChild = nullptr);
//        ~Node() = default; //Удалением потомков занимается НЕ узел
//        int m_key() const;
//        void setKey(const int m_key);
//        //ToDo: геттеры и сеттеры потомков (по аналогии с ключом)
//    private:
//        int m_key = 0;
//        Node *m_leftChild = nullptr;
//        Node *m_rightChild = nullptr;
//    };
//
//    BinaryTree() = default;
//    virtual ~BinaryTree();
//    const Node *root() const;
//    Node *root();
//    virtual Node* addNode(Node *root, int m_key);
//    void print() const;
//
//protected:
//    Node *m_root = nullptr;
//};
//
//class SearchTree : public BinaryTree
//{
//public:
//    ~SearchTree() override = default;
//    using BinaryTree::Node;
//    Node *addNode(Node *root, int m_key) override;
//};
//
//BinaryTree::Node *SearchTree::addNode(Node *root, int m_key)
//{
//    if (!root) {
//        root = new Node(m_key);
//    } else if (m_key < root->m_key()) {
//        root->setLeftChild(addNode(root->leftChild(), m_key));
//    } else {
//        root->setRightChild(addNode(root->rightChild(), m_key));
//    }
//
//    return root;
//}
//
//BinaryTree::Node *BinaryTree::addNode(int m_key)
//{
//    m_root = addNode(m_root, m_key);
//    return m_root;
//}
//
//BinaryTree::Node *BinaryTree::addNode(Node *root, int m_key)
//{
//    if (!root) {
//        root = new Node(m_key);
//    } else if (rand() % 2) {
//        root->setLeftChild(addNode(root->leftChild(), m_key));
//    } else {
//        root->setRightChild(addNode(root->rightChild(), m_key));
//    }
//
//    return root;
//}
//
//
////ToDo: переместить класс-тестировщик в отдельный .h
//
//class BinaryTreeTester
//{
//public:
//    BinaryTreeTester() = default;
//    ~BinaryTreeTester() = default;
//
//    void test(const int size);
//
//protected:
//    BinaryTree *allocateTree();
//    deallocateTree(BinaryTree *tree);
//    check_addAndCount(const BinaryTree &tree, const int size);
//    check_remove(const BinaryTree &tree, const int size);
//    //ToDo: check_clear()
//    //ToDo: check_assign()
//    check_height(const BinaryTree &tree, const int size);
//
//private:
//    void addAndCount();
//    void destructor();
//    void remove();
//    void clear(); //ToDo: реализовать
//    void assign(); //ToDo: переделать из функции
//    void height();
//    void height_trivialCases();
//    void height_longOnlyLeftSubtree();
//    void height_longOnlyRightSubtree();
//    void height_longOnlyLeftAndRightSubtrees();
//    void height_longRandomZigzagSubtrees();
//
//private:
//    int m_maxSize;
//};
//
////ToDo: переместить реализации методов в отдельный .cpp
//
//void BinaryTreeTester::test(const int size)
//{
//    m_maxSize = size;
//    addAndCount();
//    destructor();
//    remove();
//    clear();
//    assign();
//    height();
//}
//
//BinaryTree *BinaryTreeTester::allocateTree()
//{
//    return new BinaryTree;
//}
//
//BinaryTreeTester::deallocateTree(BinaryTree *tree)
//{
//delete tree;
//}
//
//void BinaryTreeTester::addAndCount()
//{
//    BinaryTree *tree = allocateTree();
//    check_addAndCount(*tree, 0);
//
//    for (int i = 0 ; i < m_maxSize; ++i) {
//        tree->addNode(i);
//        check_addAndCount(*tree, i + 1);
//    }
//
//    deallocateTree(tree);
//}
//
//void BinaryTreeTester::check_addAndCount(const BinaryTree &tree, const int size)
//{
//    assert(tree.size() == size);
//}
//
//void BinaryTreeTester::destructor()
//{
//    //ToDo: цикл + wait
//    {
//        BinaryTree tree;
//        for (int i = 0 ; i < m_maxSize; ++i) {
//            tree.addNode(i);
//        }
//    }
//}
//
//void BinaryTreeTester::remove()
//{
//    int invalidKey = -1;
//    std::vector<int> nodeKeys;
//
//    BinaryTree tree;
//    tree.removeNode(invalidKey);
//
//    for (int i = 0 ; i < m_maxSize; ++i) {
//        nodeKeys.push_back(i);
//        tree.addNode(i);
//    }
//
//    while (!nodeKeys.empty()) {
//        int removedNodeIndex = rand() % nodeKeys.size(); //3
//
//        tree.removeNode(invalidKey);
//        check_remove(tree, nodeKeys.size());
//
//        tree.removeNode(nodeKeys[removedNodeIndex]);
//        nodeKeys.erase(nodeKeys.begin() + removedNodeIndex);
//        check_remove(tree, nodeKeys.size());
//
//        //ToDo: вывести дерево для визуальной проверки удаления и вывода
//    }
//
//    //ToDo: вывести дерево для визуальной проверки удаления и вывода
//    tree.removeNode(invalidKey);
//    check_remove(tree, nodeKeys.size());
//}
//
//void BinaryTreeTester::check_remove(const BinaryTree &tree, const int size)
//{
//    assert(tree.size() == size);
//}
//
////ToDo: переделать остальные функции в методы класса и вынести проверки
//
//void BinaryTreeTester::height()
//{
//    height_trivialCases();
//    height_longOnlyLeftSubtree();
//    height_longOnlyRightSubtree();
//    height_longOnlyLeftAndRightSubtrees();
//    height_longRandomZigzagSubtrees();
//}
//
//void BinaryTreeTester::check_height(const BinaryTree &tree, const int height)
//{
//    assert(tree.height() == height);
//}
//
//void BinaryTreeTester::height_trivialCases()
//{
//    BinaryTree tree;
//    check_height(tree, 0);
//    tree.addNode(0);
//    check_height(tree, 1);
//}
//
//void BinaryTreeTester::height_longOnlyLeftSubtree()
//{
//    BinaryTree longTree;
//    longTree.addNode(0);
//    Node *runner = longTree.m_root();
//    for (int i = 1; i < m_maxSize; ++i) {
//        runner->setLeftChild(new BinaryTree::Node(i));
//        runner = runner->leftChild();
//        check_height(longTree, i + 1);
//    }
//}
//
//void BinaryTreeTester::height_longOnlyRightSubtree()
//{
//    BinaryTree longTree;
//    longTree.addNode(0);
//    Node *runner = longTree.m_root();
//    for (int i = 1; i < m_maxSize; ++i) {
//        runner->setRightChild(new BinaryTree::Node(i));
//        runner = runner->rightChild();
//        check_height(longTree, i + 1);
//    }
//}
//
//void BinaryTreeTester::height_longOnlyLeftAndRightSubtrees()
//{
//    BinaryTree longTree;
//    longTree.addNode(0);
//    Node *leftRunner = longTree.m_root();
//    Node *rightRunner = longTree.m_root();
//    for (int i = 1; i < m_maxSize/2; ++i) {
//        leftRunner->setLeftChild(new BinaryTree::Node(i));
//        leftRunner = leftRunner->leftChild();
//        check_height(longTree, i + 1);
//
//
//        rightRunner->setRightChild(new BinaryTree::Node(i));
//        rightRunner = rightRunner->rightChild();
//        check_height(longTree, i + 1);
//    }
//}
//
//void BinaryTreeTester::height_longRandomZigzagSubtrees()
//{
//    BinaryTree longTree;
//    longTree.addNode(0);
//    Node *leftRunner = longTree.m_root();
//    Node *rightRunner = longTree.m_root();
//
//    leftRunner->setLeftChild(new BinaryTree::Node(1));
//    leftRunner = leftRunner->leftChild();
//    rightRunner->setRightChild(new BinaryTree::Node(1));
//    rightRunner = rightRunner->rightChild();
//
//    for (int i = 2; i < m_maxSize/2; ++i) {
//        if (rand() % 2 == 0)
//        {
//            leftRunner->setLeftChild(new BinaryTree::Node(i));
//            leftRunner = leftRunner->leftChild();
//        }
//        else
//        {
//            leftRunner->setRightChild(new BinaryTree::Node(i));
//            leftRunner = leftRunner->rightChild();
//        }
//        check_height(longTree, i + 1);
//
//        if (rand() % 2 == 0)
//        {
//            rightRunner->setLeftChild(new BinaryTree::Node(i));
//            rightRunner = rightRunner->leftChild();
//        }
//        else
//        {
//            rightRunner->setRightChild(new BinaryTree::Node(i));
//            rightRunner = rightRunner->rightChild();
//        }
//        check_height(longTree, i + 1);
//    }
//}
//
////FixMe: удалить после переделки всех функций в методы тестирующего класса
//namespace BinaryTreeTests
//{
//    void assign(const int size)
//    {
//        BinaryTree tree1;
//
//        for (int i = 0 ; i < size; ++i) {
//            tree1.addNode(i);
//        }
//
//        BinaryTree tree2 = tree1; //Конструктор копирования
//
//        //ToDo: реализовать какой-либо из обходов
//        std::vector<BinaryTree::Node> tree1Nodes = tree1.nodes();
//        std::vector<BinaryTree::Node> tree2Nodes = tree2.nodes();
//
//        //FixMe: доделать проверку
//
//        tree1 = tree2; //Присваивание
//
//        tree1Nodes = tree1.nodes();
//        tree2Nodes = tree2.nodes();
//
//        //FixMe: доделать проверку
//    }
//    destructor(size);
//    addAndCount(size);
//    remove(size);
//    clear(size);
//    assign(size);
//    height(size);
//}
//}
//
//
//bool isSearchTree(const Node *root)
//{
//    if (root == nullptr) {
//        return true;
//    }
//
//    const Node *m_left = root->m_left();
//    if (m_left != nullptr) {
//        if (m_left->m_key() >= root->m_key() || !isSearchTree(m_left)) {
//            return false;
//        }
//    }
//
///*
//    // Альтернативный вариант
//    if (!isSearchTree(m_left)) {
//        return false;
//    } else if (m_left != nullptr && m_left->m_key() >= m_root->m_key()) {
//        return false;
//    }
//*/
//
//    const Node *m_right = root->m_right();
//    if (m_right != nullptr) {
//        if (m_right->m_key() <= root->m_key() || !isSearchTree(m_right)) {
//            return false;
//        }
//    }
//
//    return true;
//}
//
//void getKeysLnr(vector<int>& keys, Node* node)
//{
//    if (!node)
//    {
//        return;
//    }
//
//    getKeysLnr(keys, node->m_left());
//    keys.push_back(node->m_key());
//    getKeysLnr(keys, node->m_right());
//}
//
//bool isSearchTree(const BinaryTree &tree)
//{
//    std::vector<int> keys;
//
//    getKeysLnr(keys, tree.m_root());
//
//    for (int i = 1; i < keys.size(); i++)
//    {
//        if (keys[i] <= keys[i-1])
//        {
//            return false;
//        }
//    }
//
//    return true;
//}
//
//void refillAndPrint(BinaryTree &tree)
//{
//    tree.clear();
//    int count = 5;
//    int stepSize = 10;
//    int min = 0;
//    int max = min + stepSize * count;
//    for (int m_key = min; m_key <= max; m_key += stepSize) {
//        tree.addNode(tree.m_root(), m_key);
//    }
//    tree.print();
//}
//
//
