#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|401|" << solve(401) << "\n"; } catch (...) { std::cout << "main.solve|401|ERR" << "\n"; }
  try { std::cout << "main.solve|1500|" << solve(1500) << "\n"; } catch (...) { std::cout << "main.solve|1500|ERR" << "\n"; }
  try { std::cout << "main.solve|201|" << solve(201) << "\n"; } catch (...) { std::cout << "main.solve|201|ERR" << "\n"; }
  try { std::cout << "main.solve|200|" << solve(200) << "\n"; } catch (...) { std::cout << "main.solve|200|ERR" << "\n"; }
  try { std::cout << "main.solve|50|" << solve(50) << "\n"; } catch (...) { std::cout << "main.solve|50|ERR" << "\n"; }
  try { std::cout << "main.solve|100|" << solve(100) << "\n"; } catch (...) { std::cout << "main.solve|100|ERR" << "\n"; }
  try { std::cout << "main.solve|49|" << solve(49) << "\n"; } catch (...) { std::cout << "main.solve|49|ERR" << "\n"; }
  try { std::cout << "main.solve|199|" << solve(199) << "\n"; } catch (...) { std::cout << "main.solve|199|ERR" << "\n"; }
  try { std::cout << "main.solve|-1|" << solve(-1) << "\n"; } catch (...) { std::cout << "main.solve|-1|ERR" << "\n"; }
  try { std::cout << "service.energy_charge|401|" << energy_charge(401) << "\n"; } catch (...) { std::cout << "service.energy_charge|401|ERR" << "\n"; }
  try { std::cout << "service.energy_charge|1500|" << energy_charge(1500) << "\n"; } catch (...) { std::cout << "service.energy_charge|1500|ERR" << "\n"; }
  try { std::cout << "service.energy_charge|201|" << energy_charge(201) << "\n"; } catch (...) { std::cout << "service.energy_charge|201|ERR" << "\n"; }
  try { std::cout << "service.energy_charge|200|" << energy_charge(200) << "\n"; } catch (...) { std::cout << "service.energy_charge|200|ERR" << "\n"; }
  try { std::cout << "service.energy_charge|50|" << energy_charge(50) << "\n"; } catch (...) { std::cout << "service.energy_charge|50|ERR" << "\n"; }
  try { std::cout << "service.energy_charge|100|" << energy_charge(100) << "\n"; } catch (...) { std::cout << "service.energy_charge|100|ERR" << "\n"; }
  try { std::cout << "service.energy_charge|49|" << energy_charge(49) << "\n"; } catch (...) { std::cout << "service.energy_charge|49|ERR" << "\n"; }
  try { std::cout << "service.energy_charge|199|" << energy_charge(199) << "\n"; } catch (...) { std::cout << "service.energy_charge|199|ERR" << "\n"; }
  try { std::cout << "service.energy_charge|-1|" << energy_charge(-1) << "\n"; } catch (...) { std::cout << "service.energy_charge|-1|ERR" << "\n"; }
  try { std::cout << "utils.billable_units|401|" << billable_units(401) << "\n"; } catch (...) { std::cout << "utils.billable_units|401|ERR" << "\n"; }
  try { std::cout << "utils.billable_units|1500|" << billable_units(1500) << "\n"; } catch (...) { std::cout << "utils.billable_units|1500|ERR" << "\n"; }
  try { std::cout << "utils.billable_units|201|" << billable_units(201) << "\n"; } catch (...) { std::cout << "utils.billable_units|201|ERR" << "\n"; }
  try { std::cout << "utils.billable_units|200|" << billable_units(200) << "\n"; } catch (...) { std::cout << "utils.billable_units|200|ERR" << "\n"; }
  try { std::cout << "utils.billable_units|50|" << billable_units(50) << "\n"; } catch (...) { std::cout << "utils.billable_units|50|ERR" << "\n"; }
  try { std::cout << "utils.billable_units|100|" << billable_units(100) << "\n"; } catch (...) { std::cout << "utils.billable_units|100|ERR" << "\n"; }
  try { std::cout << "utils.billable_units|49|" << billable_units(49) << "\n"; } catch (...) { std::cout << "utils.billable_units|49|ERR" << "\n"; }
  try { std::cout << "utils.billable_units|199|" << billable_units(199) << "\n"; } catch (...) { std::cout << "utils.billable_units|199|ERR" << "\n"; }
  try { std::cout << "utils.billable_units|-1|" << billable_units(-1) << "\n"; } catch (...) { std::cout << "utils.billable_units|-1|ERR" << "\n"; }
return 0;
}
