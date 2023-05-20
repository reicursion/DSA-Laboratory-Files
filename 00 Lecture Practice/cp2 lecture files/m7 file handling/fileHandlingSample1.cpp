// include both header files
#include <iostream>
#include <fstream> // header file for fstream
using namespace std;

int main() {
    // initialize the file variable;
    fstream myFile; // fstream = a data type, myFile = variable for the file


// WRITE TO THE FILE
    // open the file. if it is not present, it will create a new file
    myFile.open("myFile.txt", ios::out); // ios::out = open the file for writing
            // you must enclose your myFile.txt in quotation marks
    // if the file is not present, it will create a new file
    // use if statement to check whether the file is open or not

    if (myFile.is_open()) { // myFile.is_open() = returns true if the file is open
        // now you can write to the file
        cout << "File is open" << endl;
        myFile << "Hello World" << endl;
        myFile << "I am learning C++" << endl;
        myFile << "I am learning file handling" << endl;

        // after writing to the file, you can use myFile.close() to close the file
        myFile.close();
    }
    else {
        cout << "File is not open" << endl;
    }

// APPEND TO THE FILE
    myFile.open("myFile.txt", ios::app); // ios::app = open the file for appending

    // use if statement to check whether the file is open or not
    if (myFile.is_open()) {
        // add the things you want to append
        cout << "Added first line to the file!" << endl;
        myFile << "I am learning how to append to a file" << endl;
        myFile.close();
    }
    else {
        cout << "File is not open" << endl;
    }

    cout << "\n\nThis is the contents of the file:\n\n";

// READ FROM THE FILE
    myFile.open("myFile.txt", ios::in); // ios::in = open the file for reading

    // use if statement to check whether the file is open or not
    if (myFile.is_open()) {
        string line; // initialize variable
        // use while loop to access every single line
        while (getline(myFile, line)) { // getline() = reads the line from the file, it will be stored to line variable
            // print the line
            cout << line << endl;
    }
    myFile.close(); // close the file

    return 0;
    }

}
