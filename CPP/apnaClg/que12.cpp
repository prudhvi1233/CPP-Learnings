#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {1, 5, 4, 2, 6};

    cout<<vec[1];
    cout<<endl;

    for(int i: vec){
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<vec.size()<<endl;

    vec.push_back(3);

    cout<<vec.size()<<endl;

    for(int i: vec){
        cout<<i<<" ";
    }

    cout<<endl;

    vec.pop_back();

    for(int i : vec){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;

    cout<<vec.at(4)<<endl;

    cout<<vec.capacity();

}