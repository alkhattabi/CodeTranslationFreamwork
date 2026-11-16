#pragma once
#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

// Helper function to calculate the shortest path length using Dijkstra's algorithm
template<typename T>
T dijkstra(const std::vector<std::vector<T>>& graph, int start, int end) {
    int num_nodes = graph.size();
    std::vector<T> distances(num_nodes, std::numeric_limits<T>::max());
    distances[start] = 0;

    std::priority_queue<std::pair<T, int>, std::vector<std::pair<T, int>>, std::greater<>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        T current_distance = pq.top().first;
        int current_node = pq.top().second;
        pq.pop();

        if (current_distance > distances[current_node]) continue;

        for (int neighbor = 0; neighbor < num_nodes; ++neighbor) {
            T edge_weight = graph[current_node][neighbor];
            if (edge_weight == 0) continue;

            T new_distance = current_distance + edge_weight;
            if (new_distance < distances[neighbor]) {
                distances[neighbor] = new_distance;
                pq.push({new_distance, neighbor});
            }
        }
    }

    return distances[end];
}

// Route cost calculation function
int route_cost(int n) {
    int x = std::abs(n) % 13;
    std::vector<std::vector<int>> graph = {
        {0, 1, 3 + x % 3}, {0, 2, 5 + x % 4},
        {1, 3, 4 + x % 2}, {1, 4, 7},
        {2, 3, 1 + x % 5}, {2, 4, 3 + x % 3},
        {3, 5, 6}, {4, 5, 2 + x % 4},
        {5, 6, 1 + x % 2}, {2, 6, 15}
    };

    return dijkstra(graph, 0, 6);
}
