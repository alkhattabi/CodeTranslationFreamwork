import * as M_utils from "./utils.mjs";
import * as M_service from "./service.mjs";
import * as M_main from "./main.mjs";
const tests = [{"m": "main", "f": "solve", "n": -5, "k": "main.solve|-5"}, {"m": "main", "f": "solve", "n": 9, "k": "main.solve|9"}, {"m": "main", "f": "solve", "n": 99, "k": "main.solve|99"}, {"m": "main", "f": "solve", "n": 50, "k": "main.solve|50"}, {"m": "main", "f": "solve", "n": 12, "k": "main.solve|12"}, {"m": "service", "f": "discount", "n": -5, "k": "service.discount|-5"}, {"m": "service", "f": "discount", "n": 9, "k": "service.discount|9"}, {"m": "service", "f": "discount", "n": 99, "k": "service.discount|99"}, {"m": "service", "f": "discount", "n": 50, "k": "service.discount|50"}, {"m": "service", "f": "discount", "n": 12, "k": "service.discount|12"}, {"m": "utils", "f": "tier", "n": -5, "k": "utils.tier|-5"}, {"m": "utils", "f": "tier", "n": 9, "k": "utils.tier|9"}, {"m": "utils", "f": "tier", "n": 99, "k": "utils.tier|99"}, {"m": "utils", "f": "tier", "n": 50, "k": "utils.tier|50"}, {"m": "utils", "f": "tier", "n": 12, "k": "utils.tier|12"}];
const modules = {"utils":M_utils, "service":M_service, "main":M_main};
for (const t of tests) {
  try {
    const v = modules[t.m][t.f](t.n);
    if (!Number.isSafeInteger(v)) throw new Error("result must be a safe integer");
    console.log(JSON.stringify({k:t.k, v:v}));
  } catch (e) { console.log(JSON.stringify({k:t.k, error:String(e)})); }
}
