public class Service {
    public static int upgrade_cost(int n) {
        int rank = Utils.release_rank(n);
        if (rank < 0) {
            return -1;
        }
        int major = n / 10000;
        int minor = (n / 100) % 100;
        int patch = n % 100;
        String suffix = patch % 4 == 0? "rc1" : "";
        Version currentVersion = new Version(String.format("%d.%d.%d%s", major, minor, patch, suffix));
        Version requiredVersion = new Version("2.1.0");
        int penalty = currentVersion.compareTo(requiredVersion) < 0? 40 : 0;
        return rank * 25 + minor + patch / 5 + penalty;
    }
}

public class Utils {
    public static int release_rank(int n) {
        if (n < 0) {
            return -1;
        }
        int major = n / 10000;
        int minor = (n / 100) % 100;
        int patch = n % 100;
        String suffix = patch % 4 == 0? "rc1" : "";
        Version version = new Version(String.format("%d.%d.%d%s", major, minor, patch, suffix));
        Version reference = new Version("2.1.0");
        if (version.compareTo(reference) < 0) {
            return 1;
        } else if (version.equals(reference)) {
            return 2;
        } else {
            return 3;
        }
    }
}

Note: The Version class from the packaging library in Python is not directly available in Java's standard library. You would need to use a third-party library like Apache Commons Lang or create a custom Version class. Here, I've assumed a custom Version class exists.
