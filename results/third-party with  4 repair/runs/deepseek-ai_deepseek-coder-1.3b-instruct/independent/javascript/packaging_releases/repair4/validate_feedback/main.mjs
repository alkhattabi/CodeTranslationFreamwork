import { upgrade_cost } from "./service.mjs";
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
    let allowed = new Set([">=1.5,<4.0"]);
    let in_range = (allowed.has(version)) ? 1 : 0;
    let stable = (version.includes("rc")) ? 0 : 1;
    return upgrade_cost(n) + 100 * in_range + 10 * stable + release_rank(n);
}
