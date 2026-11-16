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


ORIGINAL PYTHON:
from packaging.version import Version
from utils import release_rank

def upgrade_cost(n: int) -> int:
    rank = release_rank(n)
    if rank < 0:
        return -1
    major, minor, patch = n // 10000, (n // 100) % 100, n % 100
    current = Version(f"{major}.{minor}.{patch}")
    required = Version("2.1.0")
    penalty = 40 if current < required else 0
    return rank * 25 + minor + patch // 5 + penalty


DEPENDENCY Utils.java:
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
