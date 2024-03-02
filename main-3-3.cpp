#include <iostream>

int main() {
    int arr[] = {1, 2, 1, 4, 1, 3};
    
    std::cout << weighted_average(arr, 6) << std::endl; // 3.0
    std::cout << weighted_average(arr, 0) << std::endl; // 0 (since size is less than 1)

    return 0;
}