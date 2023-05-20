class DynIntStack{
    private:
        struct StackNode {
            int value;
            StackNode *next;
        };
        StackNode *top;

    public:
        DynIntStack() {
            top = NULL;
        }
        void push(int num);
        void pop(int &num);
        bool isEmpty();

        // a isFull() function is not needed anymore because it is a dynamic stack == never get full
}

// member function push pushes teh argument onto the stack
void DynIntStack::push(int num){
    stackNode *newNode;

    // allocate a new node and store Num
    newNode = new StackNode;
    newNode -> value = num;

    // if there are no nodes in the list, make newNode the first node
    if (isEmpty()){
        top = newNode;
        newNode -> next = NULL;
    } else { // otherwise, insert newNode before top
        newNode -> next = top;
        top = newNode;
    }
}

// member function pop pops the value at the top of the stack off, and copies it into the variable passed as an argument
void DynIntStack::pop(int &num){
    StackNode *temp;

    if (isEmpty()){
        cout << "The stack is empty.\n";
    } else { // pop value off top of stack
        num = top -> value;
        temp = top -> next;
        delete top;
        top = temp;
    }
}

// member function isEmpty returns true if the stack is empty, or false otherwise
bool DynIntStack::isEmpty(){
    bool status;

    if (!top) {
        status = true;
    } else {
        status = false;
    }

    return status;
}