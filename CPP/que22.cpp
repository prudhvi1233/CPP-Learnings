// binary search
#include <iostream>
using namespace std;

int binary_search(int arr[], int key){
    int left = 0;
    int right = 10 - 1;
    
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
    int key = 9;
    int arr[] = {2,9,10,15,20,36,42,53,100,105};
    
    int result;
    result = binary_search(arr, key);
    
    if(result == -1){
        cout<<"element is not present";
    }
    if(result != -1){
        cout<<"element present at index: "<<result;
    }
    
}