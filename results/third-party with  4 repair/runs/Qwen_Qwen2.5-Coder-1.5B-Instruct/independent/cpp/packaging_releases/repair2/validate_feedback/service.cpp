#pragma once
#include <iostream>
#include <string>
#include <vector>

// Helper function declarations from api.hpp
int solve(int n);
int upgrade_cost(int n);
int release_rank(int n);

class Service {
public:
    static int upgrade_cost(int n) {
        int rank = release_rank(n);
        if (rank < 0) {
            return -1;
        }
        int major = n / 10000;
        int minor = (n / 100) % 100;
        int patch = n % 100;
        std::string currentVersion = std::to_string(major) + "." + std::to_string(minor) + "." + std::to_string(patch);
        std::string requiredVersion = "2.1.0";
        int penalty = 40;
        if (currentVersion < requiredVersion) {
            penalty = 0;
        }
        return rank * 25 + minor + patch / 5 + penalty;
    }

private:
    static int solve(int n) {
        // Implementation of solve function
        // This is a placeholder for actual logic
        return n; // Placeholder return value
    }
};
