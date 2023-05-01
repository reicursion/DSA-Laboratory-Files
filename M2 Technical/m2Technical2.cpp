#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

// function breadcrumb
int menu();
void string_length();
// void string_compare();
// void string_concatenate();

int main(){

    int choice = menu();

    switch (choice)
    {
    case 1:
        string_length();
        break;
/*
    case 2:
        string_compare();
        break;
    case 3:
        string_concatenate();
        break;
    case 4:
        exit(0);
        break;
*/
    default:
        cout << "Invalid choice! Please try again.\n";
        break;
    }

    return 0;
}

int menu(){
    int choice;

    cout << "What do you want to do?" << endl;
    cout << "1. Find the string length" << endl;
    cout << "2. Compare two strings" << endl;
    cout << "3. Concatenate two strings" << endl;
    cout << "4. Exit" << endl << endl;

    cout << "Enter your choice: "; // ask the user for their choice
    cin >> choice; // store the choice in the variable choice

    return choice;
}

void string_length(){
    string str; // declare a string variable
    cout << "Enter a string: "; // ask the user for a string
    cin.ignore(); // ignore the newline character
    getline(cin, str); // store the string in the variable str
    int length = str.length(); // store the length of the string in the variable length

    cout << "Length of the string is: " << length;
}