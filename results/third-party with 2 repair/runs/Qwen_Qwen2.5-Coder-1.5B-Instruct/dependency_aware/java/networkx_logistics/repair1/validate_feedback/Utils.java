package com.example;

import org.jgrapht.graph.DefaultWeightedEdge;
import org.jgrapht.graph.SimpleDirectedWeightedGraph;

public class Utils {

    public static int routeCost(int n) {
        int x = Math.abs(n) % 13;
        SimpleDirectedWeightedGraph<Integer, Integer> graph = new SimpleDirectedWeightedGraph<>(DefaultWeightedEdge.class);
        graph.addEdge(0, 1, 3 + x % 3);
        graph.addEdge(0, 2, 5 + x % 4);
        graph.addEdge(1, 3, 4 + x % 2);
        graph.addEdge(1, 4, 7);
        graph.addEdge(2, 3, 1 + x % 5);
        graph.addEdge(2, 4, 3 + x % 3);
        graph.addEdge(3, 5, 6);
        graph.addEdge(4, 5, 2 + x % 4);
        graph.addEdge(5, 6, 1 + x % 2);
        graph.addEdge(2, 6, 15);
        return (int) graph.getShortestPathLength(0, 6, "weight");
    }

    // Additional static methods can be added here if needed
}
