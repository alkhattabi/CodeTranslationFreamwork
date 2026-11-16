main.cpp

#include "api.hpp"

int solve(int n) {
    if (valid_date(n) == 0) {
        return -1;
    }
    int month = (n // 100) % 100;
    int quarter = (month - 1) / 3 + 1;
    return quarter * 1000 + day_of_year(n);
}

int day_of_year(int n) {
    if (solve(n) == 0) {
        return 0;
    }
    int year = n / 10000;
    int month = (n / 100) % 100;
    int day = n % 100;
    int total = day;
    int m = 1;
    while (m < month) {
        total += 31;
        if (m == 4 || m == 6 || m == 9 || m == 11) {
            total += 30;
        } else if (m == 2) {
            bool leap = (year % 4 == 0 && year % 100!= 0) || year % 400 == 0;
            total += leap? 29 : 28;
        }
        m++;
    }
    return total;
}

int main() {
    // No additional main function needed as this is a library function.
    return 0;
}
