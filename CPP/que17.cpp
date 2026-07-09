// Array merging

#include <iostream>
using namespace std;

void merging_arr(int arr1[], int arr2[], int n1, int n2){
    
    int arr3[10];
    
    for(int i=0; i<n1; i++){
        for(int k=i; k<n1+n2; k++){
            arr3[k] = arr1[i];
            break;
        }
    }
    
    for(int i=0; i<n1; i++){
        for(int k=n1 + i; k<n1+n2; k++){
            arr3[k] = arr2[i];
            break;
        }
        
    }
    
    for(int i=0; i<n1+n2; i++){
        cout<<arr3[i]<<" ";
    }
}

int main(){
    int n1;
    cout<<"Enter size1: ";
    cin>>n1;
    
    int n2;
    cout<<"Enter size2: ";
    cin>>n2;
    
    int arr1[10];
    cout<<"Enter array1 elements: ";
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    
    int arr2[10];
    cout<<"Enter array2 elements: ";   
    for(int i=0; i<n2; i++){
        cin>>arr2[i];
    }
    
    merging_arr(arr1, arr2, n1, n2);
    
    
}