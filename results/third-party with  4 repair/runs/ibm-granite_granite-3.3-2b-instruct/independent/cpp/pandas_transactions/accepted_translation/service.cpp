#include "api.hpp"

int rolling_alert(int n) {
    n = std::max(-200, std::min(200, n));
    std::vector<int> series = {n % 13, (n / 2) % 13, n % 17, std::abs(n) % 11, n % 7};
    std::rolling_sum rolling;
    rolling.resize(series.size());
    for (int i = 0; i < series.size(); ++i) {
        rolling[i] = 0;
        if (i >= 1) {
            rolling[i] += series[i - 1];
        }
        if (i >= 2) {
            rolling[i] += series[i - 2];
        }
    }
    int alerts = std::accumulate(rolling.begin(), rolling.end(), 0, [](int sum, int val) { return sum + (val >= 15? 1 : 0); });
    return (alerts * 10) + category_balance(n) % 23;
}
