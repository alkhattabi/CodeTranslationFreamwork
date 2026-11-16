import { yearlyInterest } from './service.mjs';
import { creditBand } from './utils.mjs';

export function solve(n: number): number {
    const band = creditBand(n);
    if (band === 0) {
        return -1;
    }
    const principal = 10000 + (n - 300) * 10;
    const interest = yearlyInterest(n);
    const fee = band >= 3 ? 150 : 350;
    const total = principal + interest + fee;
    return Math.ceil((total + 11) / 12);
}
