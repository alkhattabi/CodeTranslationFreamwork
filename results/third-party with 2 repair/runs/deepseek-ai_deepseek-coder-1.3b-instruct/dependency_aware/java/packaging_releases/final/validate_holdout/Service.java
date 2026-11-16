public class Service {
    public static int upgrade_cost(int n) {
        int rank = Utils.release_rank(n);
        if (rank == -1) {
            return -1;
        }
        int major = n / 10000;
        int minor = (n / 100) % 100;
        int patch = n % 100;
        String suffix = (patch % 4 == 0) ? "rc1" : "";
        String version = major + "." + minor + "." + patch + suffix;
        String reference = "2.1.0";
        int penalty = 0;
        if (new Version(version).compareTo(new Version(reference)) < 0) {
            penalty = 40;
        }
        return rank * 25 + minor + patch / 5 + penalty;
    }
}
