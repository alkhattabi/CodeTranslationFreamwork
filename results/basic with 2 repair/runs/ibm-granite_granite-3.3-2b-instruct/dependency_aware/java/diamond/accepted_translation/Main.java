public class Main {
    public static int solve(int n) {
        return Service.weighted(n) + Utils.normalize(n);
    }
}
