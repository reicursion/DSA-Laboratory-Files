#include <iostream>
using namespace std;

int main() {

    class listType {
        public:
            bool isEmptyList() const;
            bool isFullList() const;
            int search(int searchItem) const;
            void insert(int newElement);
            void remove(int removeElement);
            void destroyList;
            void printList() const;
            listType (int x); //constructor

        private:
            int list[1000];
            int length;
    };

    int *p;
    int* p;
    int * p;

    
    int x = 25;
    int *p;
    p = &x; //store the address of x in p

    cout << *p << endl;

    *p = 55;

    *p1 = 10;
    *p2 = 20;

    *p1 = *p2;
    int pointer;

    int num = 100;
    pointer = &num;

    *pointer = 250;

    int a;
    int *p = &a;    // you use & to get the address of a a, then *p stores the address of a
    // any changes that will be changed to a, will also affect p
    // if you change anything to the pointer, it will affect a

    int *p; // the * is not yet a dereferencing because you only initialized it here
    *p; // calling it here is a dereferencing


    // 32 bit -> 0->2^32


    p1 = new int;

    typedef known_type_definition New_Type_Name;

p = a;
a = p;

    typedef double *DoublePtr;
    DoublePtr d;
    d = new double[10];

    for (int i = 0; i < arraysize; i++)
        cout << *(d + 1) << " ";

    for (int i = 0; i < arraysize; i++)
        cout << d[i] << " ";

    struct ListNode {
        float value;
        struct ListNode *next;
    };

    ListNode *head;


    Assign list head to node pointer
    while node pointer is not NULL
        display the value
        assign node pointer to the next pointer
    end while

    Create a new ListNode
    Store data in the new ListNode
    if there are no nodes in the list
        Make the new node for the first node
    else
        Find the first node whose values is greater than or equal the new value, or the end of the list (whiechever is first)
        Insert the new node before the found node, or at the end of the list if no node was found
    end if

    cout << list.back() << endl;

    list.erase(iter);
    list.erase(firstIter,lastIter);

    if (list.empty());

    iter = list.end();

    cout << list.front() << endl;

    list.insert(iter, x)

    list1.merge(list2);

    list.pop_back();

    list.pop_front();

    list.push_back(x);

    list.push_front(x);

    list.reverse(x);

    list1.swap(List2)

    list.unique();

    return 0;

}