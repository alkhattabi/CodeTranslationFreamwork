// main.mjs
import { matrixEnergy } from "./service.mjs";
import { vectorSignature } from "./utils.mjs";

export function solve(n) {
    const energy = matrixEnergy(n);
    const vector = [energy, vectorSignature(n), n].map(i => Math.floor(i)); // Preserve Python's floor division for negative numbers
    const bounded = vector.map(v => Math.min(Math.max(v, -150), 250));
    const positives = bounded.map(v => v > 0? v : -v);
    return parseInt(positives.reduce((sum, val) => sum + val, 0) + (energy % 17));
}
