#include <iostream>
#include <vector>

using namespace std;

void reverse_array(vector <int> vec, int n){
    for(int i=0; i<n/2; i++){
        int temp;
        temp = vec[i];
        vec[i] = vec[n-1-i];
        vec[n-1-i] = temp;
    }

    for(int i=0; i<n; i++){
        cout<<vec[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    vector <int> vec(n);

    for(int i=0; i<n; i++){
        cin>> vec[i];
    }

    reverse_array(vec, n);

}