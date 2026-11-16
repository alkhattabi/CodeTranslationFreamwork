#include "api.hpp"
#include <cmath>
#include <vector>
#include <algorithm>

int solve(int n) {
    int balance = category_balance(n);
    int alert = rolling_alert(n);
    std::vector<int> scores = {std::abs(balance) % 50, alert, std::abs(n) % 50};
    std::sort(scores.begin(), scores.end());
    int penalty = int(scores[0] * 7 + scores[1] * 3);
    return balance + alert - penalty;
}
