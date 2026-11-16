import * as M_utils from "./utils.mjs";
import * as M_service from "./service.mjs";
import * as M_main from "./main.mjs";
const tests = [{"m": "main", "f": "solve", "n": 0, "k": "main.solve|0"}, {"m": "main", "f": "solve", "n": 10, "k": "main.solve|10"}, {"m": "main", "f": "solve", "n": 1, "k": "main.solve|1"}, {"m": "main", "f": "solve", "n": -3, "k": "main.solve|-3"}, {"m": "service", "f": "gross", "n": 0, "k": "service.gross|0"}, {"m": "service", "f": "gross", "n": 10, "k": "service.gross|10"}, {"m": "service", "f": "gross", "n": 1, "k": "service.gross|1"}, {"m": "service", "f": "gross", "n": -3, "k": "service.gross|-3"}, {"m": "utils", "f": "unit_price", "n": 0, "k": "utils.unit_price|0"}, {"m": "utils", "f": "unit_price", "n": 10, "k": "utils.unit_price|10"}, {"m": "utils", "f": "unit_price", "n": 1, "k": "utils.unit_price|1"}, {"m": "utils", "f": "unit_price", "n": -3, "k": "utils.unit_price|-3"}];
const modules = {"utils":M_utils, "service":M_service, "main":M_main};
for (const t of tests) {
  try {
    const v = modules[t.m][t.f](t.n);
    if (!Number.isSafeInteger(v)) throw new Error("result must be a safe integer");
    console.log(JSON.stringify({k:t.k, v:v}));
  } catch (e) { console.log(JSON.stringify({k:t.k, error:String(e)})); }
}
