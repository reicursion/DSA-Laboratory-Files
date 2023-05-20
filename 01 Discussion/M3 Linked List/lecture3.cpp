#pragma once

template <class T>
class LinkedList
{
private:
    // Declare a structure for the list
    struct ListNode
    {
        T value;
        struct ListNode *next;
    }; 
    ListNode *head; // List head pointer
public:
    LinkedList(void) // Constructor
    { 
        head = NULL; 
    }
    ~LinkedList(void); // Destructor
    void appendNode(T);
    void insertNode(T);
    void deleteNode(T);
    void displayList(void);
};

// appendNode appends a node containing the
// value pased into num, to the end of the list.
template <class T>
void LinkedList<T>::appendNode(T num)
{
    ListNode *newNode, *nodePtr;
    // Allocate a new node & store num
    newNode = new ListNode;
    newNode->value = num;
    newNode->next = NULL;
    // If there are no nodes in the list
    // make newNode the first node
    if (!head)
    head = newNode;
    else // Otherwise, insert newNode at end
    {
        // Initialize nodePtr to head of list
        nodePtr = head;
        // Find the last node in the list
        while (nodePtr->next){
            nodePtr = nodePtr->next;
        }
        // Insert newNode as the last node
        nodePtr->next = newNode;
    }
}

// DisplayList shows the value
// stored in each node of the linked list
// pointed to by head.
template <class T>
void LinkedList<T>::displayList(void)
{
    ListNode *nodePtr;
    nodePtr = head;
    while (nodePtr)
    {
        cout << nodePtr->value << endl;
        nodePtr = nodePtr->next;
    }
}

// The insertNode function inserts a node with
// num copied to its value member.
template <class T>
void LinkedList<T>::insertNode(T num)
{
    ListNode *newNode, *nodePtr, *previousNode;
    // Allocate a new node & store Num
    newNode = new ListNode;
    newNode->value = num;
    // If there are no nodes in the list
    // make newNode the first node
    if (!head)
    {
        head = newNode;
        newNode->next = NULL;
    }
    else // Otherwise, insert newNode at end
    {
        // Initialize nodePtr to head of list
        nodePtr = head;
        // Skip all nodes whose value member is less
        // than num.
        while (nodePtr != NULL && nodePtr->value < num)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        // Insert the node after the one pointed to
        // by previousNode and before the one pointed to
        // by nodePtr.
        previousNode->next = newNode;
        newNode->next = nodePtr;
    }
}

// The deleteNode function searches for a node
// with Num as its value. The node, if found, is
// deleted from the list and from memory.
template <class T>
void LinkedList<T>::deleteNode(T num)
{
    ListNode *nodePtr, *previousNode;
    // If the list is empty, do nothing.
    if (!head){
        return;
    }

    // Determine if the first node is the one.
    if (head->value == num)
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    } 
    else
    {
        // Initialize nodePtr to head of list
        nodePtr = head;
        // Skip all nodes whose value member is 
        // not equal to num.
        while (nodePtr != NULL && nodePtr->value != num)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        // Link the previous node to the node after
        // nodePtr, then delete nodePtr.
        previousNode->next = nodePtr->next;
        delete nodePtr;
    }
}

// Destructor
// This function deletes every node in the list.
template <class T>
LinkedList<T>::~LinkedList(void)
{
    ListNode *nodePtr, *nextNode;
    nodePtr = head;
    while (nodePtr != NULL)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}

int main()
{
    LinkedList<float> list;
    // Build the list
    list.appendNode(2.5f);
    list.appendNode(4.2f);
    list.appendNode(6.1f);
    cout << "Here are the initial values:\n";
    list.displayList();
    cout << endl;
    
    cout << "Now inserting the value 5.\n";
    list.insertNode(5.5f);
    cout << "Here are the nodes now.\n";
    list.displayList();
    cout << endl;
    cout << "Now deleting the last node.\n";
    list.deleteNode(6.1f);
    cout << "Here are the nodes left.\n";
    list.displayList();
    
    return 0;
}