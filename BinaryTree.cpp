//#include "BinaryTree.h"
//#include <algorithm>
//using std::cout;
//using std::string;
//using std::endl;
//
//
////BinaryTree::Node::Node(int key, Node *m_leftChild, Node *m_rightChild) :
////        m_key(key), m_leftChild(m_leftChild), m_rightChild(m_rightChild)
////{}
//
//BinaryTree::Node::Node(int key)
//{
//    m_key = key;
//    m_leftChild = nullptr;
//    m_rightChild = nullptr;
//}
//
//int BinaryTree::Node::key() const
//{
//    return m_key;
//}
//
//int BinaryTree::Node::childrenCount() const
//{
//    return m_childrenCount;
//}
//
//void BinaryTree::Node::setLeftChild(Node *leftChild)
//{
//    m_leftChild = leftChild;
//}
//
//void BinaryTree::Node::setRightChild(Node *rightChild)
//{
//    m_rightChild = rightChild;
//}
//
//BinaryTree::Node * BinaryTree::Node:: leftChild()
//{
//    return m_leftChild;
//}
//
//BinaryTree::Node * BinaryTree::Node:: rightChild()
//{
//    return m_rightChild;
//}
//
//int BinaryTree::Node::getCountChildren()
//{
//    if(m_leftChild != nullptr){
//        m_childrenCount++;
//    }
//    if (m_rightChild != nullptr){
//        m_childrenCount++;
//    }
//    return m_childrenCount;
//}
//
//BinaryTree::Node* BinaryTree::Node::copyNode()
//{
//    Node* newNode = new Node(this->m_key);
//    if (this->leftChild() != nullptr){
//        newNode->m_leftChild = copyNode(this->leftChild());
//    }
//    if (this->rightChild() != nullptr){
//        newNode->m_rightChild = copyNode(this->rightChild());
//    }
//    return newNode;
//}
//
//BinaryTree::Node* BinaryTree::Node::copyNode(Node* node)
//{
//    Node *newNode = new Node(this->m_key);
//    if (node->m_leftChild != nullptr) {
//        newNode->m_leftChild = copyNode(node->m_leftChild);
//    }
//    if (node->m_rightChild != nullptr) {
//        newNode->m_rightChild = copyNode(node->m_rightChild);
//    }
//    return newNode;
//}
//
//BinaryTree::Node *BinaryTree::addNode(Node *root, int key)
//{
//    if (!root) {
//        return nullptr;
//    } else if (!root->leftChild()) {
//        root->setLeftChild(new Node(key));
//        return root->leftChild();
//    } else if (!root->rightChild()) {
//        root->setRightChild(new Node(key));
//        return root->rightChild();
//    } else if (rand() % 2) {
//        return addNode(root->leftChild(), key);
//    } else {
//        return addNode(root->rightChild(), key);
//    }
//}
//
//BinaryTree::BinaryTree()
//{
//    m_root = nullptr;
//}
//
//BinaryTree::BinaryTree(BinaryTree& binaryTree)
//{
//m_root = binaryTree.m_root->copyNode();
//}
//
//BinaryTree::BinaryTree(int key)
//{
//    m_root = new Node(key);
//}
//
//BinaryTree::BinaryTree(Node* root)
//{
//this->m_root = root;
//}
//
//
//void deleteChildren(BinaryTree::Node* node)
//{
//    if (!node->leftChild()){
//        deleteChildren(node->leftChild());
//    }
//    if (!node->rightChild()){
//        deleteChildren(node->rightChild());
//    }
//    delete node;
//}
//
//void deleteRoot(){
//    if (!m_root->leftChild()){
//        deleteChildren(m_root->leftChild());
//    }
//    if (!m_root->rightChild()){
//        deleteChildren(m_root->rightChild());
//    }
//    delete m_root;
//}
//
//BinaryTree::~BinaryTree()
//{
//    deleteRoot();
//}
//
//void BinaryTree::clearTree()
//{
//    delete m_root->leftChild();
//    delete m_root->rightChild();
//}
//
//bool BinaryTree::isEmpty()
//{
//    return m_root==nullptr ? true : false;
//}
//
//BinaryTree* BinaryTree::copyBinayTree(BinaryTree::Node* node)
//{
//    return new BinaryTree(node->copyNode());
//}
//
//
//int BinaryTree::getHeight()
//{
//    return getHeight(m_root);
//}
//
//int BinaryTree::getHeight(BinaryTree::Node* node, int height = 0)
//{
//    if (node == nullptr){
//        return height-1;
//    }
//    if(getHeight(node->leftChild(), height+1) >= getHeight(node->leftChild(), height+1) ){
//        return  getHeight(node->leftChild(),height+1);
//    }
//    else{
//        return getHeight(node->leftChild(), height+1);
//    }
//}
//
//int BinaryTree::getCountNodes(){
//    return getCountNodes(m_root);
//}
//
//BinaryTree::Node* BinaryTree::getRoot(){
//    return m_root;
//}
//
//int getCountNodes(BinaryTree::Node* node, int count = 0){
//    if (node == nullptr){
//        return count-1 > 0 ? count - 1 : 0;
//    }
//    int ans = getCountNodes(node->leftChild(), count+1) + getCountNodes(node->rightChild(), count+1);
//    return ans;
//}
//
//int BinaryTree::findMaxKey() {
//    return maxKey(m_root);
//}
//
//int maxKey(BinaryTree::Node* node) {
//    if (node->rightChild() == nullptr) {
//        return node->key();
//    }
//    return maxKey(node->rightChild());
//}
//
//int findMinKey() {
//    return minKey(m_root);
//}
//
//int minKey(BinaryTree::Node* node) {
//    if (node->leftChild() == nullptr) {
//        return node->key();
//    }
//    return minKey(node->leftChild());
//}
//
//
//
///*
//BinaryTree::Node *BinaryTree::addNode(int key)
//{
//    if (m_root) {
//        return addNode(m_root, key);
//    } else {
//        return m_root = new Node(key);
//    }
//}*/
//
///*
//BinaryTree::Node *BinaryTree::m_root() const
//{
//    return m_root;
//}
//*/
//
///*
//BinaryTree::Node *BinaryTree::addNode(Node *m_root, int key)
//{
//    if (!m_root) {
//        m_root = new Node(key);
//    } else if (rand() % 2) {
//        m_root->setLeftChild(addNode(m_root->m_leftChild(), key));
//    } else {
//        m_root->setRightChild(addNode(m_root->m_rightChild(), key));
//    }
//
//    return m_root;
//}*/
//
///*
//Node* BinaryTree::m_root() const{
//    return m_root;
//}
// */
//
///*
//void BinaryTree::printHorizontal(Node *m_root, int marginLeft, int levelSpacing) const
//{
//    if (m_root == nullptr) {
//        return;
//    }
//    printHorizontal(m_root->m_rightChild(), marginLeft + levelSpacing, levelSpacing);
//    cout << string(marginLeft, ' ') << m_root->key() << endl;
//    printHorizontal(m_root->m_leftChild(), marginLeft + levelSpacing, levelSpacing);
//}*/
//
///*
//BinaryTree::Node *createIdealTree(const int treeSize, int &nodeKey)
//{
//    if (treeSize <= 0) {
//        return nullptr; //Точка остановки рекурсии
//    }
//
//    int leftSubtreeSize = (treeSize - 1) / 2;
//    int rightSubtreeSize = treeSize - 1 - leftSubtreeSize;
//    BinaryTree::Node *m_root = new BinaryTree::Node(nodeKey++);
//    m_root->setLeftChild(createIdealTree(leftSubtreeSize, nodeKey));
//    m_root->setRightChild(createIdealTree(rightSubtreeSize, nodeKey));
//
//    return m_root;
//}*/
//
///*
//void BinaryTree::print(Node *m_root, int leftBorderPos, int rightBorderPos, int yPos) const
//{
//    if (m_root == nullptr) {
//        return;
//    }
//     int xPos = (leftBorderPos + rightBorderPos) / 2;
//    //ToDo: перенос курсор в точку (xPos, yPos)
//    //ToDo: вывод m_root->key()
//    print(m_root->m_leftChild(), leftBorderPos, xPos, yPos + 15);
//    print(m_root->m_rightChild(), xPos, rightBorderPos, yPos + 15);
//}
//*/
//
///*
//ostream& operator<<(ostream& stream, const BinaryTree::Node& node) {
//    stream << node.key();
//    return stream;
//}*/
//
///*
//void BinaryTree::lrnPrint(Node *m_root) const
//{
//    if (m_root == nullptr) {
//        return;
//    }
//
//    lrnPrint(m_root->m_leftChild());
//    lrnPrint(m_root->m_rightChild());
//    cout << m_root->key() << ' ';
//}
// */
///*
//void BinaryTree::bfsPrint(Node *m_root) const
//{
//    //ToDo: выйти, если m_root == nullptr
//    std::list<Node *> unprocessedNodes(1, m_root);
//    while (!unprocessedNodes.empty()) {
//        Node *node = unprocessedNodes.front();
//        std::cout << node->key() << ' ';
//        if (node->m_leftChild()) {
//            unprocessedNodes.push_back(node->m_leftChild());
//        }
//        if (node->m_rightChild()) {
//            unprocessedNodes.push_back(node->m_rightChild());
//        }
//        unprocessedNodes.pop_front();
//    }
//}
//*/
//
