import * as M_utils from "./utils.mjs";
import * as M_service from "./service.mjs";
import * as M_main from "./main.mjs";
const tests = [{"m": "main", "f": "solve", "n": 1000, "k": "main.solve|1000"}, {"m": "main", "f": "solve", "n": 3499, "k": "main.solve|3499"}, {"m": "main", "f": "solve", "n": 500, "k": "main.solve|500"}, {"m": "main", "f": "solve", "n": 501, "k": "main.solve|501"}, {"m": "main", "f": "solve", "n": 15000, "k": "main.solve|15000"}, {"m": "main", "f": "solve", "n": 3500, "k": "main.solve|3500"}, {"m": "main", "f": "solve", "n": 7000, "k": "main.solve|7000"}, {"m": "main", "f": "solve", "n": 1500, "k": "main.solve|1500"}, {"m": "service", "f": "calculate_tax", "n": 1000, "k": "service.calculate_tax|1000"}, {"m": "service", "f": "calculate_tax", "n": 3499, "k": "service.calculate_tax|3499"}, {"m": "service", "f": "calculate_tax", "n": 500, "k": "service.calculate_tax|500"}, {"m": "service", "f": "calculate_tax", "n": 501, "k": "service.calculate_tax|501"}, {"m": "service", "f": "calculate_tax", "n": 15000, "k": "service.calculate_tax|15000"}, {"m": "service", "f": "calculate_tax", "n": 3500, "k": "service.calculate_tax|3500"}, {"m": "service", "f": "calculate_tax", "n": 7000, "k": "service.calculate_tax|7000"}, {"m": "service", "f": "calculate_tax", "n": 1500, "k": "service.calculate_tax|1500"}, {"m": "utils", "f": "taxable_income", "n": 1000, "k": "utils.taxable_income|1000"}, {"m": "utils", "f": "taxable_income", "n": 3499, "k": "utils.taxable_income|3499"}, {"m": "utils", "f": "taxable_income", "n": 500, "k": "utils.taxable_income|500"}, {"m": "utils", "f": "taxable_income", "n": 501, "k": "utils.taxable_income|501"}, {"m": "utils", "f": "taxable_income", "n": 15000, "k": "utils.taxable_income|15000"}, {"m": "utils", "f": "taxable_income", "n": 3500, "k": "utils.taxable_income|3500"}, {"m": "utils", "f": "taxable_income", "n": 7000, "k": "utils.taxable_income|7000"}, {"m": "utils", "f": "taxable_income", "n": 1500, "k": "utils.taxable_income|1500"}];
const modules = {"utils":M_utils, "service":M_service, "main":M_main};
for (const t of tests) {
  try {
    const v = modules[t.m][t.f](t.n);
    if (!Number.isSafeInteger(v)) throw new Error("result must be a safe integer");
    console.log(JSON.stringify({k:t.k, v:v}));
  } catch (e) { console.log(JSON.stringify({k:t.k, error:String(e)})); }
}
