// utils.js
export function weekly_demand(n) {
    if (n < 0) {
        return 0;
    }
    let base = n * 3;
    let extra = (n % 7) * 2;
    if (n >= 40) {
        base += Math.floor(n / 4);
    }
    return base + extra;
}
