import * as M_utils from "./utils.mjs";
import * as M_service from "./service.mjs";
import * as M_main from "./main.mjs";
const tests = [{"m": "main", "f": "solve", "n": 8, "k": "main.solve|8"}, {"m": "main", "f": "solve", "n": -9, "k": "main.solve|-9"}, {"m": "main", "f": "solve", "n": 1, "k": "main.solve|1"}, {"m": "main", "f": "solve", "n": -1, "k": "main.solve|-1"}, {"m": "service", "f": "weighted", "n": 8, "k": "service.weighted|8"}, {"m": "service", "f": "weighted", "n": -9, "k": "service.weighted|-9"}, {"m": "service", "f": "weighted", "n": 1, "k": "service.weighted|1"}, {"m": "service", "f": "weighted", "n": -1, "k": "service.weighted|-1"}, {"m": "utils", "f": "normalize", "n": 8, "k": "utils.normalize|8"}, {"m": "utils", "f": "normalize", "n": -9, "k": "utils.normalize|-9"}, {"m": "utils", "f": "normalize", "n": 1, "k": "utils.normalize|1"}, {"m": "utils", "f": "normalize", "n": -1, "k": "utils.normalize|-1"}];
const modules = {"utils":M_utils, "service":M_service, "main":M_main};
for (const t of tests) {
  try {
    const v = modules[t.m][t.f](t.n);
    if (!Number.isSafeInteger(v)) throw new Error("result must be a safe integer");
    console.log(JSON.stringify({k:t.k, v:v}));
  } catch (e) { console.log(JSON.stringify({k:t.k, error:String(e)})); }
}
