#include <iostream>
using namespace std;

void dup_count(int n, int arr[], int x){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            count = count + 1;
        }
    }
    cout<<x<<" is present in "<<count<<" times";
}

int main(){
    int n;
    cin>>n;
    
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int x;
    cin>>x;
    
    dup_count(n, arr, x);
}