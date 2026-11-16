// utils.mjs
export function digit_sum(n) {
    n = Math.abs(n);
    let total = 0;
    while (n > 0) {
        total += n % 10;
        n = Math.floor(n / 10);
    }
    return total;
}

// main.mjs
import { digit_sum } from "./utils.mjs";

export function score_digits(n) {
    return digit_sum(n) * 3;
}
