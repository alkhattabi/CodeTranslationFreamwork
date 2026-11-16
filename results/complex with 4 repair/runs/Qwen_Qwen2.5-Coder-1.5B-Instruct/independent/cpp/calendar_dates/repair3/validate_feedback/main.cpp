#pragma once
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function prototypes
int day_of_year(int n);
bool is_leap_year(int year);

// Global declaration of valid_date function
extern "C" int valid_date(int n);

// Implementation of day_of_year function
int day_of_year(int n) {
    if (!valid_date(n)) {
        return 0;
    }
    int year = n / 10000;
    int month = (n / 100) % 100;
    int day = n % 100;
    if (month < 1 || month > 12 || day < 1) {
        return 0;
    }
    int days = 31;
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    }
    if (month == 2) {
        bool leap = is_leap_year(year);
        days = leap ? 29 : 28;
    }
    return day <= days;
}

// Helper function implementations
int solve(int n) {
    if (valid_date(n) == 0) {
        return -1;
    }
    int month = (n / 100) % 100;
    int quarter = (month - 1) // 3 + 1
    return quarter * 1000 + day_of_year(n);
}

// Main function
int main() {
    // Example usage
    int result = solve(20230401); // April 1, 2023
    std::cout << "Result: " << result << std::endl;
    return 0;
}
