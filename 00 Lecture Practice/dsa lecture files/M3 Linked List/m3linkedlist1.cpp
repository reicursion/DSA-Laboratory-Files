#include <iostream>

// floatlist.h

class FloatList {
    private:
    // Declare a structure for the list
    struct ListNode {
        float value;
        struct ListNode *next;
    };

    ListNode *head;     // list head pointer
    public:
        FloatList() {   // constructor
            head = NULL; // head is initialized to NULL, by default, it points to NOTHING
        ~FloatList(); // destructor
        void appendNode(float num); // append a node to the end of the list
        void insertNode(float num); // insert a node in the middle of the list
        void deleteNode(float num); // delete a node from the list
        void displayList(); // display the list
};
/*
Create a new node
Store data in the new node
If there are no nodes in the list
    Make the new node the first node
Else
    Traverse the list to find the las node
    Add the new node to the end of the list
End if
*/

void FloatList::appendNode(float num){
    ListNode *newNode, *nodePtr;

    // Allocate a new node and store num
    newNode = new ListNode;
    newNode -> value = num;
    newNode -> next = NULL;

    // if there are no nodes in the list, make newNode the first node
    if (!head)
        head = newNode;
    else { // otherwise, insert newNode at end
        // initialize nodePtr to head of list
        nodePtr = head;
        // find the last node in the list
        while (nodePtr -> next)
            nodePtr = nodePtr -> next;
        // insert newNode as the last node
        nodePtr -> next = newNode;
} cout << "Input has been APPENDED!" << endl;

// this program demonstrates a simple append operation on a linked list
#include <iostream.h>
#include "FloatList.h"

void main(void){
    FloatList List;

    list.appendNode(2.5);
    list.appendNode(7.9);
    list.appendNode(12.6)
}

else // other wise, insert newNode at ed

/*
Assign List head to node pointer
While node pointer is not NULL
    Display the value member of the code pointed to by node pointer
End While
*/

void FLoatList::displayList(void){
    LisNode *nodePtr;
    if (head == NULL)
        cout << "The List is empty!" <<
    else {
        nodePtr = head;
        while (nodePtr){
            cout << nodePtr -> value << endl;
            nodePtr = nodePtr -> next;
        }
    }
}
