// main.mjs
export function solve(n) {
    const graph = new Map();
    let offset = Math.abs(n) % 7;
    graph.set(0, [1, 2]);
    graph.get(0).forEach((neighbor) => {
        graph.set(neighbor, [0, 2]);
    });
    graph.set(1, [0, 2, 3]);
    graph.get(1).forEach((neighbor) => {
        graph.set(neighbor, [0, 1, 3]);
    });
    graph.set(2, [0, 1, 3, 4]);
    graph.get(2).forEach((neighbor) => {
        graph.set(neighbor, [0, 1, 2, 4]);
    });
    graph.set(3, [1, 2, 4]);
    graph.get(3).forEach((neighbor) => {
        graph.set(neighbor, [1, 2, 3]);
    });
    graph.set(4, [2, 3, 4]);
    graph.get(4).forEach((neighbor) => {
        graph.set(neighbor, [2, 3, 4]);
    });

    let total = 0;
    for (const [node, neighbors] of graph.entries()) {
        total += neighbors.reduce((sum, neighbor) => sum + graph.get(neighbor)[0], 0);
    }
    total -= disruptionScore(n) - routeCost(n);
    return total;
}
