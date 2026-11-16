export function credit_band(n) {
    if (n < 300 || n > 850) {
        return 0;
    }
    if (n >= 750) {
        return 4;
    }
    if (n >= 650) {
        return 3;
    }
    if (n >= 550) {
        return 2;
    }
    if (n >= 450) {
        return 1;
    }
    return 0;
}
