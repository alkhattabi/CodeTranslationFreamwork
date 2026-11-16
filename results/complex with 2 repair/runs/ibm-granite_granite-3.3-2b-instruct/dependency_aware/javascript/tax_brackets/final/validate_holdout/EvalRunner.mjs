import * as M_utils from "./utils.mjs";
import * as M_service from "./service.mjs";
import * as M_main from "./main.mjs";
const tests = [{"m": "main", "f": "solve", "n": -1, "k": "main.solve|-1"}, {"m": "main", "f": "solve", "n": 0, "k": "main.solve|0"}, {"m": "main", "f": "solve", "n": 9500, "k": "main.solve|9500"}, {"m": "main", "f": "solve", "n": 25000, "k": "main.solve|25000"}, {"m": "main", "f": "solve", "n": 499, "k": "main.solve|499"}, {"m": "main", "f": "solve", "n": 3501, "k": "main.solve|3501"}, {"m": "main", "f": "solve", "n": -5000, "k": "main.solve|-5000"}, {"m": "main", "f": "solve", "n": 1, "k": "main.solve|1"}, {"m": "service", "f": "calculate_tax", "n": -1, "k": "service.calculate_tax|-1"}, {"m": "service", "f": "calculate_tax", "n": 0, "k": "service.calculate_tax|0"}, {"m": "service", "f": "calculate_tax", "n": 9500, "k": "service.calculate_tax|9500"}, {"m": "service", "f": "calculate_tax", "n": 25000, "k": "service.calculate_tax|25000"}, {"m": "service", "f": "calculate_tax", "n": 499, "k": "service.calculate_tax|499"}, {"m": "service", "f": "calculate_tax", "n": 3501, "k": "service.calculate_tax|3501"}, {"m": "service", "f": "calculate_tax", "n": -5000, "k": "service.calculate_tax|-5000"}, {"m": "service", "f": "calculate_tax", "n": 1, "k": "service.calculate_tax|1"}, {"m": "utils", "f": "taxable_income", "n": -1, "k": "utils.taxable_income|-1"}, {"m": "utils", "f": "taxable_income", "n": 0, "k": "utils.taxable_income|0"}, {"m": "utils", "f": "taxable_income", "n": 9500, "k": "utils.taxable_income|9500"}, {"m": "utils", "f": "taxable_income", "n": 25000, "k": "utils.taxable_income|25000"}, {"m": "utils", "f": "taxable_income", "n": 499, "k": "utils.taxable_income|499"}, {"m": "utils", "f": "taxable_income", "n": 3501, "k": "utils.taxable_income|3501"}, {"m": "utils", "f": "taxable_income", "n": -5000, "k": "utils.taxable_income|-5000"}, {"m": "utils", "f": "taxable_income", "n": 1, "k": "utils.taxable_income|1"}];
const modules = {"utils":M_utils, "service":M_service, "main":M_main};
for (const t of tests) {
  try {
    const v = modules[t.m][t.f](t.n);
    if (!Number.isSafeInteger(v)) throw new Error("result must be a safe integer");
    console.log(JSON.stringify({k:t.k, v:v}));
  } catch (e) { console.log(JSON.stringify({k:t.k, error:String(e)})); }
}
