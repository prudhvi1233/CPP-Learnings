// largest element in an array

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    
    int arr[10];
    cout<<"Enter the array elments: ";
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int max = arr[0];
    
    for(int i=0; i<n; i++){
       if(arr[i]>max){
           max = arr[i];
       }
    }
    
    cout<<max;
}