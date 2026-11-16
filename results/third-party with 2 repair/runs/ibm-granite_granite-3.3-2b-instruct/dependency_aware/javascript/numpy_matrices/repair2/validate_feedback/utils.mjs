// utils.mjs

export function vector_signature(n) {
    n = Math.max(-100, Math.min(100, n));
    const v = [n % 11, Math.abs(n) % 7, (n / 3) % 9];
    const m = Array.from({length: 3}, (_, i) => Array.from({length: 3}, (_, j) => (i + j === 2? 1 : 0)));
    const out = m.reduce((acc, row, i) => {
        return acc.map((val, j) => val + row[j] * v[i]);
    }, [0, 0, 0]);
    return Math.abs(out.reduce((sum, val) => sum + val, 0));
}
