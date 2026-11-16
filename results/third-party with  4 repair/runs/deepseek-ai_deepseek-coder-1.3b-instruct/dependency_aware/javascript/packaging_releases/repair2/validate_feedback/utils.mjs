export function release_rank(n) {
    if (n < 0) {
        return -1;
    }
    let major = Math.floor(n / 10000);
    let minor = Math.floor((n / 100) % 100);
    let patch = n % 100;
    let suffix = (patch % 4 === 0) ? "rc1" : "";
    let version = `${major}.${minor}.${patch}${suffix}`;
    let reference = "2.1.0";
    if (version < reference) {
        return 1;
    }
    if (version === reference) {
        return 2;
    }
    return 3;
}
