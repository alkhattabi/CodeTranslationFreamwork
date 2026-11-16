package com.example;

import org.jgrapht.graph.DefaultWeightedEdge;
import org.jgrapht.graph.SimpleWeightedGraph;
import org.jgrapht.alg.shortestpaths.DijkstraShortestPaths;

import java.util.List;

public class Main {

    public static int solve(int n) {
        SimpleWeightedGraph<Integer, DefaultWeightedEdge> graph = new SimpleWeightedGraph<>();
        int offset = Math.abs(n) % 7;
        graph.addEdge(0, 1, 3 + offset);
        graph.addEdge(0, 2, 5);
        graph.addEdge(1, 2, 1 + offset % 3);
        graph.addEdge(1, 3, 4);
        graph.addEdge(2, 3, 2 + offset % 2);
        graph.addEdge(3, 4, 6);
        graph.addEdge(2, 4, 8 + offset);

        DijkstraShortestPaths<Integer, DefaultWeightedEdge> dijkstra = new DijkstraShortestPaths<>(graph, 0);
        List<DefaultWeightedEdge> path = dijkstra.getPathTo(4);
        int total = path.stream().mapToInt(edge -> edge.getWeight()).sum();

        return total + disruptionScore(n) - routeCost(n);
    }

    // Example usage
    public static void main(String[] args) {
        System.out.println(solve(10));
    }
}
