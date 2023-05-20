// this program demonstratees the deleteNode member function
#include <iostream>
#include "FloatList.h"

void main(){
    FloatList list;

    // build the list
    list.appendNode(2.5);
    list.appendNoe(7.9);
    list.appendNode(12.6);

    cout << "Here are the initial values: \n";
    list.displayList();
    cout << endl;

    cout << "Now deleting the node in the middle.\n";
    cout << "Here are the nodes left.\n";
    list.deleteNode(7.9);
    list.displayList();
    cout << endl;

    cout << "Now deleting the last node.\n";
    cout << "here are the nodes left.\n";
    list.deleteNode(12.6);
    list.displayList();
    cout << endl;

    cout << "Now deleting the only remaining node.\n";
    cout << "Here are the nodes left.\n";
    list.deleteNode(2.5);
    list.displayList();
}