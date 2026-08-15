#include <iostream>
using namespace std;

int search(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    int result;
    result = search(arr, n, key);

    if(result == -1){
        cout<<"Element is not present";
    }
    if(result != -1){
        cout<<"Element is present at the index: "<<result;
    }
}