export function matrix_energy(n) {
    const x = Math.max(-100, Math.min(100, n));
    const m = [
        [x % 5, 2, -1],
        [3, x % 7, 4],
        [1, 5, x % 3]
    ];
    const square = m.map(row => row.map(val => val * val));
    const diagonal = square.reduce((acc, row) => acc + row[0], 0);
    return diagonal + vector_signature(n);
}
