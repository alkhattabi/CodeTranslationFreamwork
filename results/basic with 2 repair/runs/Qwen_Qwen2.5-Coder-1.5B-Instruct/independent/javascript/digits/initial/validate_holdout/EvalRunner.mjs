import * as M_utils from "./utils.mjs";
import * as M_service from "./service.mjs";
import * as M_main from "./main.mjs";
const tests = [{"m": "main", "f": "solve", "n": -123, "k": "main.solve|-123"}, {"m": "main", "f": "solve", "n": 1005, "k": "main.solve|1005"}, {"m": "main", "f": "solve", "n": 37, "k": "main.solve|37"}, {"m": "main", "f": "solve", "n": 999, "k": "main.solve|999"}, {"m": "service", "f": "score_digits", "n": -123, "k": "service.score_digits|-123"}, {"m": "service", "f": "score_digits", "n": 1005, "k": "service.score_digits|1005"}, {"m": "service", "f": "score_digits", "n": 37, "k": "service.score_digits|37"}, {"m": "service", "f": "score_digits", "n": 999, "k": "service.score_digits|999"}, {"m": "utils", "f": "digit_sum", "n": -123, "k": "utils.digit_sum|-123"}, {"m": "utils", "f": "digit_sum", "n": 1005, "k": "utils.digit_sum|1005"}, {"m": "utils", "f": "digit_sum", "n": 37, "k": "utils.digit_sum|37"}, {"m": "utils", "f": "digit_sum", "n": 999, "k": "utils.digit_sum|999"}];
const modules = {"utils":M_utils, "service":M_service, "main":M_main};
for (const t of tests) {
  try {
    const v = modules[t.m][t.f](t.n);
    if (!Number.isSafeInteger(v)) throw new Error("result must be a safe integer");
    console.log(JSON.stringify({k:t.k, v:v}));
  } catch (e) { console.log(JSON.stringify({k:t.k, error:String(e)})); }
}
