main.cpp

#include "api.hpp"

int solve(int n) {
    int renewed = renewal_date(n);
    int deadline = grace_period(n);
    if (renewed < 0 || deadline < 0) {
        return -1;
    }
    int y1, m1, d1;
    int y2, m2, d2;
    y1 = renewed / 10000;
    m1 = (renewed / 100) % 100;
    d1 = renewed % 100;
    y2 = deadline / 10000;
    m2 = (deadline / 100) % 100;
    d2 = deadline % 100;
    int days = (date(y2, m2, d2) - date(y1, m1, d1)).days;
    return days * 100 + d2;
}
