#include "api.hpp"

int day_of_year(int n) {
    if (!valid_date(n)) {
        return 0;
    }
    int year = n / 10000;
    int month = (n / 100) % 100;
    int day = n % 100;
    int total = day;
    int m = 1;
    while (m < month) {
        int days = 31;
        if (m == 4 || m == 6 || m == 9 || m == 11) {
            days = 30;
        }
        if (m == 2) {
            bool leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
            days = leap ? 29 : 28;
        }
        total += days;
        m += 1;
    }
    return total;
}
