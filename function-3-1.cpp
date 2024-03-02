

bool is_fanarray(int array[], int n)
{
    if (n < 1) {
        return false;
    }

    // Check if the array is a palindrome with ascending order up to the middle element
    for (int i = 0; i < n / 2; ++i) {
        if (array[i] != array[n - i - 1] || array[i] != i + 1) {
            return false;
        }
    }

    return true;
}
