
#include <iostream>

using namespace std;

// Function to calculate factorial
int calculateFactorial(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}

// Function to calculate sum of numbers
int calculateSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

// Function to print numbers from 1 to n
void printNumbers(int n) {
    cout << "Numbers from 1 to " << n << ": ";
    for (int i = 1; i <= n; ++i) {
        cout << i << " ";
    }
    cout << endl;
}

// Function to find maximum element in an array
int findMaxElement(int arr[], int size) {
    int maxElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main()
{
    // Call the functions and print their results
    int factorialResult = calculateFactorial(5);
    cout << "Factorial of 5: " << factorialResult << endl;

    int sumResult = calculateSum(5);
    cout << "Sum of first 5 numbers: " << sumResult << endl;

    printNumbers(5);

    int arr[] = { 5, 3, 9, 1, 7 };
    int maxElement = findMaxElement(arr, sizeof(arr) / sizeof(arr[0]));
    cout << "Maximum element in the array: " << maxElement << endl;

    return 0;
}
