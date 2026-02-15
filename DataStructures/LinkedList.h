#include <iostream>
#include "Node.h"
using namespace std;

#ifndef  LINKED_LIST_H
#define  LINKED_LIST_H

class LinkedList{
    public:
        LinkedList() : head(nullptr), numElements(0) { cout << "Default constructor called" << endl; }
        LinkedList(Node* head, int data) : head(nullptr), numElements(0) { cout << "Linked List Constructoir called" << endl; }
        virtual ~LinkedList(){
            makeEmpty();
        }

        void add(int newVal){
            Node* newNode = new Node(newVal, nullptr);
            if(head == nullptr){
                head = newNode;
            }
            else{
                Node *temp = head;
                while(temp->getNext() != nullptr){
                    temp = temp->getNext();
                }
                temp->setNext(newNode);
            }
            this->numElements++;
        }

        void add(int newVal, int position){
            if(position <0 || position > this->numElements){
                cout << "Invalid Position current number of elements in Linked List is: " << this->numElements << endl;
                return;
            }
            Node* newNode = new Node(newVal, nullptr);
            if(position == 0){
                newNode->setNext(this->head);
                this->head = newNode;
            }
            else{
                int count = 0;
                Node *temp = head;
                for(int i=0;i<position-1;i++){
                    temp = temp->getNext();
                }
                newNode->setNext(temp->getNext());
                temp->setNext(newNode);
            }
            this->numElements++;
        }

        void remove(){
            Node* temp = head;
            for(int i=0; i<numElements-2; i++){
                temp = temp->getNext();
            }
            Node *removeNode = temp->getNext();
            temp->setNext(nullptr);
            delete removeNode;
            this->numElements--;
        }

        void remove(int position){
            Node* temp = head;
            if(position < 0 || position > numElements){
                cout << "Invalid Position current number of elements in Linked List is: " << this->numElements << endl;
                return;
            }
            if(position == 0){
                this->head = this->head->getNext();
                delete temp;
            }
            else{
                int count = 0;
                Node *temp = head;
                for(int i=0;i<position-1;i++){
                    temp = temp->getNext();
                }
                Node* remove = temp->getNext();
                Node* afterNode = remove->getNext();
                temp->setNext(afterNode);
                delete remove;
            }
            this->numElements--;
        }

        void makeEmpty(){
            cout << "Removing All the elements in List.." << endl;
            Node* temp;
            while(head!=nullptr){
                temp = head;
                head = head->getNext();
                delete temp;
            }
        }

        bool isEmpty() const{ return numElements == 0;}

        int getLinkedListSize() const { return numElements; }

        void printLinkedList() const{
            Node* temp = head;
            while(temp!=nullptr){
                cout << temp->getData() << (temp->getNext() != nullptr ? " --> " : "");
                temp = temp->getNext();
            }
            cout << endl;
        }

    private:
        Node* head;
        int numElements;
};

#endif  //!__LINKEDLIST__H__
