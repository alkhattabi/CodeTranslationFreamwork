import { credit_band } from "./utils.mjs";
import { yearly_interest } from "./service.mjs";

export function solve(n) {
    const band = credit_band(n);
    if (band === 0) {
        return -1;
    }
    const principal = 10000 + (n - 300) * 10;
    const interest = yearly_interest(n);
    let fee = 150;
    if (band >= 3) {
        fee = 350;
    }
    const total = principal + interest + fee;
    return Math.floor((total + 11) / 12);
}
