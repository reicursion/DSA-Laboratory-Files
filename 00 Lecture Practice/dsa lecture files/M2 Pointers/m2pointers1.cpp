#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int num = 100, *pointer;

    // we will pass an address ot the  pointer
    pointer = &num; // address of operator


    cout << "Value of num: " << num << endl;
    cout << "Value of pointer: " << *pointer << endl;
    cout << "\nNew Values...\n";

    *pointer = 250; // dereference operator

    cout << "Value of num: " << num << endl;
    cout << "Value of pointer: " << *pointer << endl;

    system("pause");
}