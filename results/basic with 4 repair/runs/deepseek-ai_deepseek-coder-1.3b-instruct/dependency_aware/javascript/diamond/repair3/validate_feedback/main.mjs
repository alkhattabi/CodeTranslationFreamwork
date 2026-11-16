// utils.js
export function normalize(n) {
    return n < 0 ? -n : n;
}

// service.js
import { normalize } from "./utils.js";

export function weighted(n) {
    const x = normalize(n);
    return x * 2 + 1;
}

// main.js
import { weighted } from "./service.js";
import { normalize } from "./utils.js";

export function solve(n) {
    return weighted(n) + normalize(n);
}
