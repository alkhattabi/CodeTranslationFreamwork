// service.mjs

import { vector_signature } from "./utils.mjs";

function matrix_energy(n) {
    n = Math.max(-100, Math.min(100, n));
    const m = [
        [n % 5, 2, -1],
        [3, n % 7, 4],
        [1, 5, n % 3]
    ];
    const square = m.reduce((acc, row) => acc.map((col, i) => acc[i] + row[i] * m[i][i]), [0, 0, 0]);
    const diagonal = square.reduce((acc, val, i) => (i === m.length - 1? acc + val : acc + val / m[i][i]), 0);
    return diagonal + vector_signature(n);
}

export function matrix_energy(n) { /* implementation */ }
