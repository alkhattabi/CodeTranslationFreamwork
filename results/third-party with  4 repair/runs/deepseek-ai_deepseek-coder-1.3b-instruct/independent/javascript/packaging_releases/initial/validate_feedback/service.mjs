import { release_rank } from "./utils.mjs";

export function upgrade_cost(n) {
    const rank = release_rank(n);
    if (rank < 0) {
        return -1;
    }
    let major = Math.floor(n / 10000);
    let minor = Math.floor((n / 100) % 100);
    let patch = n % 100;
    let current = `${major}.${minor}.${patch}`;
    let required = "2.1.0";
    let version = new Version(current);
    let penalty = version < required ? 40 : 0;
    return rank * 25 + minor + patch / 5 + penalty;
}
