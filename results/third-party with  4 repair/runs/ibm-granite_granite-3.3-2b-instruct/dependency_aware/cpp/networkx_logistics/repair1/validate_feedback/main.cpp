#include "api.hpp"

int solve(int n) {
    api::DiGraph graph;
    int offset = abs(n) % 7;
    graph.add_weighted_edges_from({
        {0, 1, 3 + offset},
        {0, 2, 5},
        {1, 2, 1 + offset % 3},
        {1, 3, 4},
        {2, 3, 2 + offset % 2},
        {3, 4, 6},
        {2, 4, 8 + offset}
    });
    api::MinimumSpanningTree tree(graph);
    return tree.size() + disruption_score(n) - route_cost(n);
}
