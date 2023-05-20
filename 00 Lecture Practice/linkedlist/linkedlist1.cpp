#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};

// the data type of the nodes being stored must be the same

node *start = NULL; // global pointer, which will point to the start of the list

node *create node() {
    // creates a memory allocation for the node
    node *temp;
    temp = new node;
    return temp;
}

void insertNode(){
    node *temp, *traverse;
    int n;

    cout << "Enter -1 to end" << endl;
    cout << "Enter the value to be added in list" << endl;
    cin >> n;

    while (n != -1){ // while the user does not enter -1
        temp = createNode(); // create a new node
        temp -> data = n; // assign the value of n to the data of the node
        temp -> next = NULL; // assign the next pointer of the node to NULL
    }

    if (start == NULL){ // if the list is empty
        start = temp; // assign the start pointer to the temp pointer
    } else {
        traverse = start; // assign the traverse pointer to the start pointer
        while (traverse -> next != NULL) // while the next pointer of the traverse pointer is not NULL
            traverse = traverse -> next; // assign the traverse pointer to the next pointer of the traverse pointer

        traverse -> next = temp;
    }
    cout << "Enter the value to be added in the List" << endl;
    cin >> n;

}
