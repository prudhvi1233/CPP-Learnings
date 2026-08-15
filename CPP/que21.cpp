//  linear search
#include <iostream>
using namespace std;

void search(int arr[], int key){
    for(int i=0; i<10; i++){
        if(arr[i] == key){
            cout<<"Element is present";
            break;
        }else{
            cout<<"Element is not present";
            break;
        }
    }
}

int main(){
    int key = 4;
    int arr[] = {2,100,9,105,10,20,13,36,55,42};
    
    search(arr,key);
}