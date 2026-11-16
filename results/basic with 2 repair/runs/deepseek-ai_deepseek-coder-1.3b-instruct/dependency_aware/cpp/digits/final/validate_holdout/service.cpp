#pragma once
#include "api.hpp"

int score_digits(int n) {
    return digit_sum(n) * 3;
}
