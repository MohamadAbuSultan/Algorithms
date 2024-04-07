#include <iostream>

// Definition of the tail-recursive function
int tailRecursion(int n, int result) {
    // Base case
    if (n == 0) {
        return result;
    }
    // Tail-recursive call
    return tailRecursion(n - 1, result + n);
}

int main() {
    // Calling the tail-recursive function
    int n = 5;
    int sum = tailRecursion(n, 0);
    std::cout << "Sum of numbers from 1 to " << n << " is: " << sum << std::endl;
    return 0;
}