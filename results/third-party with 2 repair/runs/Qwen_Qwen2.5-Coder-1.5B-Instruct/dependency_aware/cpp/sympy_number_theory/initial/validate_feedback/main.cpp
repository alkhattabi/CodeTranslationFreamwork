#pragma once
#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

// Helper function to calculate the number of divisors of a given number
int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= std::sqrt(n); ++i) {
        if (n % i == 0) {
            if (i == n / i) {
                count++;
            } else {
                count += 2;
            }
        }
    }
    return count;
}

// Helper function to calculate the sum of digits of a given number
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Helper function to calculate the number of prime factors of a given number
int countPrimeFactors(int n) {
    int count = 0;
    for (int i = 2; i <= std::sqrt(n); ++i) {
        while (n % i == 0) {
            count++;
            n /= i;
        }
    }
    if (n > 1) {
        count++;
    }
    return count;
}

// Main function to calculate the factor signature
int factor_signature(int n) {
    // Calculate the absolute value of n and take modulo 1500
    int value = std::abs(n) % 1500 + 2;

    // Calculate the number of divisors, sum of digits, and number of prime factors
    int divisors = countDivisors(value);
    int sum_digits = sumOfDigits(value);
    int prime_factors = countPrimeFactors(value);

    // Calculate the factor signature
    int score = sum_digits + 3 * prime_factors;

    return score;
}

int solve(int n) {
    return number_strength(n);
}

int number_strength(int n) {
    value = abs(n) % 1500 + 2;
    phi = int(factor_signature(value));
    divisor_count = int(count_divisors(value));
    return phi + 5 * divisor_count + factor_signature(n);
}
