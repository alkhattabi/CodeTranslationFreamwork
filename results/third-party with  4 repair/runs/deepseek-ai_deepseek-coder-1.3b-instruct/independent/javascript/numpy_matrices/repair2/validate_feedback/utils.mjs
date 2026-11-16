export function vector_signature(n) {
  n = Math.max(-100, Math.min(100, n));
  const v = [n % 11, Math.abs(n) % 7, Math.floor(n / 3) % 9];
  const m = Array.from({length: 3}, (_, i) => Array(3).fill(i + 1)).map(arr => arr.fill(0));
  for (let i = 0; i < 3; i++) {
    for (let j = 0; j < 3; j++) {
      m[i][j] += v[i] * v[j];
    }
  }
  const out = m.flat();
  return Math.abs(out.reduce((a, b) => a + b, 0));
}
