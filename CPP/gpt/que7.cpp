#include <iostream>
#include <climits>
using namespace std;

void second_lar(int arr[], int n){
    int lar = arr[0];
    int sec_lar = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] > lar){
            sec_lar = lar;
            lar = arr[i];
        }

        if(arr[i] > sec_lar && arr[i] != lar){
            sec_lar = arr[i];
        }
    }

    if(sec_lar == INT_MIN){
        cout<<"No second largest elment is present in the array";
    }else{
        cout<<sec_lar;
    }

}

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    second_lar(arr,n);

}