#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <class T>
class LinkedList {
    private:
        // declare a structure for the list
        struct ListNode {
            T value;
            struct ListNode *next;
        };
    
        ListNode *head; // list head pointer
    
    public:
        LinkedList(void) { // constructor
            head = NULL;
        }
        ~LinkedList(void); // destructor
        void appendNode(T);
        void insertNode(T);
        void deleteNode(T);
        void displayList(void);
};

// appendNode appends a node containing the value passed in to num, to the end of the list
template <class T>
void LinkedList<T>::AppendNode(T num){
    ListNode *newNode, *nodePtr;

    // allocate a new node & store num
    newNode = new ListNode;
    newNode -> value = num;
    newNode -> next = NULL;

    // if there are no nodes in the list, make newNode the first node
    if (!head) {
        head = newNode;
    } else {//otherwise, insert newNode at end
        // initialize nodePtr to head of list
        nodePtr = head;
        // find the last node in the list
        while (nodePtr -> next)
            nodePtr = nodePtr -> next;
        // insert newNode as the last node
        nodePtr -> next = newNode;
    }
}

// displayLIst shows the value stored in each node of the linked list pointed to by head

template <class T>
void LinkedList<T>::DisplayList(void) {
    ListNode *nodePtr;

    nodePtr = head;
    while (nodePtr){
        cout << nodePtr -> value << endl;
        nodePtr = nodePtr -> next;
    }
}

// the insertNode function inserts a node with num copied to its value member
template <class T>
void LinkedList<T>::insertNode(T num){
    ListNode *newNode, *nodePtr, *previousNode;

    // allocate a new node & store num
    newNode = new ListNode;
    newNode -> value = num;

    // if there are no nodes in the list, make newNode the first node
    if (!head) {
        head = newNode;
        newNode -> next = NULL;
    } else { // otherwise, insert newNode at end
        // initialize nodePtr to head of list
        nodePtr = head;

        // skip all nodes whose value number is less than num
        while (nodePtr != NULL && nodePtr -> value < num) {
            previousNode = nodePtr;
            nodePtr = nodePtr -> next;
        }

        // insert the node after the one pointed to by previousNode and before the one pointed to by nodePtr
        previousNode -> next = newNode;
        newNode -> next = nodePtr;
    }
}

// the deleteNode function searches for a node with num as its value. The node, if found, is deleted from the list and from memory
template <class T>
void LinkedList<T>::deleteNode(T num){
    ListNode *nodePtr, *previousNode;

    // if the list is empty, do nothing
    if (!head){
        return;
    }
    // determine if the first node is the one
    if (head -> value == num){
        nodePtr = head -> next;
        delete head;
        head = nodePtr;
    } else {
        // initialize nodePtr to head of list
        nodePtr = head;

        // skip all nodes whose value member is not equal to num
        while (nodePtr != NULL && nodePtr -> value != num){
            previousNode = nodePtr;
            nodePtr = nodePtr -> next;
        }

        // link the previous node to the node after nodePtr, then delete nodePtr
        previousNode -> next = nodePtr -> next;
        delete nodePtr;
    }
}

// destructor
// this function deletes every node in the list

template <class T>
LinkedList<T>::~LinkedList(void){
    ListNode *nodePtr, *nextNode;

    nodePtr = head;
    while (nodePtr != NULL){
        nextNode = nodePtr -> next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}
#endif
