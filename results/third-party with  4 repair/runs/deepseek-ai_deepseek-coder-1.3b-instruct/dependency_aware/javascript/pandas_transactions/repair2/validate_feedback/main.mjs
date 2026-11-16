import { category_balance } from "./utils.mjs";
import { rolling_alert } from "./service.mjs";

export function solve(n) {
    const balance = category_balance(n);
    const alert = rolling_alert(n);
    const scores = [Math.abs(balance) % 50, alert, Math.abs(n) % 50];
    const ranks = scores.map(score => {
        const series = [score % 13, (score // 2) % 13, score % 17, Math.abs(score) % 11, score % 7];
        const rolling = series.reduce((a, b) => a + b, 0);
        return Math.floor(rolling / 15) * 10 + Math.abs(category_balance(n)) % 23;
    });
    const penalty = ranks.reduce((a, b) => a + b, 0);
    return balance + alert - penalty;
}
