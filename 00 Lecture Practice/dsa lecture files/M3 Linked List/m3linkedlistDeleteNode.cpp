void FloatList::deleteNode (float num){
    ListNode *nodePtr, *previousNode;
    int found = 0;

    // if the list is empty, do nothing
    if (!head)
        cout << "The list is empty!" << endl;
        return;
    
    // determine if the first node is the node
    if (head -> value == num) {
        nodePTr = head -> next;
        delete head;
        head nodePtr;
        found = 1;
    } else {
        // initialze nodePtr to head of list
        nodePtr = head;
        previousNode = NULL;

        // skip all nodes whose value member is not equal to num
        while (nodePtr != NULL && nodePtr -> value != num) {
            previousNode = nodePtr;
            nodePtr = nodePtr -> next;
        }

        // link the previous node to the node after nodePtr, then delete nodePtr
        if (nodePtr != NULL) {
            previousNode -> next = npdePtr -> next;
            delete nodePtr;
            cout << "Input has been DELETED!" << endl;
            found = 1;
        }
    }

    if (found == 0) 
        cout << "input not in the list!" << endl;
}