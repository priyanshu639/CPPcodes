
#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionsort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minindx = i;
        // loop for finding minimum
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minindx]) {
                minindx = j;
            }
        }
        swap(arr[i], arr[minindx]);
    }
    print(arr, n);
}

int main() {
    int arr[] = {1, 2, 4, 5, 3};
    int n = sizeof(arr) / sizeof(int);
    selectionsort(arr, n);

    return 0;
}
