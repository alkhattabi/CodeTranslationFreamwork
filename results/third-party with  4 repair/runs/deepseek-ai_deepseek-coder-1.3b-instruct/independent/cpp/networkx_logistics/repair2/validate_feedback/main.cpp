#pragma once
#include <cmath>
#include <cstdlib>

int solve(int n) {
    int graph[5][5] = {
        {0, 3, 5, 1, 4},
        {3, 0, 1, 4, 2},
        {5, 1, 0, 2, 8},
        {1, 4, 2, 0, 6},
        {4, 2, 8, 6, 0}
    };

    int offset = std::abs(n) % 7;
    int total = graph[0][1] + graph[0][2] + offset;

    return total;
}
