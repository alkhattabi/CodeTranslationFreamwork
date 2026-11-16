#pragma once
#include <map>
#include <cmath>
#include <cstdlib>
#include "api.hpp"

int factor_signature(int n) {
    int value = std::abs(n) % 1500 + 2;
    std::map<int, int> factors = sp::factorint(value);
    int score = 0;
    for(auto& pair : factors) {
        score += pair.first * pair.second;
    }
    return score + 3 * factors.size();
}

#pragma once
#include <sympy/ntheory.h>

int solve(int n) {
    int value = std::abs(n) % 1500 + 2;
    int phi = int(sp::totient(value));
    int divisor_count = int(sp::divisor_count(value));
    return phi + 5 * divisor_count + factor_signature(n);
}

#pragma once
#include <map>
#include <cmath>
#include <cstdlib>
#include "api.hpp"

int number_strength(int n) {
    return solve(n);
}
