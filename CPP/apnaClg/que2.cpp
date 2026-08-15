#include <iostream>
using namespace std;

int max(int arr[], int n){
    int maxx = INT_MAX;

    for(int i=0; i<n; i++){
        if(arr[i] < maxx){
            maxx = arr[i];
        }
    }
    return maxx;
}

int main(){
    int n;
    cin>>n; 

    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int result;
    result = max(arr, n);

    cout<<result;
}