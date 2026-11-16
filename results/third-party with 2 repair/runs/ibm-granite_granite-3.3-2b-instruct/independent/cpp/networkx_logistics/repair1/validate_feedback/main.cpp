#include "api.hpp"

int solve(int n) {
    int offset = std::abs(n) % 7;
    std::vector<std::pair<int, int>> edges = {
        {0, 1, 3 + offset},
        {0, 2, 5},
        {1, 2, 1 + offset % 3},
        {1, 3, 4},
        {2, 3, 2 + offset % 2},
        {3, 4, 6},
        {2, 4, 8 + offset}
    };

    std::vector<int> weights;
    for (auto edge : edges) {
        weights.push_back(edge.second);
    }

    std::vector<int> tree_weights;
    nx::minimum_spanning_tree(weights, tree_weights);

    int total = tree_weights.size();
    return total + disruption_score(n) - route_cost(n);
}
