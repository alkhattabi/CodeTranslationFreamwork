#pragma once
#include <vector>
#include <cmath>
#include <cstdlib>

// Helper function to calculate the number of days in a given month
int days_in_month(int year, int month) {
    if (month == 2 && is_leap_year(year)) {
        return 29;
    }
    return std::vector<int>({31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31})[month - 1];
}

// Helper function to check if a year is a leap year
bool is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Helper function to calculate the number of days from January 1st to a given date
int days_from_jan_1st(int year, int month, int day) {
    int total_days = 0;
    for (int i = 1; i < month; ++i) {
        total_days += days_in_month(year, i);
    }
    total_days += day;
    return total_days;
}

// Main function to calculate the renewal date
int renewal_date(int n) {
    if (n < 19000101 || n > 20991231) {
        return -1;
    }
    int year = n / 10000;
    int month = (n / 100) % 100;
    int day = n % 100;

    // Calculate the number of days from January 1st to the given date
    int days_to_renewal = days_from_jan_1st(year, month, day);

    // Add one month to get the renewal date
    int renewal_day = (days_to_renewal + 1) % days_in_month(year, month + 1);
    int renewal_month = (month + 1) % 12;
    int renewal_year = year;

    // Adjust for the case where the renewal date would be February 29th on a non-leap year
    if (renewal_day == 0 && renewal_month == 2 && !is_leap_year(renewal_year)) {
        renewal_day = 28;
        renewal_month--;
    }

    // Ensure the renewal date is within the valid range
    if (renewal_month == 0) {
        renewal_month = 12;
        renewal_year--;
    }

    return renewal_year * 10000 + renewal_month * 100 + renewal_day;
}
