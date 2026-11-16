#include "api.hpp"

int solve(int n) {
    if (n < 0) {
        return -1;
    }
    int major = n / 10000;
    int minor = (n / 100) % 100;
    int patch = n % 100;
    std::string suffix = (patch % 4 == 0)? "rc1" : "";
    api::Version version(major, minor, patch, suffix);
    api::Version required("2.1.0");
    int penalty = 40;
    if (version < required) {
        penalty = 40;
    }
    int rank = release_rank(n);
    return upgrade_cost(n) + 100 * (version >= required) + 10 * (version == required) + rank * 25 + minor + patch / 5 + penalty;
}
