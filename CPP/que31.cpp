// Question 2 :
/*
A social media platform stores friendships between users.

Requirements
    Store all usernames in an array.
    Store each user's friends using a 2D array.
    Display all users and their friends in a formatted way.
    Sort all usernames using Insertion Sort.
    Ask the user to enter a username to search.
    Search for the username using Binary Search.
    If the username is found, display all of that user's friends.
    Otherwise, display "User not found."
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    string arr[100];
    cout<<"Enter usernames: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

}