//binary search
#include <iostream>
using namespace std;

int binary_search(int arr[], int key, int n){
    int left = 0;
    int right = n - 1;
    
    while(left <= right){
        int mid = (left + right)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    
    int key;
    cin>>key;
    
    int arr[10];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int result;
    result = binary_search(arr, key, n);
    
    if(result == -1){
        cout<<"element is not present";
    }
    if(result != -1){
        cout<<"element present at index: "<<result;
    }
    
}