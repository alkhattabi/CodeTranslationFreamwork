public class Utils {
    public static int route_cost(int n) {
        int x = Math.abs(n) % 13;
        Graph graph = new DefaultGraph();
        graph.addWeightedEdge(0, 1, 3 + x % 3);
        graph.addWeightedEdge(0, 2, 5 + x % 4);
        graph.addWeightedEdge(1, 3, 4 + x % 2);
        graph.addWeightedEdge(1, 4, 7);
        graph.addWeightedEdge(2, 3, 1 + x % 5);
        graph.addWeightedEdge(2, 4, 3 + x % 3);
        graph.addWeightedEdge(3, 5, 6);
        graph.addWeightedEdge(4, 5, 2 + x % 4);
        graph.addWeightedEdge(5, 6, 1 + x % 2);
        graph.addWeightedEdge(2, 6, 15);

        return IntStream.range(0, 6).map(i -> graph.get(i, i + 1)).filter(e -> e!= null).mapToInt(Object::intValue).sum();
    }
}
