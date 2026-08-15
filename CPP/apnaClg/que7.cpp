#include <iostream>
using namespace std;

void change(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] = 2 * arr[i];
    }

    
    cout<<"In func: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,4};
    int n = 3;

    change(arr, n);

    cout<<"In main :";
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
