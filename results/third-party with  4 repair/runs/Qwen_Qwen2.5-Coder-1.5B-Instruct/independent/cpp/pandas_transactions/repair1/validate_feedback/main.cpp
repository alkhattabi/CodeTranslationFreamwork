#include "api.hpp"

int rolling_alert(int n) {
    // Implementation of rolling_alert function
    // ...
}

int category_balance(int n) {
    // Implementation of category_balance function
    // ...
}

int solve(int n) {
    int balance = category_balance(n);
    int alert = rolling_alert(n);
    std::vector<int> scores = {std::abs(balance) % 50, alert, std::abs(n) % 50};
    std::sort(scores.begin(), scores.end());
    int rank1 = scores[0];
    int rank2 = scores[1];
    int penalty = rank1 * 7 + rank2 * 3;
    return balance + alert - penalty;
}
