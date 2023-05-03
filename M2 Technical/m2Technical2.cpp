#include <iostream>
using namespace std;

// function breadcrumb
int menu();
void string_length(char *str);
/*
void string_compare(char *str1, char *str2);
void string_concatenate(char *str1, char *str2);
void ex();
*/

int main(){

    char *str, *str1, str2;

    int choice = menu();

        switch (choice)
        {
        case 1:
            string_length(str);
            break;
/*
        case 2:
            string_compare(str1, str2);

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

    cout << "Enter your choice: " << choice;
    cin >> choice;
-
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

/*
// function to compare two strings
void string_compare(char *str1, char *str2){
    int i = 0, j = 0, flag = 0;
    char str1[1000];
    char str2[1000];

    cout << "Enter the first string: ";
    cin.ignore();
    cin.getline(str1, 1000);

    cout << "Enter the second string: ";
    cin.getline(str2, 1000);

    // loop to compare the strings
    while (str1[i] != '\0' && str2[j] != '\0'){
        if (str1[i] != str2[j]){
            flag = 1;
            break;
        }
        i++;
        j++;
    }

    if (flag == 0){
        cout << "The strings are equal.";
    }
    else{
        cout << "The strings are not equal.";
    }
}

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