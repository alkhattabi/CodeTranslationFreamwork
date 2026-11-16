#include "api.hpp"

int renewal_date(int n) {
    if (n < 19000101 || n > 20991231) {
        return -1;
    }
    int year = n / 10000;
    int month = (n / 100) % 100;
    int day = n % 100;
    try {
        date start_date(year, month, day);
    } catch (...) {
        return -1;
    }
    date end_date = start_date + relativedelta(months=1);
    return end_date.year() * 10000 + end_date.month() * 100 + end_date.day();
}
