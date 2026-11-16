#include "api.hpp"

int rolling_alert(int n) {
    n = std::max(-200, std::min(200, n));
    std::vector<int> series = {n % 13, (n / 2) % 13, n % 17, std::abs(n) % 11, n % 7};
    std::vector<int> rolling(series.size());
    rolling[0] = series[0];
    for (int i = 1; i < series.size(); ++i) {
        rolling[i] = rolling[i - 1] + series[i - 1];
    }
    int alerts = 0;
    for (int i = 1; i < rolling.size(); ++i) {
        if (rolling[i] >= 15) {
            alerts++;
        }
    }
    return (alerts * 10) + category_balance(n) % 23;
}
