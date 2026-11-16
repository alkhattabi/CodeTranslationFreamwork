// main.mjs
import { disruption_score } from "./service.mjs";
import { route_cost } from "./utils.mjs";

export function solve(n) {
    const graph = new (require("networkx").Graph)();
    const offset = Math.abs(n) % 7;
    graph.addWeightedEdgesFrom([
        [0, 1, 3 + offset],
        [0, 2, 5],
        [1, 2, 1 + offset % 3],
        [1, 3, 4],
        [2, 3, 2 + offset % 2],
        [3, 4, 6],
        [2, 4, 8 + offset]
    ]);
    const tree = graph.minimumSpanningTree({ weight: "weight" });
    const total = Math.floor(tree.size({ weight: "weight" }));
    return total + disruption_score(n) - route_cost(n);
}
