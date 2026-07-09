// reverse of an array using two pointers

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    
    int arr[10];
    cout<<"Enter array elements: ";
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int *left = arr;
    int *right =arr + (n-1);
    
    for(; left<right;){
        int temp;
        temp = *left;
        *left = *right;
        *right = temp;
        
        left++;
        right--;
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}