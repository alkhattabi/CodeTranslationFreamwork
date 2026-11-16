import { factor_signature } from "./utils.mjs";
import { number_strength } from "./service.mjs";

export function solve(n) {
  let value = Math.abs(n) % 1500 + 2;
  let prime_bonus = (value % 1 === 0) ? 50 : 0;
  let next_prime = Math.floor(value) + 1;
  while (next_prime % 2 === 0) {
    next_prime++;
  }
  return number_strength(n) + prime_bonus + next_prime - factor_signature(n);
}
