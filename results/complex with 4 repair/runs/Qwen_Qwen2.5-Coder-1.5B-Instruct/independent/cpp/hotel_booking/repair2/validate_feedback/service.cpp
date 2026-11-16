#pragma once
#include <algorithm>
#include <cmath>
#include <cstdlib>

// Helper function declarations from api.hpp
int solve(int n);
int lodging_charge(int n);

// Global declaration of valid_nights function
int valid_nights(int n);

// Implementation of valid_nights function
int valid_nights(int n) {
    if (n <= 0) {
        return 0;
    }
    int rooms = n / 100;
    int nights = n % 100;
    if (rooms < 1 || rooms > 20 || nights < 1 || nights > 30) {
        return 0;
    }
    return nights;
}

// Service class implementation
class Service {
public:
    int lodging_charge(int n) const {
        int nights = valid_nights(n);
        if (nights == 0) {
            return 0;
        }
        int rooms = n / 100;
        int charge = rooms * nights * 150;
        if (nights >= 7) {
            charge -= charge / 10;
        }
        if (rooms >= 5) {
            charge -= charge / 20;
        }
        return charge;
    }

private:
    // Private member variables can be added here if needed
};
