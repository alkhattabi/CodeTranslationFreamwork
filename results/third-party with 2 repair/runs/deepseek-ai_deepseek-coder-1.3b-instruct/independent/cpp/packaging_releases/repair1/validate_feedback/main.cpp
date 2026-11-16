#include <cmath>

int solve(int n) {
    if (n < 0) {
        return -1;
    }
    int major, minor, patch;
    major = n / 10000;
    minor = (n / 100) % 100;
    patch = n % 100;
    int suffix = (patch % 4 == 0) ? 1 : 0;
    int version = major * 10000 + minor * 100 + patch + suffix;
    int in_range = (version >= 15000 && version < 40000) ? 1 : 0;
    int stable = (version >= 10000 && version < 15000) ? 1 : 0;
    return upgrade_cost(n) + 100 * in_range + 10 * stable + release_rank(n);
}

int upgrade_cost(int n) {
    // Implementation of upgrade_cost function
    return 0;
}

int release_rank(int n) {
    // Implementation of release_rank function
    return 0;
}
