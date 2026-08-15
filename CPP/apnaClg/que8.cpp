#include <iostream>
using namespace std;

void revArr(int arr[], int n){
    int low = 0;
    int high = n-1;
    
    while(low < high){
        int temp;
        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    revArr(arr, n);
}