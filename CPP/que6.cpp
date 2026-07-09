// Find Maximum

// Write a function that takes two integer pointers and prints the larger value.

#include <iostream>
using namespace std;

int max(int *a, int *b){
    if(*a > *b){
        return *a;
    }else{
        return *b;
    }
}

int main(){
    int a;
    cout<<"Enter a: ";
    cin>>a;
    
    int b;
    cout<<"Enter b: ";
    cin>>b;
    
    int result;
    result = max(&a, &b);
    
    cout<<result;
}