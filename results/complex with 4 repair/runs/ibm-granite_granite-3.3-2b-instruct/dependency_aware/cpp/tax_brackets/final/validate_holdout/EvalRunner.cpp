#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|-1|" << solve(-1) << "\n"; } catch (...) { std::cout << "main.solve|-1|ERR" << "\n"; }
  try { std::cout << "main.solve|0|" << solve(0) << "\n"; } catch (...) { std::cout << "main.solve|0|ERR" << "\n"; }
  try { std::cout << "main.solve|9500|" << solve(9500) << "\n"; } catch (...) { std::cout << "main.solve|9500|ERR" << "\n"; }
  try { std::cout << "main.solve|25000|" << solve(25000) << "\n"; } catch (...) { std::cout << "main.solve|25000|ERR" << "\n"; }
  try { std::cout << "main.solve|499|" << solve(499) << "\n"; } catch (...) { std::cout << "main.solve|499|ERR" << "\n"; }
  try { std::cout << "main.solve|3501|" << solve(3501) << "\n"; } catch (...) { std::cout << "main.solve|3501|ERR" << "\n"; }
  try { std::cout << "main.solve|-5000|" << solve(-5000) << "\n"; } catch (...) { std::cout << "main.solve|-5000|ERR" << "\n"; }
  try { std::cout << "main.solve|1|" << solve(1) << "\n"; } catch (...) { std::cout << "main.solve|1|ERR" << "\n"; }
  try { std::cout << "service.calculate_tax|-1|" << calculate_tax(-1) << "\n"; } catch (...) { std::cout << "service.calculate_tax|-1|ERR" << "\n"; }
  try { std::cout << "service.calculate_tax|0|" << calculate_tax(0) << "\n"; } catch (...) { std::cout << "service.calculate_tax|0|ERR" << "\n"; }
  try { std::cout << "service.calculate_tax|9500|" << calculate_tax(9500) << "\n"; } catch (...) { std::cout << "service.calculate_tax|9500|ERR" << "\n"; }
  try { std::cout << "service.calculate_tax|25000|" << calculate_tax(25000) << "\n"; } catch (...) { std::cout << "service.calculate_tax|25000|ERR" << "\n"; }
  try { std::cout << "service.calculate_tax|499|" << calculate_tax(499) << "\n"; } catch (...) { std::cout << "service.calculate_tax|499|ERR" << "\n"; }
  try { std::cout << "service.calculate_tax|3501|" << calculate_tax(3501) << "\n"; } catch (...) { std::cout << "service.calculate_tax|3501|ERR" << "\n"; }
  try { std::cout << "service.calculate_tax|-5000|" << calculate_tax(-5000) << "\n"; } catch (...) { std::cout << "service.calculate_tax|-5000|ERR" << "\n"; }
  try { std::cout << "service.calculate_tax|1|" << calculate_tax(1) << "\n"; } catch (...) { std::cout << "service.calculate_tax|1|ERR" << "\n"; }
  try { std::cout << "utils.taxable_income|-1|" << taxable_income(-1) << "\n"; } catch (...) { std::cout << "utils.taxable_income|-1|ERR" << "\n"; }
  try { std::cout << "utils.taxable_income|0|" << taxable_income(0) << "\n"; } catch (...) { std::cout << "utils.taxable_income|0|ERR" << "\n"; }
  try { std::cout << "utils.taxable_income|9500|" << taxable_income(9500) << "\n"; } catch (...) { std::cout << "utils.taxable_income|9500|ERR" << "\n"; }
  try { std::cout << "utils.taxable_income|25000|" << taxable_income(25000) << "\n"; } catch (...) { std::cout << "utils.taxable_income|25000|ERR" << "\n"; }
  try { std::cout << "utils.taxable_income|499|" << taxable_income(499) << "\n"; } catch (...) { std::cout << "utils.taxable_income|499|ERR" << "\n"; }
  try { std::cout << "utils.taxable_income|3501|" << taxable_income(3501) << "\n"; } catch (...) { std::cout << "utils.taxable_income|3501|ERR" << "\n"; }
  try { std::cout << "utils.taxable_income|-5000|" << taxable_income(-5000) << "\n"; } catch (...) { std::cout << "utils.taxable_income|-5000|ERR" << "\n"; }
  try { std::cout << "utils.taxable_income|1|" << taxable_income(1) << "\n"; } catch (...) { std::cout << "utils.taxable_income|1|ERR" << "\n"; }
return 0;
}
