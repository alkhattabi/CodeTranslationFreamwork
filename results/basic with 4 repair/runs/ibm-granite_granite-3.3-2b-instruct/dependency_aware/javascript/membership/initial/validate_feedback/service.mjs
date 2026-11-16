// service.mjs
export function discount(n) {
    const tierValue = tier(n);
    return tierValue * 5;
}

// utils.mjs (no changes needed)
export function tier(n) {
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
