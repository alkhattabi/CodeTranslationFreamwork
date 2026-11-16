#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|-5|" << solve(-5) << "\n"; } catch (...) { std::cout << "main.solve|-5|ERR" << "\n"; }
  try { std::cout << "main.solve|9|" << solve(9) << "\n"; } catch (...) { std::cout << "main.solve|9|ERR" << "\n"; }
  try { std::cout << "main.solve|99|" << solve(99) << "\n"; } catch (...) { std::cout << "main.solve|99|ERR" << "\n"; }
  try { std::cout << "main.solve|50|" << solve(50) << "\n"; } catch (...) { std::cout << "main.solve|50|ERR" << "\n"; }
  try { std::cout << "main.solve|12|" << solve(12) << "\n"; } catch (...) { std::cout << "main.solve|12|ERR" << "\n"; }
  try { std::cout << "service.discount|-5|" << discount(-5) << "\n"; } catch (...) { std::cout << "service.discount|-5|ERR" << "\n"; }
  try { std::cout << "service.discount|9|" << discount(9) << "\n"; } catch (...) { std::cout << "service.discount|9|ERR" << "\n"; }
  try { std::cout << "service.discount|99|" << discount(99) << "\n"; } catch (...) { std::cout << "service.discount|99|ERR" << "\n"; }
  try { std::cout << "service.discount|50|" << discount(50) << "\n"; } catch (...) { std::cout << "service.discount|50|ERR" << "\n"; }
  try { std::cout << "service.discount|12|" << discount(12) << "\n"; } catch (...) { std::cout << "service.discount|12|ERR" << "\n"; }
  try { std::cout << "utils.tier|-5|" << tier(-5) << "\n"; } catch (...) { std::cout << "utils.tier|-5|ERR" << "\n"; }
  try { std::cout << "utils.tier|9|" << tier(9) << "\n"; } catch (...) { std::cout << "utils.tier|9|ERR" << "\n"; }
  try { std::cout << "utils.tier|99|" << tier(99) << "\n"; } catch (...) { std::cout << "utils.tier|99|ERR" << "\n"; }
  try { std::cout << "utils.tier|50|" << tier(50) << "\n"; } catch (...) { std::cout << "utils.tier|50|ERR" << "\n"; }
  try { std::cout << "utils.tier|12|" << tier(12) << "\n"; } catch (...) { std::cout << "utils.tier|12|ERR" << "\n"; }
return 0;
}
