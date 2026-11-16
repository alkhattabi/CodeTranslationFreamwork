#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|0|" << solve(0) << "\n"; } catch (...) { std::cout << "main.solve|0|ERR" << "\n"; }
  try { std::cout << "main.solve|10|" << solve(10) << "\n"; } catch (...) { std::cout << "main.solve|10|ERR" << "\n"; }
  try { std::cout << "main.solve|49|" << solve(49) << "\n"; } catch (...) { std::cout << "main.solve|49|ERR" << "\n"; }
  try { std::cout << "main.solve|150|" << solve(150) << "\n"; } catch (...) { std::cout << "main.solve|150|ERR" << "\n"; }
  try { std::cout << "main.solve|100|" << solve(100) << "\n"; } catch (...) { std::cout << "main.solve|100|ERR" << "\n"; }
  try { std::cout << "service.discount|0|" << discount(0) << "\n"; } catch (...) { std::cout << "service.discount|0|ERR" << "\n"; }
  try { std::cout << "service.discount|10|" << discount(10) << "\n"; } catch (...) { std::cout << "service.discount|10|ERR" << "\n"; }
  try { std::cout << "service.discount|49|" << discount(49) << "\n"; } catch (...) { std::cout << "service.discount|49|ERR" << "\n"; }
  try { std::cout << "service.discount|150|" << discount(150) << "\n"; } catch (...) { std::cout << "service.discount|150|ERR" << "\n"; }
  try { std::cout << "service.discount|100|" << discount(100) << "\n"; } catch (...) { std::cout << "service.discount|100|ERR" << "\n"; }
  try { std::cout << "utils.tier|0|" << tier(0) << "\n"; } catch (...) { std::cout << "utils.tier|0|ERR" << "\n"; }
  try { std::cout << "utils.tier|10|" << tier(10) << "\n"; } catch (...) { std::cout << "utils.tier|10|ERR" << "\n"; }
  try { std::cout << "utils.tier|49|" << tier(49) << "\n"; } catch (...) { std::cout << "utils.tier|49|ERR" << "\n"; }
  try { std::cout << "utils.tier|150|" << tier(150) << "\n"; } catch (...) { std::cout << "utils.tier|150|ERR" << "\n"; }
  try { std::cout << "utils.tier|100|" << tier(100) << "\n"; } catch (...) { std::cout << "utils.tier|100|ERR" << "\n"; }
return 0;
}
