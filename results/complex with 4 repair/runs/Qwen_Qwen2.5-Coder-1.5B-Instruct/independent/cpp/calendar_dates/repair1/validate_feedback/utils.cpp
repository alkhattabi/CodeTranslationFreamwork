#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function prototypes
int solve(int n);
int day_of_year(int n);
bool is_leap_year(int year);

// Global declaration of valid_date function
extern "C" int valid_date(int n);

// Implementation of valid_date function
int valid_date(int n) {
    if (n < 10000101 || n > 99991231) {
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
    // Implementation of solve function
}

int day_of_year(int n) {
    // Implementation of day_of_year function
}

bool is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
