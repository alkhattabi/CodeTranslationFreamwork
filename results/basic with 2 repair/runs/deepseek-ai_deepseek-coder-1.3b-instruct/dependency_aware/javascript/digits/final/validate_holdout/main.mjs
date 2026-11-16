// utils.js
export function digit_sum(n) {
    n = Math.abs(n);
    let total = 0;
    while (n > 0) {
        total += n % 10;
        n = Math.floor(n / 10);
    }
    return total;
}

// service.js
import { digit_sum } from "./utils.js";

export function score_digits(n) {
    return digit_sum(n);
}

// main.js
import { score_digits } from "./service.js";

export function solve(n) {
    const value = score_digits(n);
    if (value % 2 === 0) {
        return value + 1;
    }
    return value - 1;
}
