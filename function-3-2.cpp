#include <iostream>
#include <algorithm>

 int median_array(int array[], int n) 
 {
    // Check if the size parameter is less than 1 or even
    if (n < 1 || n % 2 == 0) {
        return 0;
    }

    // Sort the array
    std::sort(array, array + n);

    // Return the middle element
    return array[n / 2];
}