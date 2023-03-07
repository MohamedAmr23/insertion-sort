
#include <iostream>
using namespace std;
void insertionsort(int arr[], int n) {
    int i, j, key;
    for (j = 1; j < n; j++) {
        key = arr[j];
        i = j - 1;
        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }
}
void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = { 9,2,7,5,1,4,3,6 };
    int n = sizeof(arr) / sizeof(arr[1]);
    insertionsort(arr, n);
    display(arr, n);
    return 0;
}