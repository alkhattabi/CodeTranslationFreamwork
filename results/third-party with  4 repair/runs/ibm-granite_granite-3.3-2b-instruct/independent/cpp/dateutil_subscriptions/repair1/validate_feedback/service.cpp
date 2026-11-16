#include "api.hpp"

int grace_period(int n) {
    int renewed = solve(n);
    if (renewed < 0) {
        return -1;
    }
    int year = renewed / 10000;
    int month = (renewed / 100) % 100;
    int day = renewed % 100;
    int due = year + relativedelta(months=2, days=7).years + (month * 100) + day;
    return due;
}
