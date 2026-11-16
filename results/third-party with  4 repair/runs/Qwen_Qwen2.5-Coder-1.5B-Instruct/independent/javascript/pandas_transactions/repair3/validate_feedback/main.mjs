export function solve(n) {
    const balance = category_balance(n);
    const alert = rolling_alert(n);
    const scores = [Math.abs(balance) % 50, alert, Math.abs(n) % 50];
    const ranks = scores.map(score => score === 0 ? 0 : Math.floor((scores.indexOf(score) + 1) / 2));
    const penalty = ranks[0] * 7 + ranks[1] * 3;
    return balance + alert - penalty;
}
