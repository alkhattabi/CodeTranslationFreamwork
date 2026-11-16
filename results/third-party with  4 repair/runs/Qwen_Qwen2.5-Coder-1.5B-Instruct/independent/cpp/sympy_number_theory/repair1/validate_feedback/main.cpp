#pragma once
#include <iostream>
#include <cmath>
#include <cstdlib>

// Helper function prototypes
int number_strength(int n);
int factor_signature(int n);

// Main function
int solve(int n);

// Global declaration of sympy's isprime function
extern "C" {
    int isprime(int x);
}

// Global declaration of sympy's nextprime function
extern "C" {
    int nextprime(int x);
}
