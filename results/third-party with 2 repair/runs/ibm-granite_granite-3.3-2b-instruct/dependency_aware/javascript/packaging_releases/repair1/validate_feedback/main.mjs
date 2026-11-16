// main.mjs

import { upgrade_cost } from "./service.mjs";
import { release_rank } from "./utils.mjs";

export function solve(n) {
    if (n < 0) {
        return -1;
    }
    const major = Math.floor(n / 10000);
    const minor = (n / 100) % 100;
    const patch = n % 100;
    let suffix = "rc1";
    if (patch % 4 === 0) {
        suffix = "";
    }
    const version = `v${major}.${minor}.${patch}${suffix}`;
    const allowed = new Version(">=1.5,<4.0");
    const in_range = allowed.test(version)? 1 : 0;
    const stable = version.match(/^\d+\.\d+\.\d+(-\d+)?$/);
    const is_prerelease =!!stable && stable[1];
    return upgrade_cost(n) + 100 * in_range + 10 * (is_prerelease? 1 : 0) + release_rank(n);
}
