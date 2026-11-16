// service.mjs
import { routeCost } from "./utils.mjs";

export function disruption_score(n) {
    const graph = new Map();
    graph.set(0, [1, 2]);
    graph.set(1, [3, 4]);
    graph.set(2, [3, 4, 6]);
    graph.set(3, [5]);
    graph.set(4, [5]);
    graph.set(5, [6]);
    graph.set(6, []);

    if (n % 3 === 0) {
        graph.delete(2);
    }
    if (n % 5 === 0) {
        graph.delete(0);
    }
    const reachable = graph.size;
    const longest = graph.size > 0 ? graph.keys().next().value : 0;
    return routeCost(n) + 3 * reachable + parseInt(longest);
}
