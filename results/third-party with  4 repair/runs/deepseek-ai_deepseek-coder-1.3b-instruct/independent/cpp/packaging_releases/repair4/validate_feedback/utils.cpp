#include "api.hpp"
#include <cmath>
#include <cstdlib>

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
