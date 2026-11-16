#pragma once
#include <cmath>
#include <cstdlib>
#include "api.hpp"

int solve(int n) {
    // Implementation of solve function
    // This function is not provided in the question
    // You need to implement it according to your needs
    return 0;
}

int number_strength(int n) {
    int value = std::abs(n) % 1500 + 2;
    int phi = static_cast<int>(sp::totient(value));
    int divisor_count = static_cast<int>(sp::divisor_count(value));
    return phi + 5 * divisor_count + factor_signature(n);
}


#pragma once
#include <map>
#include <cstdlib>

namespace sp {
    int totient(int value);
    int divisor_count(int value);
}

int factor_signature(int n) {
    std::map<int, int> factors = sp::factorint(n);
    return factors.size();
}

int sp::totient(int value) {
    int result = value;
    for (int i = 2; i * i <= value; ++i) {
        if (value % i == 0) {
            while (value % i == 0) {
                value /= i;
            }
            result -= result / i;
        }
    }
    if (value > 1) {
        result -= result / value;
    }
    return result;
}

int sp::divisor_count(int value) {
    int result = 1;
    for (int i = 2; i * i <= value; ++i) {
        if (value % i == 0) {
            int count = 0;
            while (value % i == 0) {
                value /= i;
                count++;
            }
            result *= (count + 1);
        }
    }
    if (value > 1) {
        result *= 2;
    }
    return result;
}
