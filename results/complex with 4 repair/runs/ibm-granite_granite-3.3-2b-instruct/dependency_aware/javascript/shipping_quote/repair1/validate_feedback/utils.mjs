// utils.mjs
export function weightBlocks(n) {
    if (n <= 0) {
        return 0;
    }
    if (n > 10000) {
        n = 10000;
    }
    return Math.floor((n + 499) / 500);
}
