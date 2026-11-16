import packaging.specifiers.SpecifierSet;
import packaging.version.Version;
import utils.Utils;
import service.Service;

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
        SpecifierSet allowed = new SpecifierSet(">=1.5,<4.0");
        boolean inRange = allowed.contains(new Version(version));
        boolean stable = !new Version(version).isPrerelease();
        return Service.upgrade_cost(n) + 100 * inRange + 10 * stable + Utils.release_rank(n);
    }
}
