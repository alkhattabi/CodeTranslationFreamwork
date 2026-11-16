import * as M_utils from "./utils.mjs";
import * as M_service from "./service.mjs";
import * as M_main from "./main.mjs";
const tests = [{"m": "main", "f": "solve", "n": 0, "k": "main.solve|0"}, {"m": "main", "f": "solve", "n": 10, "k": "main.solve|10"}, {"m": "main", "f": "solve", "n": 49, "k": "main.solve|49"}, {"m": "main", "f": "solve", "n": 150, "k": "main.solve|150"}, {"m": "main", "f": "solve", "n": 100, "k": "main.solve|100"}, {"m": "service", "f": "discount", "n": 0, "k": "service.discount|0"}, {"m": "service", "f": "discount", "n": 10, "k": "service.discount|10"}, {"m": "service", "f": "discount", "n": 49, "k": "service.discount|49"}, {"m": "service", "f": "discount", "n": 150, "k": "service.discount|150"}, {"m": "service", "f": "discount", "n": 100, "k": "service.discount|100"}, {"m": "utils", "f": "tier", "n": 0, "k": "utils.tier|0"}, {"m": "utils", "f": "tier", "n": 10, "k": "utils.tier|10"}, {"m": "utils", "f": "tier", "n": 49, "k": "utils.tier|49"}, {"m": "utils", "f": "tier", "n": 150, "k": "utils.tier|150"}, {"m": "utils", "f": "tier", "n": 100, "k": "utils.tier|100"}];
const modules = {"utils":M_utils, "service":M_service, "main":M_main};
for (const t of tests) {
  try {
    const v = modules[t.m][t.f](t.n);
    if (!Number.isSafeInteger(v)) throw new Error("result must be a safe integer");
    console.log(JSON.stringify({k:t.k, v:v}));
  } catch (e) { console.log(JSON.stringify({k:t.k, error:String(e)})); }
}
