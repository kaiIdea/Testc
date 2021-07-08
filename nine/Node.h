

#ifndef TESTC_NODE_H
#define TESTC_NODE_H

template<class T>
class Node {


private:
    //指向后继节点的指针
    Node<T> *node;


public:
    //节点的数据域
    T data;
    //构造函数
    Node(const T data,Node<T> *node = 0);


    Node *deleteAfter();
    Node *getNexNode();
    const Node<T> *nextNode() const;

};


#endif //TESTC_NODE_H
