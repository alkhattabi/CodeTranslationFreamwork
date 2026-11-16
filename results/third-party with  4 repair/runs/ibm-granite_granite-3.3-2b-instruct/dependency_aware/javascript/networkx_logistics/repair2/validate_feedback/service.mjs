// service.js
import { route_cost } from "./utils.js";

export function disruption_score(n) {
    const graph = {
        0: {1: 3 + Math.abs(n) % 3, 2: 5 + Math.abs(n) % 4},
        1: {3: 4 + Math.abs(n) % 2, 4: 7},
        2: {3: 1 + Math.abs(n) % 5, 4: 3 + Math.abs(n) % 3},
        3: {5: 6},
        4: {5: 2 + Math.abs(n) % 4},
        5: {6: 1 + Math.abs(n) % 2},
        6: {2: 15}
    };

    let reachable = 0;
    for (const neighbor of graph[0]) {
        if (neighbor in graph) {
            reachable++;
        }
    }

    let longest = 0;
    function dfs(current, visited, graph) {
        visited.add(current);
        longest = Math.max(longest, graph[current]);
        for (const neighbor of graph[current]) {
            if (!visited.has(neighbor)) {
                dfs(neighbor, visited, graph);
            }
        }
    }

    dfs(0, new Set(), graph);

    return route_cost(n) + 3 * reachable + longest;
}
