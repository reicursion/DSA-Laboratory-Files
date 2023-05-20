#include <iostream>
#include <list>
using namespace std;

// create a class named YouTubeChannel
// class - user defined data type
class YoutubeChannel {
    public: // access modifier that makes the attributes publicly available
    // list down the attributes of the youtube channel. the attributes are private intially
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitles;
};

// to prevent the programmer using multiple instances of the class, constructors are recommended to be used
YoutubeChannel (string name, string ownerName) { // two aruguments are passed
    // assign the values to the attributes 
    // syntax: AttributeName = value passed to the constructor from the user
    Name = name;
    OwnerName = ownerName;
    SubscriberCount = 0;
-
}

int main() {
    // create an object of the class: YoutubeChannel
    // YoutubeChannel is the data type, then ytChannel is the variable
    YoutubeChannel ytChannel ("CodeBeauty", "Saldina"); // pass the values to the constructor
    ytChannel.PublishedVideoTitles.push_back("C++ for Beginners"); // add the video title to the list
    ytChannel.PublishedVideoTitles.push_back("C++"); // add the video title to the list

    // use a constructor to declare a new instance of a class
    YoutubeChannel ytChannel2 ("AmySings", "Amy");

    // print out the assigned values
    cout << "Name: " << ytChannel.Name << endl;
    cout << "Owner Name: " << ytChannel.OwnerName << endl;
    cout << "Subscriber Count: " << ytChannel.SubscriberCount << endl;
    cout << "Videos: " << endl;
    // use a loop to print out the list
    for (string videoTitle : ytChannel.PublishedVideoTitles) {
        //  write out all the titles
        cout << videoTitle << endl;
    }
/*
    // assign properties/values to the object ytChannel
    ytChannel.name = "CodeBeauty";
    ytChannel.ownerName = "Saldina"; 
    ytChannel.subscriber Count = 10000;
    ytChannel.publishedVideoTitles = {"C++ OOP", "C++ STL", "C++ Templates"};
*/
    // print out assigned values
    cout << "Name: " << ytChannel2.Name << endl;
    cout << "Owner Name: " << ytChannel2.OwnerName << endl;
    cout << "Subscriber Count: " << ytChannel2.SubscriberCount << endl;
    cout << "Videos: " << endl;
    // use a loop to print out the list
    for (string videoTitle : ytChannel2.PublishedVideoTitles) {
        //  write out all the titles
        cout << videoTitle << endl;
    }

    return 0;
}