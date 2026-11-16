import { category_balance } from "./utils.mjs";
import { rolling_alert } from "./service.mjs";

export function solve(n) {
    const balance = category_balance(n);
    const alert = rolling_alert(n);
    const scores = [Math.abs(balance) % 50, alert, Math.abs(n) % 50];
    const ranks = scores.map(score => {
        if (score === 0) return 0;
        return scores.indexOf(score) + 1;
    });
    const penalty = Math.floor(ranks[0] * 7 + ranks[1] * 3);
    return balance + alert - penalty;
}
