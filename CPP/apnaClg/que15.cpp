#include <iostream>
#include <vector>

using namespace std;

void linear_search(vector <int> vec, int n, int key){
    for(int i=0; i<n; i++){
        if(vec[i] == key){
            cout<<"element is present";
            break;
        }else{
            cout<<"Element is not present";
            break;
        }
    }
}

int main(){

    int n;
    cin>>n;

    vector <int> vec(n);

    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    int key;
    cin>>key;

    linear_search(vec, n, key);
}