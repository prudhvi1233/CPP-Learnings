// left rotate of an array
#include <iostream>
using namespace std;

void left_rotate(int arr[], int n){
    int k = arr[0];
    
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            arr[i] = arr[j+1];
            break;
        }
    }
    
    arr[n-1] = k;
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter size 1: ";
    cin>>n;
    
    int arr[10];
    cout<<"Enter array elements: ";
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    left_rotate(arr, n);
}