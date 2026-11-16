import { release_rank } from "./utils.mjs";

export function upgrade_cost(n) {
    const rank = release_rank(n);
    if (rank < 0) {
        return -1;
    }
    const major = Math.floor(n / 10000);
    const minor = Math.floor((n / 100) % 100);
    const patch = n % 100;
    const suffix = (patch % 4 === 0) ? "rc1" : "";
    const version = `${major}.${minor}.${patch}${suffix}`;
    const required = "2.1.0";
    let penalty = 40;
    if (version < required) {
        return rank * 25 + minor + patch / 5 + penalty;
    }
    return rank * 25 + minor + patch / 5;
}
