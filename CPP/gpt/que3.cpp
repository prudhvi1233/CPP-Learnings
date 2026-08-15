#include <iostream>
using namespace std;

void count(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        count = count + 1;
    }
    
    cout<<count;
}

int main(){
    int arr[] = {1,2,4,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    count(arr, n);
}