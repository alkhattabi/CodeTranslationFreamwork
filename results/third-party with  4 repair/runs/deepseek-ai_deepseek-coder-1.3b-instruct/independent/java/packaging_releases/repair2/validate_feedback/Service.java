package service;

public class Service {
    public static int upgrade_cost(int n) {
        int rank = release_rank(n);
        if (rank < 0) {
            return -1;
        }
        int major = n / 10000;
        int minor = (n / 100) % 100;
        int patch = n % 100;
        Version current = new Version(major, minor, patch);
        Version required = new Version("2.1.0");
        int penalty = 0;
        if (current.compareTo(required) < 0) {
            penalty = 40;
        }
        return rank * 25 + minor + patch / 5 + penalty;
    }

    private static int release_rank(int n) {
        // Implementation of release_rank method
        // This method should be implemented in the Service class
        // as it is a static method of the Service class
        return -1;
    }
}
