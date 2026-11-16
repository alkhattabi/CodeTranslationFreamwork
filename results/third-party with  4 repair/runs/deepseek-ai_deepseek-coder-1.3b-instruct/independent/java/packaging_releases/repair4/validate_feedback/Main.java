public class Main {
    public static int solve(int n) {
        if (n < 0) {
            return -1;
        }
        int major = n / 10000;
        int minor = (n / 100) % 100;
        int patch = n % 100;
        String suffix = (patch % 4 == 0) ? "rc1" : "";
        String version = major + "." + minor + "." + patch + suffix;
        if (version.compareTo("1.5.0") >= 0 && version.compareTo("3.99.99") < 0) {
            return upgradeCost(n) + 100 * 1 + 10 * 0 + releaseRank(n);
        } else {
            return upgradeCost(n) + 100 * 0 + 10 * 1 + releaseRank(n);
        }
    }

    // Other static methods of their class
}
