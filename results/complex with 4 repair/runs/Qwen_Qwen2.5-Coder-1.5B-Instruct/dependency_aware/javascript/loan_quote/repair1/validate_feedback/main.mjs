// main.mjs
import { yearly_interest } from "./service.mjs";
import { credit_band } from "./utils.mjs";

export function solve(n) {
    const band = credit_band(n);
    if (band === 0) {
        return -1;
    }
    const principal = 10000 + (n - 300) * 10;
    const interest = yearly_interest(n);
    const fee = 150 * (band >= 3 ? 1 : 2);
    const total = principal + interest + fee;
    return Math.ceil((total + 11) / 12);
}
