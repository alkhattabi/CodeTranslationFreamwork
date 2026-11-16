import { calculateTax } from './service.mjs';
import { taxableIncome } from './utils.mjs';

export function solve(n: number): number {
    const base = taxableIncome(n);
    const tax = calculateTax(n);
    let credit = 100;
    if (base > 0 && base <= 2500) {
        credit = 0;
    }
    const payable = tax - credit;
    if (payable < 0) {
        payable = 0;
    }
    return payable + (payable * 2 / 100) if base > 10000 else 0;
}
