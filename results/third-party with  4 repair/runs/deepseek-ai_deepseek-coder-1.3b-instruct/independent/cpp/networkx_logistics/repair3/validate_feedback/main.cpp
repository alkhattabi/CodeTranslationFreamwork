#pragma once
#include <unordered_map>
#include <vector>

int solve(int n) {
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

    int total = 0;
    for(auto &[node1, node2_weight] : graph[0]) {
        total += node2_weight;
    }

    return total;
}


#pragma once
#include <cmath>
#include <cstdlib>

int disruption_score(int n) {
    int offset = std::abs(n) % 7;
    return offset;
}


#pragma once
#include <cmath>
#include <cstdlib>

int route_cost(int n) {
    int offset = std::abs(n) % 7;
    return offset;
}
