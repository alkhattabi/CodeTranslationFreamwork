#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function prototypes
int day_of_year(int n);
int valid_date(int n);

// Global declaration of solve function
int solve(int n);

// Main function
int main() {
    // Example usage
    int result = solve(20230401); // April 1, 2023
    std::cout << "Result: " << result << std::endl;
    return 0;
}
