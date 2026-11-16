#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include "api.hpp"

int solve(int n) {
    // Your solve function implementation here
    return 0;
}

int disruption_score(int n) {
    int graph[7][7] = {
        {0, 1, 0, 0, 0, 0, 0},
        {1, 0, 1, 0, 0, 0, 0},
        {0, 1, 0, 1, 0, 0, 0},
        {0, 0, 1, 0, 1, 0, 0},
        {0, 0, 0, 1, 0, 1, 0},
        {0, 0, 0, 0, 1, 0, 1},
        {0, 0, 0, 0, 0, 1, 0}
    };

    int reachable = 0;
    int longest = 0;

    for (int i = 0; i < 7; i++) {
        if (graph[n][i] == 1) {
            reachable++;
            for (int j = 0; j < 7; j++) {
                if (graph[i][j] == 1) {
                    longest = std::max(longest, route_cost(j));
                }
            }
        }
    }

    return route_cost(n) + 3 * reachable + longest;
}

int route_cost(int n) {
    // Your route_cost function implementation here
    return 0;
}
