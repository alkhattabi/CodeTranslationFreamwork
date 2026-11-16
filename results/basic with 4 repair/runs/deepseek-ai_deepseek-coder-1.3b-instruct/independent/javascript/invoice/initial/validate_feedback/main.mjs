import { gross } from "./service.mjs";

export function solve(n) {
  const cost = gross(n);
  return cost + (cost * 0.15);
}
