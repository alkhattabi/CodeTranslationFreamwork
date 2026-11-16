#include "api.hpp"

int solve(int n) {
    int value = abs(n) % 1500 + 2;
    int prime_bonus = 50 if (is_prime(value)) {
        return 50;
    } else {
        return 0;
    }
    int next_prime = next_prime(value);
    return number_strength(n) + prime_bonus + next_prime - factor_signature(n);
}
