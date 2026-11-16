import * as M_utils from "./utils.mjs";
import * as M_service from "./service.mjs";
import * as M_main from "./main.mjs";
const tests = [{"m": "main", "f": "solve", "n": 100, "k": "main.solve|100"}, {"m": "main", "f": "solve", "n": 27, "k": "main.solve|27"}, {"m": "main", "f": "solve", "n": 0, "k": "main.solve|0"}, {"m": "main", "f": "solve", "n": 200, "k": "main.solve|200"}, {"m": "service", "f": "weighted", "n": 100, "k": "service.weighted|100"}, {"m": "service", "f": "weighted", "n": 27, "k": "service.weighted|27"}, {"m": "service", "f": "weighted", "n": 0, "k": "service.weighted|0"}, {"m": "service", "f": "weighted", "n": 200, "k": "service.weighted|200"}, {"m": "utils", "f": "normalize", "n": 100, "k": "utils.normalize|100"}, {"m": "utils", "f": "normalize", "n": 27, "k": "utils.normalize|27"}, {"m": "utils", "f": "normalize", "n": 0, "k": "utils.normalize|0"}, {"m": "utils", "f": "normalize", "n": 200, "k": "utils.normalize|200"}];
const modules = {"utils":M_utils, "service":M_service, "main":M_main};
for (const t of tests) {
  try {
    const v = modules[t.m][t.f](t.n);
    if (!Number.isSafeInteger(v)) throw new Error("result must be a safe integer");
    console.log(JSON.stringify({k:t.k, v:v}));
  } catch (e) { console.log(JSON.stringify({k:t.k, error:String(e)})); }
}
