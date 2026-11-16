public class Utils {
    public static int normalize(int n) {
        if (n < 0) {
            return -n;
        }
        return n;
    }
}

public class Service {
    public static int weighted(int n) {
        // implementation of weighted function
        return n * 2;
    }
}

public class Main {
    public static int solve(int n) {
        return Service.weighted(n) + Utils.normalize(n);
    }

    public static void main(String[] args) {
        System.out.println(solve(10));
    }
}
