#include "api.hpp"

int main() {
    int n = -150; // replace with desired integer input
    int result = solve(n);
    return 0;
}

int solve(int n) {
    int balance = category_balance(n);
    int alert = rolling_alert(n);
    std::vector<int> scores = {std::abs(balance) % 50, alert, std::abs(n) % 50};
    std::sort(scores.begin(), scores.end(), std::greater<int>());
    int penalty = scores[0] * 7 + scores[1] * 3;
    return balance + alert - penalty;
}
