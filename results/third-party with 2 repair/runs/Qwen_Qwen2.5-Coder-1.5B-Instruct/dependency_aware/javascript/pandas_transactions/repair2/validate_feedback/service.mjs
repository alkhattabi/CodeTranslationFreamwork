// service.mjs
import { category_balance } from "./utils.mjs";

export function rolling_alert(n) {
    n = Math.max(-200, Math.min(200, n));
    const series = new Array(5).fill(n % 13);
    series[1] = (n >> 1) % 13;
    series[2] = n % 17;
    series[3] = Math.abs(n) % 11;
    series[4] = n % 7;
    const rolling = series.reduce((acc, val) => acc + val, 0);
    const alerts = (rolling >= 15).reduce((acc, val) => acc + val, 0);
    return alerts * 10 + category_balance(n) % 23;
}
