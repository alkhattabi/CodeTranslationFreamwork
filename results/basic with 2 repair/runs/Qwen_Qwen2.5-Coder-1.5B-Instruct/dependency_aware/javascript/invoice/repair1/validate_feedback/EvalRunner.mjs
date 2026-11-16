import * as M_utils from "./utils.mjs";
import * as M_service from "./service.mjs";
import * as M_main from "./main.mjs";
const tests = [{"m": "main", "f": "solve", "n": 11, "k": "main.solve|11"}, {"m": "main", "f": "solve", "n": 50, "k": "main.solve|50"}, {"m": "main", "f": "solve", "n": 9, "k": "main.solve|9"}, {"m": "main", "f": "solve", "n": 7, "k": "main.solve|7"}, {"m": "service", "f": "gross", "n": 11, "k": "service.gross|11"}, {"m": "service", "f": "gross", "n": 50, "k": "service.gross|50"}, {"m": "service", "f": "gross", "n": 9, "k": "service.gross|9"}, {"m": "service", "f": "gross", "n": 7, "k": "service.gross|7"}, {"m": "utils", "f": "unit_price", "n": 11, "k": "utils.unit_price|11"}, {"m": "utils", "f": "unit_price", "n": 50, "k": "utils.unit_price|50"}, {"m": "utils", "f": "unit_price", "n": 9, "k": "utils.unit_price|9"}, {"m": "utils", "f": "unit_price", "n": 7, "k": "utils.unit_price|7"}];
const modules = {"utils":M_utils, "service":M_service, "main":M_main};
for (const t of tests) {
  try {
    const v = modules[t.m][t.f](t.n);
    if (!Number.isSafeInteger(v)) throw new Error("result must be a safe integer");
    console.log(JSON.stringify({k:t.k, v:v}));
  } catch (e) { console.log(JSON.stringify({k:t.k, error:String(e)})); }
}
