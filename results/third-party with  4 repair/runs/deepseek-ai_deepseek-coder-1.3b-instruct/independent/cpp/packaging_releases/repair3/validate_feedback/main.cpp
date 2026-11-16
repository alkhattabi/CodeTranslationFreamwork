#pragma once
#include <cmath>
#include <string>
#include <cstdlib>

int solve(int n) {
    if (n < 0) {
        return -1;
    }
    int major, minor, patch;
    major = n / 10000;
    minor = (n / 100) % 100;
    patch = n % 100;
    std::string suffix = (patch % 4 == 0) ? "rc1" : "";
    std::string version = std::to_string(major) + "." + std::to_string(minor) + "." + std::to_string(patch) + suffix;
    std::string reference = "2.1.0";
    int in_range = (version >= reference) ? 1 : 0;
    int stable = (version < reference) ? 0 : 1;
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
