#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

class Array1D {
	protected:
        int capacity;
        int size;
        int *array;

	public:
        int GetSize();
        bool isEmpty() const;
        bool isFull() const;
        void InsertItem(int pos,int val);
        void RemoveItem(int pos);
        void AddItem(int val);
        void DisplayElements();
};

class ArrayConcrete: public Array1D{ // inherits from Array1D, ArrayConcrete class inherits the public members of Array1D
     public:
     	ArrayConcrete(int Arraycap = 10); // default constructor
        ~ArrayConcrete(); // destructor
        int GetSize(); // returns the size of the array
        bool isEmpty() const; // returns true if array is empty
        bool isFull() const; // returns true if array is full
        void InsertItem(int pos,int val); // inserts an item at a given position
        void RemoveItem(int pos); // removes an item at a given position
        void AddItem(int val); // adds an item at the end of the array
        void DisplayElements(); // displays all the elements in the array
};

ArrayConcrete::ArrayConcrete(int Arraycap){ // default constructor
    capacity = Arraycap; // sets the capacity of the array using the Arraycap
    array = new int[capacity]; // creates a new array with the capacity
    size = 0; // sets the size to 0
}

int ArrayConcrete::GetSize(){
    return size;
}

bool ArrayConcrete::isEmpty() const{
    if(size == 0){
        return true;
    }
    return false;
}

bool ArrayConcrete::isFull() const{
    if(size == capacity){
        return true;
    }
    return false;
}

void ArrayConcrete::InsertItem(int pos, int val){
    if(pos > size || pos < 1 || isFull()){
        return;
    }

    for (int i  = size - 1; i >= pos - 1; i--){
        array[i + 1] = array[i];
    }

    array[pos - 1] = val;
    size++;
}

void ArrayConcrete::RemoveItem(int pos){
    if(pos < 1 || pos > size || isEmpty()){
        return;
    }

    for (int i = pos - 1; i < size; i++){
        array[i - 1] = array[i];
    }

    size--;
}

void ArrayConcrete::AddItem(int val){
    if (isFull()){
        return;
    }

    array[size] = val;
    size++;
}

void ArrayConcrete::DisplayElements(){
    cout << endl;
    for(int i = 0; i < size ; i++){
        cout << array[i] << " ";
    }
}

ArrayConcrete::~ArrayConcrete(){
    delete [] array;
}

int main(){
    ArrayConcrete arr(5); // intialize 5 elements
        arr.AddItem(10); // adds 10 to 1st element
        arr.AddItem(20);  // ..
        arr.AddItem(30); // adds 30 at 3rd element
        arr.DisplayElements(); // Displays all the elements
        arr.InsertItem(1, 15); // Inserts 15 in index 1, replace it otherwise if existed
        arr.DisplayElements(); // displays all elements
        arr.AddItem(40);
        arr.DisplayElements();
        arr.AddItem(50);
        arr.RemoveItem(0); //remove index 0
        arr.DisplayElements();

    cout << "\nArray size: " << arr.GetSize() << endl;
    if (arr.isEmpty()) {
        cout << "Array is empty!" << endl;
    } else {
        cout << "Array is not empty!" << endl;
    }

    return 0;
}