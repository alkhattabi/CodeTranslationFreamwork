#include "api.hpp"

int solve(int n) {
    int energy = matrix_energy(n);
    int vector[3] = {energy, vector_signature(n), n};
    for (int i = 0; i < 3; ++i) {
        vector[i] = (vector[i] > 0)? vector[i] : -vector[i];
    }
    return vector[0] + (energy % 17);
}
