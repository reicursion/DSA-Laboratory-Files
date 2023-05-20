// this program calls the displayList member function
// the function traverses the linked list displaying the value stored in each node
#include <iostream>
#include "FloatList.h"

void main(void){
    FloatList List;

    list.appendNode(2.5);
    list.appendNode(7.9);
    list.appendNode(12.6);
    
    // insert a node in the middle of the list
    list.insertNode(10.5);

    // display the list
    list.displayList();
}