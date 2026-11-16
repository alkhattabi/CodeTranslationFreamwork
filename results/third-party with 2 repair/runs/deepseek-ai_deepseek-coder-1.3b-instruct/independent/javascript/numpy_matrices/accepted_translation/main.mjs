import { matrix_energy } from "./service.mjs";
import { vector_signature } from "./utils.mjs";

export function solve(n) {
    const energy = matrix_energy(n);
    const vector = [energy, vector_signature(n), n, 0].map(Number);
    const bounded = vector.map(val => Math.min(Math.max(val, -150), 250)).filter(val => Number.isInteger(val));
    const positives = bounded.map(val => (val > 0 ? val : -val));
    return positives.reduce((a, b) => a + b, 0) + (energy % 17);
}
