import { discount } from "./service.mjs";

export function solve(n) {
    let value = n * 4 - discount(n);
    return Math.max(0, value);
}
