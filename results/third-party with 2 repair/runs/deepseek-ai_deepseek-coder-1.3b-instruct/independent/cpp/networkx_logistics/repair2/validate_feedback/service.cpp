#pragma once
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include "api.hpp"

int solve(int n) {
    // Your solve function implementation here
    return 0;
}

int disruption_score(int n) {
    std::unordered_map<int, std::unordered_map<int, int>> graph = {
        {{0, 1}, {(3 + (n % 3))}},
        {{0, 2}, {(5 + (n % 4))}},
        {{1, 3}, {(4 + (n % 2))}},
        {{1, 4}, {7}},
        {{2, 3}, {(1 + (n % 5))}},
        {{2, 4}, {(3 + (n % 3))}},
        {{3, 5}, {6}},
        {{4, 5}, {(2 + (n % 4))}},
        {{5, 6}, {(1 + (n % 2))}},
        {{2, 6}, {15}}
    };

    int reachable = 0;
    int longest = 0;

    for (auto &[node1, edges] : graph) {
        if (node1 == n) continue;
        for (auto &[node2, cost] : edges) {
            if (node2 == n) continue;
            longest = std::max(longest, route_cost(node2));
        }
        reachable++;
    }

    return route_cost(n) + 3 * reachable + longest;
}

int route_cost(int n) {
    // Your route_cost function implementation here
    return 0;
}
