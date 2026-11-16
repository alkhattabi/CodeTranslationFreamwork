#include "api.hpp"

int luhn_valid(int n) {
    if (n <= 0) {
        return 0;
    }
    int total = 0;
    bool double_digit = false;
    while (n > 0) {
        int digit = n % 10;
        if (double_digit) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        total += digit;
        double_digit = !double_digit;
        n /= 10;
    }
    return (total % 10 == 0) ? 1 : 0;
}
