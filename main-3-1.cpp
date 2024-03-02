#include <iostream>

extern bool is_fanarray(int array[], int n);

int main() {
    int array1[] = {1, 2, 3, 2, 1};
    int array2[] = {2, 4, 4, 2};
    int array3[] = {1, 2, 1, 2, 1};
    int array4[] = {1, 3, 5, 4, 2};

    std::cout << "Array 1 is a fan array: " << std::boolalpha << is_fan_array(array1, sizeof(array1) / sizeof(array1[0])) << std::endl;  // Output: true
    std::cout << "Array 2 is a fan array: " << std::boolalpha << is_fan_array(array2, sizeof(array2) / sizeof(array2[0])) << std::endl;  // Output: true
    std::cout << "Array 3 is a fan array: " << std::boolalpha << is_fan_array(array3, sizeof(array3) / sizeof(array3[0])) << std::endl;  // Output: false
    std::cout << "Array 4 is a fan array: " << std::boolalpha << is_fan_array(array4, sizeof(array4) / sizeof(array4[0])) << std::endl;  // Output: false

    return 0;
}