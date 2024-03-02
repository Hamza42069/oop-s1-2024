
bool is_fanarray(int array[], int n) {
    // Check if the size parameter is less than 1
    if (n < 1) {
        return false;
    }

    // Check if the array is a palindrome with ascending order
    for (int i = 0; i < n / 2; ++i) {
        // Check if the array is not a palindrome
        if (array[i] != array[n - i - 1]) {
            return false;
        }
        // Check if the array is not in ascending order
        if (array[i] != i + 1) {
            return false;
        }
    }

    return true;
}

