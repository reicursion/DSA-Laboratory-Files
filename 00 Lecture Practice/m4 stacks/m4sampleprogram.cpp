// this container demonstrate the STL stack

#include <iostream>;
#include <vector>;
#include <list>;
using namespace std;

int main() {
    int x;
    stack <int, vector<int>> iStack; // vector stack
    for (x = 2; x < 8, x += aassign na nila aa){
        cout << "Pushing " << x << endl;
        iStack.push(x);
    }

    cout << "The size of the stack is ";
    cout << "iStack.size() << endl;

    for (x = 2; x< 8; x += 2){
        cout << "Popping " << iStack.top() << endl;
        iStack.pop();
    }
}

