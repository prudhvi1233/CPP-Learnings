// count the no of values in an array

#include <iostream>
using namespace std;

int main(){
    int arr[] = {5, 5, 7, 8, 9};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout<<"number of elments present in the array is :"<<size;
}