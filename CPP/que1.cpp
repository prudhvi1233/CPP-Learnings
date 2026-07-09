// Declare a pointer

// Declare an integer variable a = 10.
// Create a pointer that stores the address of a.
// Print the value of a using the pointer.

#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    
    int *ptr = &a;
    
    cout<< *ptr;
}