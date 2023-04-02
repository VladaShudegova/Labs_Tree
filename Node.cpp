#include "Node.h"

Node::Node(int key, Node *leftChild, Node *rightChild)
{
    m_key = key;
    m_leftChild = leftChild;
    m_rightChild = rightChild;

}

int Node::key() const
{
    return m_key;
}

int Node::childrenCount() const
{
    return m_childrenCount;
}

void Node::setKey(const int key) {
    m_key = key;
}

void Node::setLeftChild(Node *leftChild) {
    m_leftChild = leftChild;
}

void Node::setRightChild(Node *rightChild) {
    m_rightChild = rightChild;
}

int Node::getKey() const{
    return m_key;
}

Node* Node::getLeftChild() {
    return m_leftChild;
}

Node* Node::getRightChild() {
    return m_rightChild;
}