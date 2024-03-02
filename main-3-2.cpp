#include <iostream>

extern double find_median(int array[], int n);
int main() {
    int array1[] = {3, 5, 2, 1, 4};
    int array2[] = {1, 2, 3, 4, 5};
    int array3[] = {3, 1, 4, 2};
    int array4[] = {1, 2, 3, 4};

    std::cout << "Median of array1: " << find_median(array1, sizeof(array1) / sizeof(array1[0])) << std::endl; // Output: 3
    std::cout << "Median of array2: " << find_median(array2, sizeof(array2) / sizeof(array2[0])) << std::endl; // Output: 3
    std::cout << "Median of array3: " << find_median(array3, sizeof(array3) / sizeof(array3[0])) << std::endl; // Output: 0 (size is even)
    std::cout << "Median of array4: " << find_median(array4, sizeof(array4) / sizeof(array4[0])) << std::endl; // Output: 0 (size is even)

    return 0;
}