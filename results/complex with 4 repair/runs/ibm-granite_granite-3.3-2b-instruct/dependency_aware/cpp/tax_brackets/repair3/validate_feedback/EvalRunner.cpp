#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|1000|" << solve(1000) << "\n"; } catch (...) { std::cout << "main.solve|1000|ERR" << "\n"; }
  try { std::cout << "main.solve|3499|" << solve(3499) << "\n"; } catch (...) { std::cout << "main.solve|3499|ERR" << "\n"; }
  try { std::cout << "main.solve|500|" << solve(500) << "\n"; } catch (...) { std::cout << "main.solve|500|ERR" << "\n"; }
  try { std::cout << "main.solve|501|" << solve(501) << "\n"; } catch (...) { std::cout << "main.solve|501|ERR" << "\n"; }
  try { std::cout << "main.solve|15000|" << solve(15000) << "\n"; } catch (...) { std::cout << "main.solve|15000|ERR" << "\n"; }
  try { std::cout << "main.solve|3500|" << solve(3500) << "\n"; } catch (...) { std::cout << "main.solve|3500|ERR" << "\n"; }
  try { std::cout << "main.solve|7000|" << solve(7000) << "\n"; } catch (...) { std::cout << "main.solve|7000|ERR" << "\n"; }
  try { std::cout << "main.solve|1500|" << solve(1500) << "\n"; } catch (...) { std::cout << "main.solve|1500|ERR" << "\n"; }
  try { std::cout << "service.calculate_tax|1000|" << calculate_tax(1000) << "\n"; } catch (...) { std::cout << "service.calculate_tax|1000|ERR" << "\n"; }
  try { std::cout << "service.calculate_tax|3499|" << calculate_tax(3499) << "\n"; } catch (...) { std::cout << "service.calculate_tax|3499|ERR" << "\n"; }
  try { std::cout << "service.calculate_tax|500|" << calculate_tax(500) << "\n"; } catch (...) { std::cout << "service.calculate_tax|500|ERR" << "\n"; }
  try { std::cout << "service.calculate_tax|501|" << calculate_tax(501) << "\n"; } catch (...) { std::cout << "service.calculate_tax|501|ERR" << "\n"; }
  try { std::cout << "service.calculate_tax|15000|" << calculate_tax(15000) << "\n"; } catch (...) { std::cout << "service.calculate_tax|15000|ERR" << "\n"; }
  try { std::cout << "service.calculate_tax|3500|" << calculate_tax(3500) << "\n"; } catch (...) { std::cout << "service.calculate_tax|3500|ERR" << "\n"; }
  try { std::cout << "service.calculate_tax|7000|" << calculate_tax(7000) << "\n"; } catch (...) { std::cout << "service.calculate_tax|7000|ERR" << "\n"; }
  try { std::cout << "service.calculate_tax|1500|" << calculate_tax(1500) << "\n"; } catch (...) { std::cout << "service.calculate_tax|1500|ERR" << "\n"; }
  try { std::cout << "utils.taxable_income|1000|" << taxable_income(1000) << "\n"; } catch (...) { std::cout << "utils.taxable_income|1000|ERR" << "\n"; }
  try { std::cout << "utils.taxable_income|3499|" << taxable_income(3499) << "\n"; } catch (...) { std::cout << "utils.taxable_income|3499|ERR" << "\n"; }
  try { std::cout << "utils.taxable_income|500|" << taxable_income(500) << "\n"; } catch (...) { std::cout << "utils.taxable_income|500|ERR" << "\n"; }
  try { std::cout << "utils.taxable_income|501|" << taxable_income(501) << "\n"; } catch (...) { std::cout << "utils.taxable_income|501|ERR" << "\n"; }
  try { std::cout << "utils.taxable_income|15000|" << taxable_income(15000) << "\n"; } catch (...) { std::cout << "utils.taxable_income|15000|ERR" << "\n"; }
  try { std::cout << "utils.taxable_income|3500|" << taxable_income(3500) << "\n"; } catch (...) { std::cout << "utils.taxable_income|3500|ERR" << "\n"; }
  try { std::cout << "utils.taxable_income|7000|" << taxable_income(7000) << "\n"; } catch (...) { std::cout << "utils.taxable_income|7000|ERR" << "\n"; }
  try { std::cout << "utils.taxable_income|1500|" << taxable_income(1500) << "\n"; } catch (...) { std::cout << "utils.taxable_income|1500|ERR" << "\n"; }
return 0;
}
