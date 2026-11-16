import { factor_signature } from "./utils.mjs";

export function number_strength(n) {
  let value = Math.abs(n) % 1500 + 2;
  let phi = Math.floor(Math.sqrt(value));
  for(let i = 2; i <= phi; i++)
    if(value % i === 0) phi = i;
  let divisor_count = 2;
  let temp = value;
  while(temp !== 1) {
    if(temp % i === 0) {
      divisor_count++;
      temp = temp / i;
    }
    else i++;
  }
  return phi + 5 * divisor_count + factor_signature(n);
}
