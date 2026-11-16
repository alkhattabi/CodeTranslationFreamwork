import { route_cost } from "./utils.mjs";

export function disruption_score(n) {
  let graph = new Map();
  graph.set(0, new Set([1, 2]));
  graph.set(1, new Set([3]));
  graph.set(2, new Set([3, 5]));
  graph.set(3, new Set([4]));
  graph.set(4, new Set([5]));
  graph.set(5, new Set([6]));

  if (n % 3 === 0) {
    graph.get(2).delete(5);
  }

  if (n % 5 === 0) {
    graph.get(0).delete(2);
  }

  let reachable = Array.from(new Set([...graph.get(0)])).length;
  let longestPath = Math.max(...Object.values(graph));

  return route_cost(n) + 3 * reachable + longestPath;
}
