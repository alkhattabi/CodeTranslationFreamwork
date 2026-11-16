```java
import java.util.HashMap;
import java.util.Map;

public class Main {
    public static int solve(int n) {
        Map<Integer, List<WeightedEdge>> graph = new HashMap<>();
        int offset = Math.abs(n) % 7;
        graph.put(0, Arrays.asList(
                new WeightedEdge(1, 3 + offset),
                new WeightedEdge(1, 5)
        ));
        graph.put(0, Arrays.asList(graph.get(0)));
        graph.put(1, Arrays.asList(
                new WeightedEdge(2, 1 + offset % 3),
                new WeightedEdge(1, 4)
        ));
        graph.put(2, Arrays.asList(
                new WeightedEdge(3, 2 + offset % 2),
                new WeightedEdge(2, 3),
                new WeightedEdge(3, 6)
        ));
        graph.put(3, Arrays.asList(
                new WeightedEdge(4, 8 + offset),
                new WeightedEdge(3, 7)
        ));
        graph.put(4, Arrays.asList(
                new WeightedEdge(5, 6),
                new WeightedEdge(4, 2 + offset % 2)
        ));
        graph.put(5, Arrays.asList(
                new WeightedEdge(6, 1 + offset % 3),
                new WeightedEdge(5, 15)
        ));
        graph.put(2, Arrays.asList(
                new WeightedEdge(4, 8 + offset)
        ));

        Graph tree = new Graph();
        tree.setEdges(graph.get(0));
        for (Map.Entry<Integer, List<WeightedEdge>> entry : graph.entrySet()) {
            if (entry.getKey()!= 0 && entry.getValue().size() > 0) {
                tree.setEdges(entry.getValue());
            }
        }

        int total = tree.size();
        return total + disruptionScore(n) - routeCost(n);
    }

    private static int disruptionScore(int n) {
        Graph graph = new Graph();
        graph.addEdge(0, 1);
        graph.addEdge(0, 2);
        graph.addEdge(1, 3);
        graph.addEdge(2, 3);
        graph.addEdge(3, 4);
        graph.addEdge(4, 5);
        graph.addEdge(2, 5);
        graph.addEdge(5, 6);

        if (n % 3 == 0) {
            graph.removeEdge(2, 5);
        }
        if (n % 5 == 0) {
            graph.removeEdge(0, 2);
        }

        int reachable = nx.getDescendants(graph, 0).size();
        int longest = nx.getLongestPathLength(graph);

        return routeCost(n) + 3 * reachable + longest;
    }

    private static int routeCost(int n) {
        int x = Math.abs(n) % 13;
        Graph graph = new DefaultGraph();
        graph.addWeightedEdge(0, 1, 3 + x % 3);
        graph.addWeightedEdge(0, 2, 5 + x % 4);
        graph.addWeightedEdge(1, 3, 4 + x % 2);
        graph.addWeightedEdge(1, 4, 7);
