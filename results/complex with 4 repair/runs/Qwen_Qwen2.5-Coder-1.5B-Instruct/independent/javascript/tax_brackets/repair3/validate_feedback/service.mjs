// service.mjs
import { taxableIncome } from './utils.mjs';

export function calculateTax(n) {
    const income = taxableIncome(n);
    let tax = 0;
    if (income > 7000) {
        tax += Math.floor((income - 7000) * 20 / 100);
        income = 7000;
    }
    if (income > 3000) {
        tax += Math.floor((income - 3000) * 12 / 100);
        income = 3000;
    }
    tax += Math.floor(income * 5 / 100);
    return tax;
}

// utils.mjs
export function taxableIncome(n) {
    if (n <= 500) {
        return 0;
    }
    const income = n - 500;
    if (income > 20000) {
        income = 20000;
    }
    return income;
}
