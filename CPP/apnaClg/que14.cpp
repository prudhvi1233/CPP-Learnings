#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec = {1, 2, 2, 3, 3};

    for(int i=0; i<vec.size(); i++){
        int count = 0;

        for(int j=0; j<vec.size(); j++){
            if(vec[i] == vec[j]){
                count = count + 1;
            }
        }

        if(count == 1){
            cout<<vec[i];
        }
    }
}
