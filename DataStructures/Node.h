#ifndef NODE_H
#define NODE_H

class Node{
    public:
        Node(int data, Node* next) : data(data), next(next) {};
        void setdata(int val) { this->data = val; }
        void setNext(Node *next) { this->next = next; }
        int getData() const { return this->data; }
        Node *getNext() const { return this->next; }
    private:
        int data;
        Node* next;
};
#endif  //!NODE_H