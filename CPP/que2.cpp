// Print Address

// Write a program to print:
// Value of a variable
// Address of the variable
// Value stored in the pointer
// Value pointed to by the pointer

#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    
    int *ptr = &a;
    
    cout<<a<<endl;
    cout<<&a<<endl<<ptr<<endl<<&ptr<<endl<<*ptr;

    
}

/* 
what i learned from this code is how to print the address of a variable and how to use
 pointers to access the value of a variable. We declare an integer variable 'a' and assign
it a value. We then create a pointer 'ptr' that stores the address of 'a'. We print the
value of 'a', the address of 'a', the value stored in the pointer (which is the address
of 'a'), the address of the pointer itself, and finally, we dereference the pointer to
print the value pointed to by it (which is the value of 'a'). This demonstrates how
pointers can be used to access and manipulate variable values in C++.
*/