#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|8|" << solve(8) << "\n"; } catch (...) { std::cout << "main.solve|8|ERR" << "\n"; }
  try { std::cout << "main.solve|-9|" << solve(-9) << "\n"; } catch (...) { std::cout << "main.solve|-9|ERR" << "\n"; }
  try { std::cout << "main.solve|1|" << solve(1) << "\n"; } catch (...) { std::cout << "main.solve|1|ERR" << "\n"; }
  try { std::cout << "main.solve|-1|" << solve(-1) << "\n"; } catch (...) { std::cout << "main.solve|-1|ERR" << "\n"; }
  try { std::cout << "service.weighted|8|" << weighted(8) << "\n"; } catch (...) { std::cout << "service.weighted|8|ERR" << "\n"; }
  try { std::cout << "service.weighted|-9|" << weighted(-9) << "\n"; } catch (...) { std::cout << "service.weighted|-9|ERR" << "\n"; }
  try { std::cout << "service.weighted|1|" << weighted(1) << "\n"; } catch (...) { std::cout << "service.weighted|1|ERR" << "\n"; }
  try { std::cout << "service.weighted|-1|" << weighted(-1) << "\n"; } catch (...) { std::cout << "service.weighted|-1|ERR" << "\n"; }
  try { std::cout << "utils.normalize|8|" << normalize(8) << "\n"; } catch (...) { std::cout << "utils.normalize|8|ERR" << "\n"; }
  try { std::cout << "utils.normalize|-9|" << normalize(-9) << "\n"; } catch (...) { std::cout << "utils.normalize|-9|ERR" << "\n"; }
  try { std::cout << "utils.normalize|1|" << normalize(1) << "\n"; } catch (...) { std::cout << "utils.normalize|1|ERR" << "\n"; }
  try { std::cout << "utils.normalize|-1|" << normalize(-1) << "\n"; } catch (...) { std::cout << "utils.normalize|-1|ERR" << "\n"; }
return 0;
}
