#include <iostream>
#include <vector>

using namespace std;

int FindSmallest(int arr[], int start, int size) {
    int smallest = arr[start];
    int smallest_index = start;

    for (int i = start + 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            smallest_index = i;
        }
    }
    return smallest_index;
}


vector<int> SelectionSort(int arr[], int size) {
    vector<int> newArr;
    for (int i = 0; i < size; i++) {
        int smallest = FindSmallest(arr, i, size);
        newArr.push_back(arr[smallest]);

        // Swap the smallest element with the first unsorted element
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
    return newArr;
}

int main()
{

    int arr[] = { 5,3,6,2,10 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> sortedArr = SelectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < sortedArr.size(); i++) {
        cout << sortedArr[i] << " ";
    }
    cout << endl;
}
