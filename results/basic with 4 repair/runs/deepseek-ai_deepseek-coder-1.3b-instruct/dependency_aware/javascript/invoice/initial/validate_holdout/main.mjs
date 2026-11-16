// main.mjs
import { unit_price } from "./service.mjs";

export function solve(n) {
    const cost = gross(n);
    return cost + (cost * 0.15);
}

function gross(n) {
    if (n < 0) {
        return 0;
    }
    return n * unit_price(n);
}
