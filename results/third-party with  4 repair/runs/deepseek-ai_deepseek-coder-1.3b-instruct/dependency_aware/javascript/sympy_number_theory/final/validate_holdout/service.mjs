import { factor_signature } from "./utils.mjs";

export function number_strength(n) {
  let value = Math.abs(n) % 1500 + 2;
  let phi = Math.floor(value);
  let divisor_count = Math.floor(Math.sqrt(phi));
  return phi + 5 * divisor_count + factor_signature(n);
}
