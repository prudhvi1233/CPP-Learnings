#include <iostream>
using namespace std;

int main() {
    int arr[] = {100, 111, 998};

    for(int i = 0; i < 3; i++) {
        int sum = 0;

        while(arr[i] != 0) {
            int ld = arr[i] % 10;
            sum = sum + ld;
            arr[i] = arr[i] / 10;
        }

        while(sum >= 10) {
            int summ = 0;

            while(sum != 0) {
                int ld = sum % 10;
                summ = summ + ld;
                sum = sum / 10;
            }

            sum = summ;
        }

        cout << sum << " ";
    }

    return 0;
}