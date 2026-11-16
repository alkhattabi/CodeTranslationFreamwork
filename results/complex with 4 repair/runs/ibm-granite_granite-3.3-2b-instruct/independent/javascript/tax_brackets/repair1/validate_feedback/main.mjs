// main.mjs
import { taxable_income } from "./utils.mjs";
import { calculate_tax } from "./service.mjs";

export function solve(n) {
    const base = taxable_income(n);
    const tax = calculate_tax(n);
    const credit = 100;
    if (base > 0 && base <= 2500) {
        credit = 100;
    }
    const payable = tax - credit;
    if (payable < 0) {
        payable = 0;
    }
    return payable + (payable * 0.02 if (base > 10000) else 0);
}
