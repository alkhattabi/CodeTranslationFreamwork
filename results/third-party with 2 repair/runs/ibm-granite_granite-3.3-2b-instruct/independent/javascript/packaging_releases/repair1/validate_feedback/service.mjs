// service.mjs
import { release_rank } from "./utils.mjs";

export function upgrade_cost(n) {
    const rank = release_rank(n);
    if (rank < 0) {
        return -1;
    }
    const [major, minor, patch] = [n / 10000, (n / 100) % 100, n % 100];
    const currentVersion = `${major}.${minor}.${patch}`;
    const requiredVersion = "2.1.0";
    const current = new Date(currentVersion);
    const requiredDate = new Date(requiredVersion);
    let penalty = 0;
    if (current < requiredDate) {
        penalty = 40;
    }
    return rank * 25 + minor + Math.floor(patch / 5) + penalty;
}
