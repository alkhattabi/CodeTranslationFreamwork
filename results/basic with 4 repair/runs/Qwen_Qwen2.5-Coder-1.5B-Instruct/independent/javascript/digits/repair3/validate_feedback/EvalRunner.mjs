import * as M_utils from "./utils.mjs";
import * as M_service from "./service.mjs";
import * as M_main from "./main.mjs";
const tests = [{"m": "main", "f": "solve", "n": 0, "k": "main.solve|0"}, {"m": "main", "f": "solve", "n": 208, "k": "main.solve|208"}, {"m": "main", "f": "solve", "n": 1, "k": "main.solve|1"}, {"m": "main", "f": "solve", "n": -1, "k": "main.solve|-1"}, {"m": "service", "f": "score_digits", "n": 0, "k": "service.score_digits|0"}, {"m": "service", "f": "score_digits", "n": 208, "k": "service.score_digits|208"}, {"m": "service", "f": "score_digits", "n": 1, "k": "service.score_digits|1"}, {"m": "service", "f": "score_digits", "n": -1, "k": "service.score_digits|-1"}, {"m": "utils", "f": "digit_sum", "n": 0, "k": "utils.digit_sum|0"}, {"m": "utils", "f": "digit_sum", "n": 208, "k": "utils.digit_sum|208"}, {"m": "utils", "f": "digit_sum", "n": 1, "k": "utils.digit_sum|1"}, {"m": "utils", "f": "digit_sum", "n": -1, "k": "utils.digit_sum|-1"}];
const modules = {"utils":M_utils, "service":M_service, "main":M_main};
for (const t of tests) {
  try {
    const v = modules[t.m][t.f](t.n);
    if (!Number.isSafeInteger(v)) throw new Error("result must be a safe integer");
    console.log(JSON.stringify({k:t.k, v:v}));
  } catch (e) { console.log(JSON.stringify({k:t.k, error:String(e)})); }
}
