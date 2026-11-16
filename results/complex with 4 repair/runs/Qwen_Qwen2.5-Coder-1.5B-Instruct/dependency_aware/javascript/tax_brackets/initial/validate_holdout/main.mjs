// main.mjs
import { calculateTax } from "./service.mjs";
import { taxableIncome } from "./utils.mjs";

export function solve(n) {
    const base = taxableIncome(n);
    const tax = calculateTax(n);
    const credit = 100 * (base > 0 && base <= 2500 ? 1 : 0);
    const payable = tax - credit;
    if (payable < 0) {
        payable = 0;
    }
    return payable + (payable * 2 / 100 * (base > 10000 ? 1 : 0));
}
