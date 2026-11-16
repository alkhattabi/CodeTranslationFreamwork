#include "api.hpp"
#include <algorithm>
#include <cmath>
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
    if (version < reference) {
        return 1;
    }
    if (version == reference) {
        return 2;
    }
    return 3;
}

int upgrade_cost(int n) {
    int rank = release_rank(n);
    if (rank < 0) {
        return -1;
    }
    int major, minor, patch;
    major = n / 10000;
    minor = (n / 100) % 100;
    patch = n % 100;
    std::string suffix = (patch % 4 == 0) ? "rc1" : "";
    std::string version = std::to_string(major) + "." + std::to_string(minor) + "." + std::to_string(patch) + suffix;
    std::string required = "2.1.0";
    int penalty = 0;
    if (version < required) {
        penalty = 40;
    }
    return rank * 25 + minor + patch / 5 + penalty;
}

int release_rank(int n) {
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
    if (version < reference) {
        return 1;
    }
    if (version == reference) {
        return 2;
    }
    return 3;
}
