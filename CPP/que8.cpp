//count the no of values in an array using pointers

#include <iostream>
using namespace std;

void count(int *size){
    cout<<*size;
}

int main(){
    int arr[] = {2,3,4,5,9,7};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    count(&size);
}