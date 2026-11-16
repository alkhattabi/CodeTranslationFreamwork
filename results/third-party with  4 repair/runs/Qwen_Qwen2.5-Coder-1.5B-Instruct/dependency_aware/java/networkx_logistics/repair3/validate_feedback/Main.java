package com.example;

import org.jgrapht.graph.DirectedAcyclicGraph;
import org.jgrapht.graph.DefaultWeightedEdge;
import org.jgrapht.graph.SimpleDirectedWeightedGraph;

public class Main {

    public static int solve(int n) {
        DirectedAcyclicGraph<Integer, DefaultWeightedEdge<Integer>> graph = new SimpleDirectedWeightedGraph<>(DefaultWeightedEdge.class);
        graph.addVertex(0);
        graph.addVertex(1);
        graph.addVertex(2);
        graph.addVertex(3);
        graph.addVertex(4);
        graph.addVertex(5);
        graph.addVertex(6);

        graph.addEdge(0, 1, 3 + n % 3);
        graph.addEdge(0, 2, 5 + n % 4);
        graph.addEdge(1, 2, 1 + n % 3);
        graph.addEdge(1, 3, 4);
        graph.addEdge(2, 3, 2 + n % 2);
        graph.addEdge(3, 4, 6);
        graph.addEdge(2, 4, 8 + n % 3);
        graph.addEdge(3, 5, 6);
        graph.addEdge(4, 5, 2 + n % 4);
        graph.addEdge(5, 6, 1 + n % 2);
        graph.addEdge(2, 6, 15);

        int reachable = graph.vertexSet().stream().filter(v -> graph.outgoingEdgesOf(v).size() > 0).count();
        int longest = graph.getDAGShortestPathLength(0, 6, "weight");

        return routeCost(n) + 3 * reachable + longest;
    }

    // Assume this is a method from some external library
    private static int routeCost(int n) {
        // Implementation of routeCost method
        return 0; // Placeholder
    }
}
