#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|0|" << solve(0) << "\n"; } catch (...) { std::cout << "main.solve|0|ERR" << "\n"; }
  try { std::cout << "main.solve|10|" << solve(10) << "\n"; } catch (...) { std::cout << "main.solve|10|ERR" << "\n"; }
  try { std::cout << "main.solve|1|" << solve(1) << "\n"; } catch (...) { std::cout << "main.solve|1|ERR" << "\n"; }
  try { std::cout << "main.solve|-3|" << solve(-3) << "\n"; } catch (...) { std::cout << "main.solve|-3|ERR" << "\n"; }
  try { std::cout << "service.gross|0|" << gross(0) << "\n"; } catch (...) { std::cout << "service.gross|0|ERR" << "\n"; }
  try { std::cout << "service.gross|10|" << gross(10) << "\n"; } catch (...) { std::cout << "service.gross|10|ERR" << "\n"; }
  try { std::cout << "service.gross|1|" << gross(1) << "\n"; } catch (...) { std::cout << "service.gross|1|ERR" << "\n"; }
  try { std::cout << "service.gross|-3|" << gross(-3) << "\n"; } catch (...) { std::cout << "service.gross|-3|ERR" << "\n"; }
  try { std::cout << "utils.unit_price|0|" << unit_price(0) << "\n"; } catch (...) { std::cout << "utils.unit_price|0|ERR" << "\n"; }
  try { std::cout << "utils.unit_price|10|" << unit_price(10) << "\n"; } catch (...) { std::cout << "utils.unit_price|10|ERR" << "\n"; }
  try { std::cout << "utils.unit_price|1|" << unit_price(1) << "\n"; } catch (...) { std::cout << "utils.unit_price|1|ERR" << "\n"; }
  try { std::cout << "utils.unit_price|-3|" << unit_price(-3) << "\n"; } catch (...) { std::cout << "utils.unit_price|-3|ERR" << "\n"; }
return 0;
}
