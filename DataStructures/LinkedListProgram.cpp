#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList list1;

    cout << "Is linked list empty ? " << boolalpha << list1.isEmpty() << endl;
    cout << "Linekd List Size is: " << list1.getLinkedListSize() << endl;

    for(int i = 1; i <= 10; i++){
        list1.add(i);
    }
    cout << "After adding elements to list: " << endl;
    list1.printLinkedList();

    list1.add(12, 2);
    cout << "After adding element at position to list: " << endl;
    list1.printLinkedList();

    list1.remove();
    cout << "After removing last element from list: " << endl;
    list1.printLinkedList();

    list1.remove(2);
    cout << "After removing element from list at position: " << endl;
    list1.printLinkedList();
    
    // delete list1;
    return 0;
}