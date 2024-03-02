#include <iostream>

extern int median_array(int array[], int n);
int main() {
    int arr1[] = {3, 5, 2, 1, 4};
    int arr2[] = {2, 4, 1, 6};

    std::cout << median(arr1, 5) << std::endl; // 3
    std::cout << median(arr2, 4) << std::endl; // 0 (since size is even)

    return 0;
}