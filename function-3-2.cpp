
int median_array(int array[], int n) 
{
    if (n <= 0 || n % 2 == 0) {
        return 0;
    }

    std::sort(array, array + n);

    // If the size is odd, return the middle element
    return array[n / 2];
}