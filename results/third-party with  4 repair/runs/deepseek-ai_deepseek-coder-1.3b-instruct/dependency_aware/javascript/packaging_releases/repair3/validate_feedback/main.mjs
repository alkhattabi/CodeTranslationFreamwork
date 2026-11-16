import { release_rank } from "./utils.mjs";

export function solve(n) {
    if (n < 0) {
        return -1;
    }
    let major = Math.floor(n / 10000);
    let minor = Math.floor((n / 100) % 100);
    let patch = n % 100;
    let suffix = (patch % 4 === 0) ? "rc1" : "";
    let version = `${major}.${minor}.${patch}${suffix}`;
    let required = "2.1.0";
    let penalty = 40;
    if (version < required) {
        return release_rank(n) * 25 + minor + patch / 5 + penalty;
    }
    return release_rank(n) * 25 + minor + patch / 5;
}
