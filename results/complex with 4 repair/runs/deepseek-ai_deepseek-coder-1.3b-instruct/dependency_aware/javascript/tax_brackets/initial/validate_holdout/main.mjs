import { taxable_income } from "./utils.mjs";
import { calculate_tax } from "./service.mjs";

export function solve(n) {
    if (typeof n !== 'number' || n % 1 !== 0) {
        throw new Error('Input must be an integer');
    }

    const base = taxable_income(n);
    const tax = calculate_tax(n);
    const credit = n <= 2500 ? 100 : 0;
    const payable = tax - credit;
    const payableWith20PercentDiscount = payable < 0 ? 0 : payable * 0.8;
    const additionalDiscount = base > 10000 ? (payableWith20PercentDiscount * 0.2) : 0;
    return payableWith20PercentDiscount + additionalDiscount;
}
