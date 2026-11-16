#include "api.hpp"

int solve(int n) {
    int energy = matrix_energy(n);
    std::vector<int> vector = {energy, vector_signature(n), n};
    std::vector<int> bounded;
    for (int i : vector) {
        if (i >= -150 && i <= 250) {
            bounded.push_back(i);
        } else {
            bounded.push_back(-i);
        }
    }
    std::sort(bounded.begin(), bounded.end());
    int sum = 0;
    for (int i = 0; i < bounded.size(); ++i) {
        sum += bounded[i];
    }
    return sum + (energy % 17);
}
