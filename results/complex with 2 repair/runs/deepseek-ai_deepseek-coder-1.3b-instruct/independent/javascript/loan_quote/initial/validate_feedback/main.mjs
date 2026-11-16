import { creditBand } from "./utils.js";
import { yearlyInterest } from "./service.js";

export function solve(n) {
    const band = creditBand(n);
    if (band === 0) {
        return -1;
    }
    const principal = 10000 + (n - 300) * 10;
    const interest = yearlyInterest(n);
    let fee = 150;
    if (band >= 3) {
        fee = 350;
    }
    const total = principal + interest + fee;
    return Math.floor((total + 11) / 12);
}
