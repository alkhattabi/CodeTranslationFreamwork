#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|101|" << solve(101) << "\n"; } catch (...) { std::cout << "main.solve|101|ERR" << "\n"; }
  try { std::cout << "main.solve|350|" << solve(350) << "\n"; } catch (...) { std::cout << "main.solve|350|ERR" << "\n"; }
  try { std::cout << "main.solve|400|" << solve(400) << "\n"; } catch (...) { std::cout << "main.solve|400|ERR" << "\n"; }
  try { std::cout << "main.solve|0|" << solve(0) << "\n"; } catch (...) { std::cout << "main.solve|0|ERR" << "\n"; }
  try { std::cout << "main.solve|99|" << solve(99) << "\n"; } catch (...) { std::cout << "main.solve|99|ERR" << "\n"; }
  try { std::cout << "main.solve|1|" << solve(1) << "\n"; } catch (...) { std::cout << "main.solve|1|ERR" << "\n"; }
  try { std::cout << "main.solve|700|" << solve(700) << "\n"; } catch (...) { std::cout << "main.solve|700|ERR" << "\n"; }
  try { std::cout << "main.solve|-50|" << solve(-50) << "\n"; } catch (...) { std::cout << "main.solve|-50|ERR" << "\n"; }
  try { std::cout << "main.solve|1000|" << solve(1000) << "\n"; } catch (...) { std::cout << "main.solve|1000|ERR" << "\n"; }
  try { std::cout << "service.energy_charge|101|" << energy_charge(101) << "\n"; } catch (...) { std::cout << "service.energy_charge|101|ERR" << "\n"; }
  try { std::cout << "service.energy_charge|350|" << energy_charge(350) << "\n"; } catch (...) { std::cout << "service.energy_charge|350|ERR" << "\n"; }
  try { std::cout << "service.energy_charge|400|" << energy_charge(400) << "\n"; } catch (...) { std::cout << "service.energy_charge|400|ERR" << "\n"; }
  try { std::cout << "service.energy_charge|0|" << energy_charge(0) << "\n"; } catch (...) { std::cout << "service.energy_charge|0|ERR" << "\n"; }
  try { std::cout << "service.energy_charge|99|" << energy_charge(99) << "\n"; } catch (...) { std::cout << "service.energy_charge|99|ERR" << "\n"; }
  try { std::cout << "service.energy_charge|1|" << energy_charge(1) << "\n"; } catch (...) { std::cout << "service.energy_charge|1|ERR" << "\n"; }
  try { std::cout << "service.energy_charge|700|" << energy_charge(700) << "\n"; } catch (...) { std::cout << "service.energy_charge|700|ERR" << "\n"; }
  try { std::cout << "service.energy_charge|-50|" << energy_charge(-50) << "\n"; } catch (...) { std::cout << "service.energy_charge|-50|ERR" << "\n"; }
  try { std::cout << "service.energy_charge|1000|" << energy_charge(1000) << "\n"; } catch (...) { std::cout << "service.energy_charge|1000|ERR" << "\n"; }
  try { std::cout << "utils.billable_units|101|" << billable_units(101) << "\n"; } catch (...) { std::cout << "utils.billable_units|101|ERR" << "\n"; }
  try { std::cout << "utils.billable_units|350|" << billable_units(350) << "\n"; } catch (...) { std::cout << "utils.billable_units|350|ERR" << "\n"; }
  try { std::cout << "utils.billable_units|400|" << billable_units(400) << "\n"; } catch (...) { std::cout << "utils.billable_units|400|ERR" << "\n"; }
  try { std::cout << "utils.billable_units|0|" << billable_units(0) << "\n"; } catch (...) { std::cout << "utils.billable_units|0|ERR" << "\n"; }
  try { std::cout << "utils.billable_units|99|" << billable_units(99) << "\n"; } catch (...) { std::cout << "utils.billable_units|99|ERR" << "\n"; }
  try { std::cout << "utils.billable_units|1|" << billable_units(1) << "\n"; } catch (...) { std::cout << "utils.billable_units|1|ERR" << "\n"; }
  try { std::cout << "utils.billable_units|700|" << billable_units(700) << "\n"; } catch (...) { std::cout << "utils.billable_units|700|ERR" << "\n"; }
  try { std::cout << "utils.billable_units|-50|" << billable_units(-50) << "\n"; } catch (...) { std::cout << "utils.billable_units|-50|ERR" << "\n"; }
  try { std::cout << "utils.billable_units|1000|" << billable_units(1000) << "\n"; } catch (...) { std::cout << "utils.billable_units|1000|ERR" << "\n"; }
return 0;
}
