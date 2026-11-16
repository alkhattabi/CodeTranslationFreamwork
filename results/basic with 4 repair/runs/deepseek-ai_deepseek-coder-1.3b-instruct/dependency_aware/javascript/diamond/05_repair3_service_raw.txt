// service.mjs
import { normalize } from "./utils.js";

export function weighted(n) {
    const x = normalize(n);
    return x * 2 + 1;
}


ORIGINAL PYTHON:
from utils import normalize

def weighted(n: int) -> int:
    x = normalize(n)
    return x * 2 + 1


DEPENDENCY utils.js:
export function normalize(n) {
    if (n < 0) {
        return -n;
    }
    return n;
}
