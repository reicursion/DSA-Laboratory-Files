#include<iostream>
using namespace std;

class listType {
    private:
        // data  declarations
        int list[1000];
        int length;

    public:
        // operations: the two chosen operations are isEmptylist and printList
        bool isEmptylist(); // check if the list is empty
        void printList(int size); // print the content of the list
        listType(int *num, int size); // constructor - initialize the list to be empty
            // pointer variable is used
            // when you call the constructor == you provide the array, together with its size

};

// implementation in C++

listType::listType(int *num, int size) {
    for (int i = 0; i < size; i++){
        list[i] = num[i];
    }
    length = size;
}

bool listType::isEmptylist() {
    if (length == 0) {
        return true;
    } else {
        return false;
    }
}

void listType::printList(int size) {
    for (int i = 0; i < size; i++) {
        cout << list[i] << " ";
    }
    cout << endl;
}

// main program
int  main(){
    int *n;
    int s;
    cout << "Enter the size of the list: ";
    cin >> s;
    n = new int[s]; // create new array of size s

    cout << "Enter " << s << " numbers: \n";
    for (int i = 0; i < s; i++) {
        cout << "Integer " << i + 1 << ": ";
        cin >> n[i];
    }

    // instantiate the listType object
    listType obj(n, s);
    cout << "Array Empty " << obj.isEmptylist() << endl;

    obj.printList(s);
    delete[] n;
    return 0;
}
