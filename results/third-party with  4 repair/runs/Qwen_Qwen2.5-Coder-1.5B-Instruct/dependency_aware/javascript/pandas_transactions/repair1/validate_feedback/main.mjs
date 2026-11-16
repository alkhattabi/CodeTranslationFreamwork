// main.mjs
import { rolling_alert } from "./service.mjs";
import { category_balance } from "./utils.mjs";

export function solve(n) {
    const balance = category_balance(n);
    const alert = rolling_alert(n);
    const scores = new Array(3).fill(Math.abs(balance) % 50, alert, Math.abs(n) % 50);
    const ranks = scores.map(score => score === 0 ? Infinity : score).rank(method="dense", ascending=false);
    const penalty = Math.floor(ranks[0] * 7 + ranks[1] * 3);
    return balance + alert - penalty;
}
