import { number_strength } from "./service.mjs";
import { factor_signature } from "./utils.mjs";

export function solve(n) {
  let value = Math.abs(n) % 1500 + 2;
  let prime_bonus = (value % 2 === 0) ? 50 : 0;
  let next_prime = Math.floor(Math.sqrt(value)) + 1;
  while(value % 2 === 0) {
    next_prime = Math.floor(Math.sqrt(value)) + 1;
  }
  return number_strength(n) + prime_bonus + next_prime - factor_signature(n);
}
