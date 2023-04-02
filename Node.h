#ifndef LABS_TREE_NODE_H
#define LABS_TREE_NODE_H


class Node
{
public:
    Node(int key = 0, Node *leftChild = nullptr, Node *rightChild = nullptr);
    ~Node() = default; //Удалением потомков занимается НЕ узел
    int key() const;
    void setKey(const int key);
    //ToDo: геттеры и сеттеры потоков (по аналогии с ключом)
private:
    int m_key = 0;
    Node *m_leftChild = nullptr;
    Node *m_rightChild = nullptr;
};


#endif //LABS_TREE_NODE_H
