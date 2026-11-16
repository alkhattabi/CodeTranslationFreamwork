import { clamp } from "./utils.mjs";

export function bonus_score(n) {
    const base = clamp(n);
    return clamp(base + 7);
}
