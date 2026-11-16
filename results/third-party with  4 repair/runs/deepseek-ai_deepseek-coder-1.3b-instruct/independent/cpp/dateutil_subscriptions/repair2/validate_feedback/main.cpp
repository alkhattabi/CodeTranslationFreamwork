#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

int solve(int n) {
    int renewed = renewal_date(n);
    int deadline = grace_period(n);
    if (renewed < 0 || deadline < 0) {
        return -1;
    }
    int y1, m1, d1;
    y1 = renewed / 10000;
    m1 = (renewed / 100) % 100;
    d1 = renewed % 100;
    int y2, m2, d2;
    y2 = deadline / 10000;
    m2 = (deadline / 100) % 100;
    d2 = deadline % 100;
    std::time_t t1 = std::mktime(std::tm{y1, m1, d1, 0, 0, 0, 0, 0, 0});
    std::time_t t2 = std::mktime(std::tm{y2, m2, d2, 0, 0, 0, 0, 0, 0});
    int days = std::difftime(t2, t1);
    return days * 100 + d2;
}
