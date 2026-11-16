import { vector_signature } from "./utils.mjs";

export function matrix_energy(n) {
  const x = Math.max(-100, Math.min(100, n));
  const m = [
    [x % 5, 2, -1],
    [3, x % 7, 4],
    [1, 5, x % 3]
  ];
  const square = m.map(row => row.map(x => x * x)).reduce((a, b) => a.map((c, i) => c + b[i]).slice(), m);
  const diagonal = square.reduce((a, b) => a + b, 0);
  return diagonal + vector_signature(n);
}
