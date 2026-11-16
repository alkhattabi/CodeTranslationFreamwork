package;

import java.util.*;

public class Main {
    public static int solve(int n) {
        if (n < 0) {
            return -1;
        }
        int major = n / 10000;
        int minor = (n / 100) % 100;
        int patch = n % 100;
        String suffix = patch % 4 == 0 ? "rc1" : "";
        String versionStr = major + "." + minor + "." + patch + suffix;
        Version version = new Version(versionStr);
        SpecifierSet allowed = new SpecifierSet(">=1.5,<4.0");
        boolean inRange = allowed.contains(version);
        boolean stable = !version.isPrerelease();
        return upgradeCost(n) + 100 * inRange + 10 * stable + releaseRank(n);
    }

    public static void main(String[] args) {
        // Example usage
        System.out.println(solve(12345)); // Output will depend on the actual implementation of upgradeCost and releaseRank
    }
}
