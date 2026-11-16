#pragma once
#include "api.hpp"

int solve(int n) {
    int x = normalize(n);
    return x * 2 + 1;
}

#include "utils.hpp"
#include "service.hpp"

int main() {
    int result = solve(100);
    std::cout << result << std::endl;
    result = solve(27);
    std::cout << result << std::endl;
    result = solve(200);
    std::cout << result << std::endl;
    return 0;
}

#include "service.cpp"
#include "utils.cpp"

//api.cpp
#pragma once

int normalize(int n) {
    if (n < 0) {
        return -n;
    }
    return n;
}

//utils.cpp
#pragma once

int weighted(int n) {
    int x = normalize(n);
    return x * 2 + 1;
}

//service.cpp
#pragma once

int solve(int n) {
    int x = weighted(n);
    return x + 1;
}
