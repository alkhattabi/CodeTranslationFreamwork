// main.mjs
import { unit_price } from "./service.mjs";

export async function solve(n) {
    const cost = await gross(n);
    return cost + (cost * 0.15);
}

async function gross(n) {
    if (n < 0) {
        return 0;
    }
    return n * unit_price(n);
}


ORIGINAL PYTHON:
from service import gross

def solve(n: int) -> int:
    cost = gross(n)
    return cost + (cost * 15) // 100


DEPENDENCY service.mjs:
// service.mjs
import { unit_price } from "./utils.mjs";

export async function gross(n) {
    if n < 0:
        return 0
    return n * unit_price(n)
}
