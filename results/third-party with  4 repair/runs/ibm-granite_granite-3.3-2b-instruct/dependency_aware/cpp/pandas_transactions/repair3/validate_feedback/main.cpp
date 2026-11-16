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

int category_balance(int n) {
    n = std::max(-200, std::min(200, n));

    std::vector<std::pair<std::string, int>> frame = {
        {"A", n},
        {"B", 12},
        {"A", n / 2},
        {"C", -7},
        {"B", n % 9},
        {"C", 4},
        {"A", -n / 3}
    };

    std::map<std::string, int> sums;
    for (const auto& pair : frame) {
        sums[pair.first] += pair.second;
    }

    return 2 * sums["A"] + sums["B"] - sums["C"];
}

int rolling_alert(int n) {
    n = std::max(-200, std::min(200, n));

    std::vector<int> series = {
        n % 13,
        (n / 2) % 13,
        n % 17,
        std::abs(n) % 11,
        n % 7
    };

    std::rolling_window<int> rolling(3, 1);
    std::vector<int> rolling_sum;
    std::copy(series.begin(), series.end(), std::back_inserter(rolling_sum));
    rolling_sum.insert(rolling_sum.end(), series.begin(), series.end());

    int alerts = std::accumulate(rolling_sum.begin(), rolling_sum.end(), 0,
        [](int sum, int val) { return sum + (val >= 15? 1 : 0); });

    return alerts * 10 + category_balance(n) % 23;
}
