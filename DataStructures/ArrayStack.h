#ifndef __ARRAYSTACK__H__
#define __ARRAYSTACK__H__

#include <iostream>
using namespace std;

class ArrayStack{
    public:
        ArrayStack(int s = 16) : MAX_SIZE(s) {
            top = -1;
            myArray = new int[MAX_SIZE];
        }
        ~ArrayStack() {
            makeEmpty();
            delete[] myArray;
        }
        void push(int val){
            if(top >= MAX_SIZE){
                cout << "ArrayStack Max size reach cannot push elements anymore!" << endl;
                return;
            }
            top++;
            myArray[top] = val;
        }

        int pop(){
            if(!isEmpty()){
                return myArray[top--];
            }
            else{
                cout << "Can't Pop from an empty array!" << endl;
                return -1;
            }
        }

        int peek() const{
            if(!isEmpty()){
                return myArray[top];
            }
            else{
                cout << "Array is Empty!!" << endl;
                return 0;
            }
        }

        bool isEmpty() const{
            return top == -1;
        }

        void makeEmpty() {
            top = -1;
        }

        void printStack() const{
            cout << "Cuurent Stack Elements: ";
            for(int i=top; i>-1; i--){
                cout << myArray[i] << (i != 0 ? ", " : "");
            }
            cout << endl;
        }


    private:
        int* myArray;
        const int MAX_SIZE;
        int top;
};

#endif  //!__ARRAYSTACK__H__