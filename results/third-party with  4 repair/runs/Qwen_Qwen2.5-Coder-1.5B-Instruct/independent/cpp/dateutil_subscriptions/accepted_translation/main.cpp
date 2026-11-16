#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <ctime>

// Helper function declarations from api.hpp
int solve(int n);
int grace_period(int n);
int renewal_date(int n);

int main() {
    int n;
    std::cin >> n;
    int result = solve(n);
    std::cout << result << std::endl;
    return 0;
}
