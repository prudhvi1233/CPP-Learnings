#include <iostream>
using namespace std;

int smallest(int arr[], int n){
    int small = INT_MAX;
    int index;
    int i;

    for(i=0; i<n; i++){
        small = min(arr[i],small);
        index = i;
    }
    return index;
}

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int result;
    result = smallest(arr, n);

    cout<<result;
}