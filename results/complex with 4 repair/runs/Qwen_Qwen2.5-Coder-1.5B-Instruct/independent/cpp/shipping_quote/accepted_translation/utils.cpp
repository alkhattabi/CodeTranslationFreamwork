#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function prototypes
int solve(int n);
int transport_cost(int n);

// Global declaration of weight_blocks function
int weight_blocks(int n);

// Implementation of weight_blocks function
int weight_blocks(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n > 10000) {
        n = 10000;
    }
    return (n + 499) / 500;
}
