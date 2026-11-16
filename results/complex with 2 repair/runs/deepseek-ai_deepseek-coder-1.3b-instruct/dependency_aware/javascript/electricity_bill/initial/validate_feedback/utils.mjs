export function billable_units(n) {
    if (n < 0) {
        return 0;
    }
    if (n > 1200) {
        return 1200;
    }
    return n;
}
