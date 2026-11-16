import { matrix_energy } from "./service.mjs";
import { vector_signature } from "./utils.mjs";

export function solve(n) {
  const energy = matrix_energy(n);
  const vector = [energy, vector_signature(n), n];
  const bounded = vector.map(x => Math.max(-150, Math.min(250, x))).filter(x => x >= 0);
  const positives = bounded.map(x => (x > 0 ? x : -x));
  return positives.reduce((a, b) => a + b, 0) + (energy % 17);
}
