import { factorint } from 'mathjs';

export function factor_signature(n) {
  let value = Math.abs(n) % 1500 + 2;
  let factors = factorint(value);
  let score = Object.keys(factors).reduce((sum, prime) => {
    return sum + prime * factors[prime];
  }, 0);
  return score + 3 * Object.keys(factors).length;
}
