#include <iostream>
using namespace std;

void ls(int n, int key, int arr[]){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            cout<<"Element is present";
            return;
        }
    }
    cout<<"Element is not present";
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

    ls(n,key,arr);
}