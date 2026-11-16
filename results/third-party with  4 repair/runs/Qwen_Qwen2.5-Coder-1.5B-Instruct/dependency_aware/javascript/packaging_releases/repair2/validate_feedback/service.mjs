import { release_rank } from "./utils.mjs";

export function upgrade_cost(n) {
    const rank = release_rank(n);
    if (rank < 0) {
        return -1;
    }
    const major = Math.floor(n / 10000);
    const minor = Math.floor((n / 100) % 100);
    const patch = n % 100;
    let penalty = 40;
    if (current < required) {
        penalty = 0;
    }
    return rank * 25 + minor + patch // 5 + penalty;
}

// Dependency utils.mjs
export function release_rank(n) {
    if (n < 0) {
        return -1;
    }
    const major = Math.floor(n / 10000);
    const minor = Math.floor((n / 100) % 100);
    const patch = n % 100;
    let suffix = "";
    if (patch % 4 === 0) {
        suffix = "rc1";
    }
    const version = `${major}.${minor}.${patch}${suffix}`;
    const reference = "2.1.0";
    if (version.localeCompare(reference) < 0) {
        return 1;
    }
    if (version.localeCompare(reference) === 0) {
        return 2;
    }
    return 3;
}
