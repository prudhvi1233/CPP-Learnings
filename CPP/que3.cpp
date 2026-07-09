// Modify Value Using Pointer

// Initialize int x = 20.
// Use a pointer to change its value to 50.
// Print the updated value.

#include <iostream>
using namespace std;

int main(){
   int x = 20;
   
   int *ptr = &x;
   
   *ptr = 50;
   
   cout<<x;

    
}