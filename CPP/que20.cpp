//finding common elements in two arrays
#include <iostream>
using namespace std;

void common_elements(int arr1[], int arr2[], int n1, int n2){
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
    
}

int main(){
    int n1;
    cout<<"Enter size 1: ";
    cin>>n1;
    
    int n2;
    cout<<"Enter size 2: ";
    cin>>n2; 
    
    int arr1[10];
    cout<<"Enter arr1 elements: ";
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    
    int arr2[10];
    cout<<"Enter arr2 elements: ";
    for(int i=0; i<n2; i++){
        cin>>arr2[i];
    }
    
    common_elements(arr1, arr2, n1, n2);
}