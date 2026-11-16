package com.example;

public class Service {
    public static int disruption_score(int n) {
        Networkx.Graph graph = new Networkx.DiGraph();
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

        long reachable = Networkx.descendants(graph, 0).size();
        long longest = Networkx.dagLongestPathLength(graph);
        return routeCost(n) + 3 * reachable + (longest / 1L);
    }
}
