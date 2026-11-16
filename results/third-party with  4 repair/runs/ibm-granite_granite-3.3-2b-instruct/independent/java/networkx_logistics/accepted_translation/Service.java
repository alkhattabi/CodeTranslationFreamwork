public class Service {
    public static int disruption_score(int n) {
        int graph[][] = {{0, 1, 0, 1, 0},
                         {0, 0, 0, 0, 1},
                         {0, 0, 0, 1, 0},
                         {0, 0, 1, 0, 1},
                         {0, 0, 0, 1, 0}};

        int reachable = 0;
        int longest = 0;

        for (int i = 0; i < 6; i++) {
            if (graph[0][i] == 1) {
                reachable++;
            }
        }

        for (int i = 0; i < 6; i++) {
            longest = Math.max(longest, dfs(graph, i, -1));
        }

        if (n % 3 == 0) {
            graph[2][0] = 0;
        }
        if (n % 5 == 0) {
            graph[0][2] = 0;
        }

        return route_cost(n) + 3 * reachable + longest;
    }

    private static int dfs(int graph[][], int v, int parent) {
        int count = 1;
        for (int i = 0; i < 6; i++) {
            if (graph[v][i] == 1 && i!= parent) {
                count += dfs(graph, i, v);
            }
        }
        return count;
    }
}

Note: In Java, we don't have a direct equivalent to Python's networkx library. Instead, we use adjacency matrix representation for the graph. Also, Java doesn't have a built-in function for longest path in a directed graph like Python's nx.dag_longest_path_length, so we implement a depth-first search (DFS) to find the longest path.

Please replace 'route_cost' with its actual Java method implementation.
