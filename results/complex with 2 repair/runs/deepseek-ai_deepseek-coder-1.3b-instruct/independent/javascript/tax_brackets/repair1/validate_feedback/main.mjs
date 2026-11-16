import { calculateTax } from "./service.mjs";
import { taxableIncome } from "./utils.mjs";

export function solve(n) {
    const base = taxableIncome(n);
    const tax = calculateTax(n);
    const credit = n <= 2500 ? 100 : 0;
    const payable = tax - credit;
    return payable + (payable * (n > 10000 ? 2 : 0)) / 100;
}
