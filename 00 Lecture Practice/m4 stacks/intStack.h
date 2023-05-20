class IntStack {
    private:
        int *stackArray;
        int stackSize;
        int top;

    public:
        IntStack(int size); // constructor - determine the size of the stack upon declaration in the main program
        void push(int num);
        void pop(int &num);
        bool isFull();
        bool isEmpty();
};

// constructor!!
IntStack::IntStack(int size) { // will expect a value of size, supplied by main
    stackArray = new int[size]; // from the size passed, we will the memory allocation in an array
    stackSize = size;
    top = -1; // index is -1 because the starting index of an array is 0. if -1 == stack is empty
}

// member function pushes the argument onto the stack
void IntStack::push(int num) {
    // the program must check first whether the stack is full or not
    if (isFull()) {
        cout << "The stack is full.\n";
    }
    else {
        top++; // increment the top index
        stackArray[top] = num; // assign the value of num to the top index of the array
    }
}

// member function pop, pops the value at the top of the stack off, and copies it into the variable passed as an argument
void IntStack::pop(int &num) { // makes use of the address of num
    // the program must check first whether the stack is empty or not
    if (isEmpty()){
        cout << "The stack is empty.\n";
    } else {
        num = stackArray[top]; // assign the value of the top index of the array to num
        top--; // decrement the top index

    }
}

// member function isFull returns true if the stack is full, or false otherwise
bool IntStack::isFull(){
    bool status;

    if (top == stackStize - 1) {
        status = true;
    } else {
        status = false;
    }

    return status;
}

// member function isEmpty returns true if the stack is empty, or false otherwise
bool IntStack::isEmpty(){
    bool status;

    if (top == -1) {
        status = true;
    } else {
        status = false;
    }

    return status;
}
