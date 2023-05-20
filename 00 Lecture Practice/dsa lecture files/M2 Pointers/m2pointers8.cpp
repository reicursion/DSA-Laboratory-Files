#include <iostream>
#include <cstdlib>
using namespace std;
typedef int *IntPtr;

int main() {
    IntPtr d;
    d = new int[5];

    for (int i = 0; i < 5; i++)
        d[i] = i * 5;

    for (int i = 0; i < 5; i++)
        cout << *(d + i) << " ";

    system("pause");
}
