//#ifndef LABS_TREE_BINARYTREE_H
//#define LABS_TREE_BINARYTREE_H
//
//#include <iostream>
//#include <cmath>
//#include <climits>
//#include <vector>
//
//
//using std::ostream;
///*
// * Необходимые методы класса Node:
//+ конструкторы (по умолчанию и с параметрами);
//+ получение ключа узла (целое число);
//+ получение количества прямых потомков узла;
//
//+ конструкторы (по умолчанию, копирования);
//- деструктор;
//- получение корня дерева;
//- очистка дерева (удаление всех узлов);
//- удаление поддеревьев узла;
//- isEmpty (возвращает true, если дерево пусто);
//- копирование поддерева узла (возвращает новый объект класса);
//- получение высоты дерева;
//- получение количества узлов дерева;
//- получение минимального/максимального ключа дерева;
//- добавление узла в дерево (методом случайного выбора поддерева);
//- удаление узла из дерева по ключу (возвращает true, если узел был удалён);
//- проверка дерева на сбалансированность (возвращает true, если дерево является сбалансированным: высоты правого и левого поддеревьев отличаются не более, чем на единицу, и сами поддеревья также являются сбалансированными);
//- получение суммы всех ключей дерева;
//- получение уровня вершины по ключу (возвращает индекс уровня или -1, если вершина не найдена);
//- получение вектора (std::vector<int>), содержащего все ключи дерева (обход вершин производить любым способом; на оценку "отлично" - обход реализовать с помощью итератора);
//- вывод в консоль дерева в горизонтальном виде (самый правый потомок находится на первой строке, самый левый - на нижней);
//- вывод в консоль уровня дерева ("пустые" узлы так же вывести, т.о., общее число узлов уровня всегда постоянно: 2^(индекс уровня));
//- вывод в консоль дерева по уровням (через последовательные вызовы предыдущего метода);
//- вывод в консоль листьев дерева;
//- оператор присваивания.
//Данные методы должны работать как для всего дерева, так и для любого из его поддеревьев (например, если в метод получения размера дерева передать не корень, а один из дочерних узлов, будет получено количество узлов для поддерева с корнем в этом узле).
// */
//
//class BinaryTree {
//
//
//public:
//        class Node
//        {
//        private:
//            int m_key = 0;
//            int m_childrenCount = 0;
//            Node *m_leftChild = nullptr;
//            Node *m_rightChild = nullptr;
//
//        public:
//
//            Node(int key);
//            Node(int key = 0, Node *leftChild = nullptr, Node *rightChild = nullptr);
//            ~Node() = default; //Удалением потомков занимается НЕ узел
//            Node* copyNode();
//            Node* copyNode(Node* node);
//
//            int key() const;
//            int childrenCount() const;
//
//            void setKey(const int key);
//            void setLeftChild(Node* leftChild);
//            void setRightChild(Node* rightChild);
//
//            int getKey() const;
//            Node* leftChild();
//            Node* rightChild();
//
//            int getCountChildren();
//
//
//
//            Node* addNode(Node *root, int key);
//
//        };
//
//    BinaryTree();
//    BinaryTree(Node* root);
//    ~BinaryTree();
//    BinaryTree* copyBinayTree(Node* node);
//    //ostream& operator<<(ostream& stream, const BinaryTree::Node& node);
//    Node *addNode(Node *root, int key);
////    Node *m_root() const;
////    Node *m_root();
//    Node* getRoot();
//
////    void print() const;
////    Node * addNode(int key);
////    void print(Node *m_root, int leftBorderPos, int rightBorderPos, int yPos) const;
////    void printHorizontal(Node *m_root, int marginLeft, int levelSpacing) const;
////    void lrnPrint(Node *m_root) const;
//
//    BinaryTree(BinaryTree& binaryTree);
//    BinaryTree(int key);
//
//    void clearTree();
//    bool isEmpty();
//
//
//    int getHeight();
//    int getHeight(Node* node, int height = 0);
//    int getCountNodes();
//    int getCountNodes(Node* node, int count = 0);
//
//    int findMaxKey();
//    int maxKey(Node* node);
//
//    int findMinKey();
//    int minKey(Node* node);
//    //void BinaryTree::bfsPrint(Node *m_root) const;
//private:
//    Node *m_root = nullptr;
//
//};
//
//
//#endif //LABS_TREE_BINARYTREE_H
