#include <iostream>
using namespace std;

void rv_arr(int n, int arr[]){
    int left = 0;
    int right = n-1;
    
    while(left < right){
            int temp;
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
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
    
    rv_arr(n,arr);
}