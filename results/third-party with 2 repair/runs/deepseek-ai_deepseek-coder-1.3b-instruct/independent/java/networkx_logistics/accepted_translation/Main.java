import java.util.*;
import java.lang.*;
import java.math.*;
import networkx.*;
import utils.*;
import service.*;

public class Main {
    public static int solve(int n) {
        Graph<Integer, Integer> graph = new Graph<>(Type.DIRECTED);
        int offset = Math.abs(n) % 7;
        graph.addEdge(0, 1, 3 + offset);
        graph.addEdge(0, 2, 5);
        graph.addEdge(1, 2, 1 + offset % 3);
        graph.addEdge(1, 3, 4);
        graph.addEdge(2, 3, 2 + offset % 2);
        graph.addEdge(3, 4, 6);
        graph.addEdge(2, 4, 8 + offset);
        MinimumSpanningTree<Integer, Integer> tree = graph.minimumSpanningTree();
        int total = tree.size();
        return total + disruption_score(n) - route_cost(n);
    }

    public static void main(String[] args) {
        System.out.println(solve(5));
    }
}
