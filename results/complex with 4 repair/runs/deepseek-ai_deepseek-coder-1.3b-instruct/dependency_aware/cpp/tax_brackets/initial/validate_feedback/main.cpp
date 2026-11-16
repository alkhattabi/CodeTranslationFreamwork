#include "api.hpp"

int solve(int n) {
    int base = taxable_income(n);
    int tax = calculate_tax(n);
    int credit = 0;

    if (base > 0 && base <= 2500) {
        credit = 100;
    } else if (base > 2500 && base <= 5000) {
        credit = 200;
    } else if (base > 5000 && base <= 10000) {
        credit = 300;
    } else if (base > 10000) {
        credit = 400;
    }

    int payable = tax - credit;
    if (payable < 0) {
        payable = 0;
    }

    if (base > 10000) {
        payable = payable * 2 / 100;
    }

    return payable;
}
