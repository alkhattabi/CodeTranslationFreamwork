// main.mjs
import { number_strength } from "./service.mjs";
import { factor_signature } from "./utils.mjs";

export function solve(n) {
    const value = Math.abs(n) % 1500 + 2;
    const prime_bonus = 50 if (number_strength.isPrime(value)) else 0;
    const next_prime = Math.floor(number_strength(n) + 1);
    return number_strength(n) + prime_bonus + next_prime - factor_signature(n);
}
