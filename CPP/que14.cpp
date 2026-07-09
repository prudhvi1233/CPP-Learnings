//printing duplicate elements in an array
#include <iostream>
using namespace std;

void duplicate(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<" ";
                break;
            }
            
        }
    }
}

int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    
    int arr[10];
    cout<<"Enter the array elements: ";
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    duplicate(arr, n);
}