#include <iostream>

extern double weighted_average(int array[], int n)
int main() {
    int array[] = {1, 2, 1, 4, 1, 3};

    std::cout << "Weighted average of array: " << weighted_average(array, sizeof(array) / sizeof(array[0])) << std::endl; // Output: 3.0

    return 0;
}