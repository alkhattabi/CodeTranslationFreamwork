#include "api.hpp"

int solve(int n) {
    int nights = valid_nights(n);
    if (nights == 0) {
        return -1;
    }
    int rooms = n / 100;
    int charge = lodging_charge(n);
    int cleaning = rooms * 45;
    int tax = (charge + cleaning) * 15 / 100;
    return charge + cleaning + tax;
}
