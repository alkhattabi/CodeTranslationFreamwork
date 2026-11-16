import * as M_utils from "./utils.mjs";
import * as M_service from "./service.mjs";
import * as M_main from "./main.mjs";
const tests = [{"m": "main", "f": "solve", "n": 53, "k": "main.solve|53"}, {"m": "main", "f": "solve", "n": 60, "k": "main.solve|60"}, {"m": "main", "f": "solve", "n": 100, "k": "main.solve|100"}, {"m": "main", "f": "solve", "n": 130, "k": "main.solve|130"}, {"m": "service", "f": "bonus_score", "n": 53, "k": "service.bonus_score|53"}, {"m": "service", "f": "bonus_score", "n": 60, "k": "service.bonus_score|60"}, {"m": "service", "f": "bonus_score", "n": 100, "k": "service.bonus_score|100"}, {"m": "service", "f": "bonus_score", "n": 130, "k": "service.bonus_score|130"}, {"m": "utils", "f": "clamp", "n": 53, "k": "utils.clamp|53"}, {"m": "utils", "f": "clamp", "n": 60, "k": "utils.clamp|60"}, {"m": "utils", "f": "clamp", "n": 100, "k": "utils.clamp|100"}, {"m": "utils", "f": "clamp", "n": 130, "k": "utils.clamp|130"}];
const modules = {"utils":M_utils, "service":M_service, "main":M_main};
for (const t of tests) {
  try {
    const v = modules[t.m][t.f](t.n);
    if (!Number.isSafeInteger(v)) throw new Error("result must be a safe integer");
    console.log(JSON.stringify({k:t.k, v:v}));
  } catch (e) { console.log(JSON.stringify({k:t.k, error:String(e)})); }
}
