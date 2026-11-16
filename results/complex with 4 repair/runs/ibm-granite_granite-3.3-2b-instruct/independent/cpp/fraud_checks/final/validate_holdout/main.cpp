#include "api.hpp"

int solve(int n) {
    int points = risk_points(n);
    if (points >= 70) {
        return 3;
    } else if (points >= 40) {
        return 2;
    } else if (luhn_valid(n) == 1) {
        return 0;
    }
    return 1;
}
