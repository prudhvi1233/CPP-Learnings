// Bubble sort implementation in C++
#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    bool is_sorted = true;

    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            is_sorted = false;
            break;
        }
    }

    if(is_sorted){
        cout<<"\nThe array is sorted in ascending order."<<endl;
    } else {
        cout<<"\nThe array is not sorted in ascending order."<<endl;
    }
}


int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    
    int arr[10];
    cout<<"Enter array elements: ";
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    bubble_sort(arr, n);
}