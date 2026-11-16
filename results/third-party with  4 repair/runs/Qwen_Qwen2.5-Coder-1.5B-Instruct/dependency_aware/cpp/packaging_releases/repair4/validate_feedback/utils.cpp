#pragma once
#include <iostream>
#include <string>

// Helper function declarations from api.hpp
int solve(int n);
int upgrade_cost(int n);
int release_rank(int n);

// Global C++ functions declared in api.hpp
int solve(int n) {
    // Implementation of solve function
}

int upgrade_cost(int n) {
    // Implementation of upgrade_cost function
}

int release_rank(int n) {
    if (n < 0) {
        return -1;
    }
    int major = n / 10000;
    int minor = (n / 100) % 100;
    int patch = n % 100;
    std::string suffix = patch % 4 == 0 ? "rc1" : "";
    std::string versionStr = std::to_string(major) + "." + std::to_string(minor) + "." + std::to_string(patch) + suffix;
    Version version(versionStr);
    Version referenceVersion("2.1.0");
    if (version < referenceVersion) {
        return 1;
    }
    if (version == referenceVersion) {
        return 2;
    }
    return 3;
}
