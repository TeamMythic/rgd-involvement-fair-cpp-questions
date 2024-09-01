#pragma once
#include <random>

/// @brief Generates an array to use as a test case
/// @param result The array to fill
/// @param n The number of elements to fill the array with
void generate_random_array(int result[], int n)
{
    // Create RNG system.
    std::random_device device;
    std::mt19937 rng(device());
    std::uniform_int_distribution<std::mt19937::result_type> distribution(0, 100);

    // Return a random result.
    for (auto i = 0; i < n; i++)
    {
        result[i] = distribution(rng);
    }
}

bool test_array_result(int array[], int length, int value)
{
    auto correct = array[length - 1];
    return value == correct;
}