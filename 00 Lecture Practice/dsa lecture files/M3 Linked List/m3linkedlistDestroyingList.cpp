FloatList::~FloatList(){
    ListNode *nodePtr, *nextNode;

    nodePtr = head;

    while (*nodePtr != NULL){
        nextNode = nodePtr -> next;
        delete nodePtr;
        nodePtr = nextNode;
    }
    cout << "Linked List has been destroyed!" << endl;
}