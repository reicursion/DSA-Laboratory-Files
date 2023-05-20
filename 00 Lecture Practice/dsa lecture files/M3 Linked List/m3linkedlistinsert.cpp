// initialize nodePtr to head of list 
nodePtr = head;

// skip all nodes whose value member is less than num
while (nodePrt != NULL && nodePtr -> value < num) {
    previousNode = nodeP next;
}

void FloatList::insertNode (floatnum){
    ListNode *newNode, *nodePtr, *previousNode;

    // allocate a new node and store Num
    newNode new ListNode; 
    newNOde -> value = num;

    // if there are no nodes in the list
    // make newNode the first node
    if (!head){
        head = newNode;
        newNode -> next = NULL;
    } else {// otherwise, insert newNode
        // initialize nodePtr to head of list
        nodePtr = head;
        previousNode = NULL:

        // skip all nodes whose value member is less then num
        while (nodePtr != NULL && nodePtr -> value < num){
            previousNode = nodePtr;
            nodePtr = nodePtr -> next;
        }
    }

    // if the new node is to be the first in th list, 
    // insert it before all other nodes
    if (previousNode == NULL){
        head = newNode;
        newNode -> next = nodePtr;
    } else {
        previousNode -> next = newNode;
        newNode -> next = nodePtr;
    }

    cout << "Input has been INSERTED!" << endl;
}