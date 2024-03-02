double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0;
    }

    std::unordered_map<int, int> freq_map; // Map to store frequency of elements
    double sum = 0;

    // Count the frequency of each element in the array
    for (int i = 0; i < n; ++i) {
        freq_map[array[i]]++;
    }

    // Calculate the weighted sum
    for (auto& pair : freq_map) {
        sum += static_cast<double>(pair.first * pair.second) / n;
    }

    return sum;
}