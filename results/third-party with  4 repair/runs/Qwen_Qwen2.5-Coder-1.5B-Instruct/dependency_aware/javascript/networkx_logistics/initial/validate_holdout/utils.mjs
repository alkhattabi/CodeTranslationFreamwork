export function route_cost(n) {
    const absN = Math.abs(n);
    const modN = absN % 13;
    const graph = new Map();
    graph.set(0, [1, 2]);
    graph.set(1, [3, 4]);
    graph.set(2, [3, 4, 6]);
    graph.set(3, [5]);
    graph.set(4, [5]);
    graph.set(5, [6]);
    graph.set(6, []);
    let shortestPathLength = Infinity;

    for (let i = 0; i < 13; i++) {
        const pathLength = calculateShortestPathLength(modN + i, graph);
        if (pathLength < shortestPathLength) {
            shortestPathLength = pathLength;
        }
    }

    return shortestPathLength;
}

function calculateShortestPathLength(node, graph) {
    if (!graph.has(node)) {
        return Infinity;
    }

    let minDistance = Infinity;
    for (const neighbor of graph.get(node)) {
        const distance = calculateShortestPathLength(neighbor, graph);
        if (distance !== Infinity && distance + 1 < minDistance) {
            minDistance = distance + 1;
        }
    }

    return minDistance;
}
