import { releaseRank } from "./utils.mjs";

export function upgrade_cost(n) {
    const rank = releaseRank(n);
    if (rank < 0) {
        return -1;
    }
    const major = Math.floor(n / 10000);
    const minor = Math.floor((n / 100) % 100);
    const patch = n % 100;
    const currentVersion = `${major}.${minor}.${patch}`;
    const requiredVersion = "2.1.0";
    let penalty = 0;
    if (currentVersion < requiredVersion) {
        penalty = 40;
    }
    return rank * 25 + minor + patch // 5 + penalty;
}
