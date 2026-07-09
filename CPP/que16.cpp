// removing the duplicates and printing the unique elements in the array

#include <iostream>
using namespace std;

void remove_duplicates(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                for(int k=j; k<n; k++){
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    
    int arr[10];
    cout<<"Enter the array elments: ";
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    remove_duplicates(arr, n);
}