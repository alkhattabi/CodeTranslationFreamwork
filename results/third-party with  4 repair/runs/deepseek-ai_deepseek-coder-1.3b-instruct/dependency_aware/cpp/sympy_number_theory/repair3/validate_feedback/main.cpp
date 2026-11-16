#pragma once
#include <cmath>
#include <cstdlib>
#include <map>
#include <sympy/ntheory.h>

int factor_signature(int n) {
    int value = std::abs(n) % 1500 + 2;
    std::map<int, int> factors = sp::factorint(value);
    int score = 0;
    for(auto& pair : factors) {
        score += pair.first * pair.second;
    }
    return score + 3 * factors.size();
}

int number_strength(int n) {
    int value = std::abs(n) % 1500 + 2;
    int prime_bonus = sp::isprime(value) ? 50 : 0;
    int next_prime = sp::nextprime(value);
    return prime_bonus + next_prime;
}

int solve(int n) {
    int value = std::abs(n) % 1500 + 2;
    int prime_bonus = sp::isprime(value) ? 50 : 0;
    int next_prime = sp::nextprime(value);
    return number_strength(n) + prime_bonus + next_prime - factor_signature(n);
}


DEPENDENCY utils.cpp:
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

DEPENDENCY service.cpp:
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
