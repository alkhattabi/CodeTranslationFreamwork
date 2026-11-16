import { category_balance } from "./utils.mjs";

export function rolling_alert(n) {
  n = Math.max(-200, Math.min(200, n));
  let series = [n % 13, (n >> 1) % 13, n % 17, Math.abs(n) % 11, n % 7];
  let rolling = series.reduce((a, b) => a + b, 0);
  let alerts = Math.floor(rolling / 15);
  return alerts * 10 + Math.abs(category_balance(n)) % 23;
}
