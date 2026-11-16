// utils.mjs

import { Version } from 'packaging/version';

export function release_rank(n) {
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
    const reference = new Version('2.1.0');
    if (new Version(version) < reference) {
        return 1;
    } else if (new Version(version) === reference) {
        return 2;
    }
    return 3;
}
