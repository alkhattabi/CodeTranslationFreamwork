import { DiGraph } from 'graphlib';
import { route_cost } from './utils.mjs';

function disruption_score(n) {
  const graph = new DiGraph();
  graph.addEdgesFrom([[0, 1], [0, 2], [1, 3], [2, 3], [3, 4], [4, 5], [2, 5], [5, 6]]);
  if (n % 3 === 0) {
    graph.removeEdge(2, 5);
  }
  if (n % 5 === 0) {
    graph.removeEdge(0, 2);
  }
  const reachable = Array.from(graph.descendants(0)).length;
  const longest = Array.from(graph.dagLongestPath()).length;
  return route_cost(n) + 3 * reachable + longest;
}

export function solve(n) {
  const graph = new DiGraph();
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
  const tree = graph.minimumSpanningTree({weight: 'weight'});
  const total = Number(tree.size({weight: 'weight'}));
  return total + disruption_score(n) - route_cost(n);
}
