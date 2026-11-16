// service.mjs
export function discount(n) {
    return Math.floor(n / 10);
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

// main.mjs
import { discount } from "./service.mjs";
import { tier } from "./utils.mjs";

export function solve(n) {
    if (typeof n !== 'number' || n % 1 !== 0) {
        throw new Error('Input must be an integer');
    }
    let value = n * 4 - discount(n);
    value = Math.max(0, value);
    return value * tier(value);
}
