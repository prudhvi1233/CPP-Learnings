//Right rotate
#include <iostream>
using namespace std;

void right_rotate(int arr[], int n) {
    int k = arr[n - 1];

    for (int i = n - 1; i > 0; i--) {
        for (int j = i - 1; j < n; j++) {
            arr[i] = arr[j];
            break;
        }
    }

    arr[0] = k;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[10];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    right_rotate(arr, n);
}