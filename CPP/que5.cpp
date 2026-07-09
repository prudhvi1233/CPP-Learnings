// Pointer Arithmetic
// Create an array of 5 integers.
// Use a pointer to print all elements using pointer arithmetic instead of array indexing.
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    
    int arr[10];
    cout<<"Enter the array elements: ";
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int *ptr = arr;
    
    for(int i=0; i<n; i++){
        cout<<*(ptr + i)<<" ";
    }    
}

/*
Pointer Arithmetic – Short Notes
An array stores its elements in contiguous (continuous) memory locations.
The array name (arr) represents the address of the first element of the array. Therefore, arr is equivalent to &arr[0].
When we write int *ptr = arr;, the pointer ptr stores the address of the first element (arr[0]).
A pointer can store only one address at a time, so it initially points to the first element. Using pointer arithmetic, we can move it to the next elements.
ptr + 1 points to the second element, ptr + 2 to the third, and so on. The compiler automatically moves the pointer by the size of the data type (int), not by one byte.
To access the value at a pointer's address, we use the dereference operator (*).
*ptr → first element
*(ptr + 1) → second element
*(ptr + 2) → third element
This method accesses array elements without using array indexing (arr[i]), which is exactly what pointer arithmetic means.
*/