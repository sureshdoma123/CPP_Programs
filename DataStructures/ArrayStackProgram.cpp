#include "ArrayStack.h"
#include <iostream>
using namespace std;

int main()
{
    ArrayStack stack;

    cout << "Is Stack empty ? " << boolalpha<< stack.isEmpty() << endl;

    for(int i = 1; i <= 15; i++){
        stack.push(i*i);
    }

    stack.printStack();

    cout << "Pop operation is done: " << stack.pop() << endl;
    cout << "Peek the stack value: " << stack.peek() << endl;

    stack.printStack();

    return 0;
}