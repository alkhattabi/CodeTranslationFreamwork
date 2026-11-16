#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <numeric>
#include <string>
#include <cassert>

// Helper function to calculate the sum of amounts for each category
int calculate_category_sum(const std::vector<int>& amounts) {
    int sum_A = 0;
    int sum_B = 0;
    int sum_C = 0;

    for (int amount : amounts) {
        if (amount >= 0) {
            if (amount % 3 == 0) {
                sum_A += amount;
            } else if (amount % 3 == 1) {
                sum_B += amount;
            } else {
                sum_C += amount;
            }
        } else {
            if (-amount % 3 == 0) {
                sum_A -= amount;
            } else if (-amount % 3 == 1) {
                sum_B -= amount;
            } else {
                sum_C -= amount;
            }
        }
    }

    return sum_A + sum_B - sum_C;
}

// Function to calculate the category balance based on the given input
int category_balance(int n) {
    // Ensure the input is within the valid range
    n = std::max(-200, std::min(200, n));

    // Create a vector with the given amounts
    std::vector<int> amounts = {n, 12, n / 2, -7, n % 9, 4, -n / 3};

    // Calculate the total sum of amounts for each category
    int total_sum = calculate_category_sum(amounts);

    // Return twice the sum of amounts for category A minus the sum of amounts for categories B and C
    return 2 * total_sum - calculate_category_sum({0, 0, 0});
}
