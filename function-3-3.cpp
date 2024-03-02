#include <iostream>
#include <unordered_map>

double weighted_average(int array[], int n) {
    // Check if the size parameter is less than 1
    if (n < 1) {
        return 0;
    }

    // Create a hashmap to store the frequency of each distinct element
    std::unordered_map<int, int> freq;

    // Calculate the frequency of each distinct element in the array
    for (int i = 0; i < n; ++i) {
        freq[array[i]]++;
    }

    // Calculate the weighted average
    float sum = 0;
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        sum += (it->first * it->second) / static_cast<float>(n);
    }

    return sum;
}