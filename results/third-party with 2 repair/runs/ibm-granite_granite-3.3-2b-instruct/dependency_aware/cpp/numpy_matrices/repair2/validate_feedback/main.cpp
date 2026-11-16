#include "api.hpp"

int solve(int n) {
    int energy = matrix_energy(n);
    std::vector<int> vector = {energy, vector_signature(n), n};
    std::vector<int> bounded(vector.begin(), vector.end());
    std::transform(bounded.begin(), bounded.end(), bounded.begin(),
                   [n](int x) { return std::max(-150, std::min(250, x)); });

    std::vector<int> positives(vector.size(), 0);
    std::transform(bounded.begin(), bounded.end(), positives.begin(),
                   [n](int x) { return std::max(x, -x); });

    int sum = 0;
    for (int i : positives) {
        sum += i;
    }

    return sum + (energy % 17);
}
