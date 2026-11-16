#include "api.hpp"

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
