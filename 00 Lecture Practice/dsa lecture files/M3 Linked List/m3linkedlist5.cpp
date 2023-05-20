// this program demonstrates the linked list templat
#include <iostream>
#include

void main(void){
    LinkedList<int> list;

    // build the list
    list.appendNode(2);
    list.appendNode(4);
    list.appendNode(6);

    cout << "Here are the initial values:\n";
    list.displayList();
    cout << endl;

    cout << "Now inserting the value 5.\n";
    list.insertNode(5);
    cout << "Here are the nodes now.\n";
    list.displayList();
    cout << endl;

    cout << "Now deleting the last node.\n";
    list.deleteNode(6);
    cout << "here are the nodes left.\n";
    list.displayList();
}
