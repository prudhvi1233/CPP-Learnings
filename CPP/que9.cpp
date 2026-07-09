//reverse of an array

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    
    int arr[10];
    cout<<"Enter array elments: ";
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<n/2; i++){
        int temp;
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}