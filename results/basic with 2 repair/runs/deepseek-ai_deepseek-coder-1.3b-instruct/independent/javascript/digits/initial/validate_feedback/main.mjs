import { scoreDigits } from "./service.js";

export function solve(n) {
    const value = scoreDigits(n);
    if (value % 2 === 0) {
        return value + 1;
    }
    return value - 1;
}
