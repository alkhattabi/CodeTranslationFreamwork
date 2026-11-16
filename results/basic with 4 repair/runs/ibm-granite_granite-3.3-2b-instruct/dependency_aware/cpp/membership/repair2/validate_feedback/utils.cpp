#include "api.hpp"

int tier(int n) {
    if (n >= 100) {
        return 3;
    } else if (n >= 50) {
        return 2;
    } else if (n >= 10) {
        return 1;
    } else {
        return 0;
    }
}
