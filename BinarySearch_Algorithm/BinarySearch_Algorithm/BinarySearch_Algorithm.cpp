#include <iostream>

using namespace std;

int binary_search(int arr[], int size, int temp) {
    int low = 0;
    int high = size - 1;
    int mid = 0;

    while (low <= high) {
        mid = (low + high) / 2;
        int guess = arr[mid];

        if (guess < temp)
            low = mid + 1; 
        else if (guess > temp)
            high = mid - 1;
        else
            return mid;
    }
    return -1;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int Size = sizeof(arr) / sizeof(arr[0]);
    cout << binary_search(arr, Size, 1) << endl;
    cout << binary_search(arr, Size, 2) << endl;
    cout << binary_search(arr, Size, 3) << endl;
    cout << binary_search(arr, Size, 4) << endl;
    cout << binary_search(arr, Size, 5) << endl;
    cout << binary_search(arr, Size, 6) << endl;
}
