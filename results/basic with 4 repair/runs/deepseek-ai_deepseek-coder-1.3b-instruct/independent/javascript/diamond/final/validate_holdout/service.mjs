import { normalize } from "./utils.mjs";

export function weighted(n) {
  const x = normalize(n);
  return x * 2 + 1;
}
