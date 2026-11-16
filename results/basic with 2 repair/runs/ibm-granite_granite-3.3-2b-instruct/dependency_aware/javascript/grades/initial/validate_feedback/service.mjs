// service.mjs
export function bonus_score(n) {
    const base = clamp(n);
    return clamp(base + 7);
}

// utils.mjs (no changes needed)
export function clamp(n) {
    if (n < 0) {
        return 0;
    }
    if (n > 100) {
        return 100;
    }
    return n;
}
