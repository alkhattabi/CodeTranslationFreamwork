import * as M_utils from "./utils.mjs";
import * as M_service from "./service.mjs";
import * as M_main from "./main.mjs";
const tests = [{"m": "main", "f": "solve", "n": 52, "k": "main.solve|52"}, {"m": "main", "f": "solve", "n": 95, "k": "main.solve|95"}, {"m": "main", "f": "solve", "n": -10, "k": "main.solve|-10"}, {"m": "main", "f": "solve", "n": 0, "k": "main.solve|0"}, {"m": "service", "f": "bonus_score", "n": 52, "k": "service.bonus_score|52"}, {"m": "service", "f": "bonus_score", "n": 95, "k": "service.bonus_score|95"}, {"m": "service", "f": "bonus_score", "n": -10, "k": "service.bonus_score|-10"}, {"m": "service", "f": "bonus_score", "n": 0, "k": "service.bonus_score|0"}, {"m": "utils", "f": "clamp", "n": 52, "k": "utils.clamp|52"}, {"m": "utils", "f": "clamp", "n": 95, "k": "utils.clamp|95"}, {"m": "utils", "f": "clamp", "n": -10, "k": "utils.clamp|-10"}, {"m": "utils", "f": "clamp", "n": 0, "k": "utils.clamp|0"}];
const modules = {"utils":M_utils, "service":M_service, "main":M_main};
for (const t of tests) {
  try {
    const v = modules[t.m][t.f](t.n);
    if (!Number.isSafeInteger(v)) throw new Error("result must be a safe integer");
    console.log(JSON.stringify({k:t.k, v:v}));
  } catch (e) { console.log(JSON.stringify({k:t.k, error:String(e)})); }
}
