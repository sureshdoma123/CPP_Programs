#include <iostream>
#include "Node.h"
using namespace std;

Node* createLinkedList();
void printLinkedList(Node *const head);

int main()
{
    Node *chain = createLinkedList();

    printLinkedList(chain);

    return 0;
}

Node* createLinkedList(){
    Node* head = nullptr;
    for(int i=1; i<=10; i++){
        head = new Node(i, head);
    }
    return head;
}
void printLinkedList(Node *const head){
    Node* tmp = head;
    int noOfNodes = 0;

    while(tmp != nullptr){
        noOfNodes++;
        cout << tmp->getData() << ", ";
        tmp = tmp->getNext();
    }

    cout << "\nTotal No of Nodes in Linked List: " << noOfNodes << endl;
}