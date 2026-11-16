#pragma once
#include <cmath>
#include <cstdlib>
#include <unordered_map>
#include <queue>
#include <vector>
#include "api.hpp"

int route_cost(int n) {
    n = std::abs(n);
    std::unordered_map<int, std::unordered_map<int, int>> graph = {
        {{0, 1}, {3 + (n % 3)}},
        {{0, 2}, {5 + (n % 4)}},
        {{1, 3}, {4 + (n % 2)}},
        {{1, 4}, {7}},
        {{2, 3}, {1 + (n % 5)}},
        {{2, 4}, {3 + (n % 3)}},
        {{3, 5}, {6}},
        {{4, 5}, {2 + (n % 4)}},
        {{5, 6}, {1 + (n % 2)}},
        {{2, 6}, {15}}
    };

    std::queue<std::pair<int, int>> q;
    q.push({0, 6});
    std::unordered_map<int, bool> visited;
    std::unordered_map<int, int> dist;
    while (!q.empty()) {
        auto [node, cost] = q.front();
        q.pop();
        if (visited[node]) continue;
        visited[node] = true;
        dist[node] = cost;
        for (auto& [next, next_cost] : graph[node]) {
            if (dist[next] > dist[node] + next_cost) {
                q.push({next, dist[node] + next_cost});
            }
        }
    }
    return dist[6];
}
