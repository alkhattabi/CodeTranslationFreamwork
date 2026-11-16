#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|100|" << solve(100) << "\n"; } catch (...) { std::cout << "main.solve|100|ERR" << "\n"; }
  try { std::cout << "main.solve|27|" << solve(27) << "\n"; } catch (...) { std::cout << "main.solve|27|ERR" << "\n"; }
  try { std::cout << "main.solve|0|" << solve(0) << "\n"; } catch (...) { std::cout << "main.solve|0|ERR" << "\n"; }
  try { std::cout << "main.solve|200|" << solve(200) << "\n"; } catch (...) { std::cout << "main.solve|200|ERR" << "\n"; }
  try { std::cout << "service.weighted|100|" << weighted(100) << "\n"; } catch (...) { std::cout << "service.weighted|100|ERR" << "\n"; }
  try { std::cout << "service.weighted|27|" << weighted(27) << "\n"; } catch (...) { std::cout << "service.weighted|27|ERR" << "\n"; }
  try { std::cout << "service.weighted|0|" << weighted(0) << "\n"; } catch (...) { std::cout << "service.weighted|0|ERR" << "\n"; }
  try { std::cout << "service.weighted|200|" << weighted(200) << "\n"; } catch (...) { std::cout << "service.weighted|200|ERR" << "\n"; }
  try { std::cout << "utils.normalize|100|" << normalize(100) << "\n"; } catch (...) { std::cout << "utils.normalize|100|ERR" << "\n"; }
  try { std::cout << "utils.normalize|27|" << normalize(27) << "\n"; } catch (...) { std::cout << "utils.normalize|27|ERR" << "\n"; }
  try { std::cout << "utils.normalize|0|" << normalize(0) << "\n"; } catch (...) { std::cout << "utils.normalize|0|ERR" << "\n"; }
  try { std::cout << "utils.normalize|200|" << normalize(200) << "\n"; } catch (...) { std::cout << "utils.normalize|200|ERR" << "\n"; }
return 0;
}
