// service.mjs
export function discount(n) {
    return tier(n) * 5;
}

// utils.mjs
export function tier(n) {
    if (n >= 100) {
        return 3;
    }
    if (n >= 50) {
        return 2;
    }
    if (n >= 10) {
        return 1;
    }
    return 0;
}
