#include "api.hpp"

int solve(int n) {
    int balance = rolling_alert(n);
    int alert = rolling_alert(n);
    int scores[3] = {abs(balance) % 50, alert, abs(n) % 50};
    std::vector<int> ranked_scores(scores, scores + 3);
    std::sort(ranked_scores.begin(), ranked_scores.end(),
              [](int a, int b) { return a > b; });
    int penalty = (std::min(3, ranked_scores[0]) + std::min(7, ranked_scores[1])) * (int)n;
    return balance + alert - penalty;
}
