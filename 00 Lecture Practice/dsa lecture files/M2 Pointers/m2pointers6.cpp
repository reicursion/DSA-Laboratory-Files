#include <iostream>
#include <cstdlib>
using namespace std;
typedef int *IntPtr;
void sneaky(IntPtr temp);

int main(){
    IntPtr p;
    p = new int;
    *p = 77;
    cout << "Value point to by p: " << *p << endl;
    sneaky(p);
    cout << "Value point to by p: " << *p << endl;
    system("pause");
}

void sneaky (IntPtr temp) {
    *temp = 99;
    cout << "Value point to by temp: " << *temp << endl;
}