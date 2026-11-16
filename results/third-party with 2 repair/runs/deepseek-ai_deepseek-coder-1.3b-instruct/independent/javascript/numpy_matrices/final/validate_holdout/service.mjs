import { vector_signature } from "./utils.js";

export function matrix_energy(n) {
  let x = Math.max(-100, Math.min(100, n));
  let m = [
    [x % 5, 2, -1],
    [3, x % 7, 4],
    [1, 5, x % 3]
  ];
  let square = m.map(row => row.map(x => x * x).reduce((a, b) => a + b, 0));
  let diagonal = square[0];
  return diagonal + vector_signature(n);
}
