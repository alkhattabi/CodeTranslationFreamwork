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
