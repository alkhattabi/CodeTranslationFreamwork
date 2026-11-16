package utils;

public class Utils {
    public static int release_rank(int n) {
        if (n < 0) {
            return -1;
        }
        int major = n / 10000;
        int minor = (n / 100) % 100;
        int patch = n % 100;
        String suffix = (patch % 4 == 0) ? "rc1" : "";
        String version = major + "." + minor + "." + patch + suffix;
        String reference = "2.1.0";
        if (new Version(version).compareTo(new Version(reference)) < 0) {
            return 1;
        } else if (new Version(version).compareTo(new Version(reference)) == 0) {
            return 2;
        } else {
            return 3;
        }
    }
}
