/*5. Insert New Book by Price
A bookstore maintains a sorted list of book prices.
A new book arrives, and its price needs to be placed at the correct
position while keeping the list sorted.
Write a program to perform this task.*/

#include <iostream>
using namespace std;

void insert(int arr[], int &n, int key) {
    int i = n - 1;

    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = key;
    n++;

    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
}

int main() {
    int arr[10] = {100, 200, 300, 400, 500};
    int n = 5;

    int key = 250;

    insert(arr, n, key);

    return 0;
}