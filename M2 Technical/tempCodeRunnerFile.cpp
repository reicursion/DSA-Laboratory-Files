#include <iostream>
using namespace std;

// function breadcrumb
int menu();
void string_length(char *str);
void string_compare(char *str1, char *str2);
/*
void string_concatenate(char *str1, char *str2);
void ex();
*/

int main(){

    char *str, *str1, *str2;

    int choice = menu();

        switch (choice)
        {
        case 1:
            string_length(str);
            break;

        case 2:
            string_compare(str1, str2);
            break;
/*
        case 3:
            string_concatenate(str1, str2);

        case 4:
            ex();
*/
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }

    return 0;
}

int menu(){
    int choice;

    cout << "What do you want to do?\n";
    cout << "1. Find the string length\n";
    cout << "2. Compare two strings\n";
    cout << "3. Concatenate two strings\n";
    cout << "4. Exit\n\n";

    cout << "Enter your choice: ";
    cin >> choice;

    return choice;
}

// function to find the length of a string
void string_length(char *str){
    int length = 0;

    cout << "Enter a string:";
    cin.ignore();
    cin.getline(str,1000);

    // loop to find the length of the string
    for (int i = 0; str[i] != '\0'; i++){
        length++;
    }
    cout << "Length of the string is: " << length;
}

// function to compare two strings
void string_compare(char *str1, char *str2){

    cout << "Enter the first string: ";
    cin.ignore();
    cin.getline(str1,1000);

    cout << "Enter the second string: ";
    cin.ignore();
    cin.getline(str2,1000);

    int str1len = 0;
    for (int i = 0; str1[i] != '\0'; i++){
        str1len++;
    }

    int str2len = 0;
    for (int i = 0; str2[i] != '\0'; i++){
        str2len++;
    }

    cout << str1len;
    cout << str2len;

    // compare two strings
    if (str1len < str2len){
        cout << "The first string is smaller.";
    } else if (str1len > str2len) {
        cout << "The second string is smaller.";
    } else {
        cout << "The first string and second string are equal.";
    }
}

/*
// function to concatenate two strings
void string_concatenate(char *str1, char *str2){
    int i = 0, j = 0;
    char str1[1000];
    char str2[1000];

    cout << "Enter the first string: ";
    cin.ignore();
    cin.getline(str1, 1000);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    // loop to find the length of the first string
    while (str1[i] != '\0'){
        i++;
    }

    // loop to concatenate the second string to the first string
    while (str2[j] != '\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    cout << "Concatenated string: " << str1;
}

// function to exit the program
void ex(){
    cout << "Exiting the program...";
    exit(0);
}
*/