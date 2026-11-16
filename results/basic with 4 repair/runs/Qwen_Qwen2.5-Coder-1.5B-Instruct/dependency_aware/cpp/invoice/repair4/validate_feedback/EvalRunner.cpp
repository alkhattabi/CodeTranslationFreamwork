#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|11|" << solve(11) << "\n"; } catch (...) { std::cout << "main.solve|11|ERR" << "\n"; }
  try { std::cout << "main.solve|50|" << solve(50) << "\n"; } catch (...) { std::cout << "main.solve|50|ERR" << "\n"; }
  try { std::cout << "main.solve|9|" << solve(9) << "\n"; } catch (...) { std::cout << "main.solve|9|ERR" << "\n"; }
  try { std::cout << "main.solve|7|" << solve(7) << "\n"; } catch (...) { std::cout << "main.solve|7|ERR" << "\n"; }
  try { std::cout << "service.gross|11|" << gross(11) << "\n"; } catch (...) { std::cout << "service.gross|11|ERR" << "\n"; }
  try { std::cout << "service.gross|50|" << gross(50) << "\n"; } catch (...) { std::cout << "service.gross|50|ERR" << "\n"; }
  try { std::cout << "service.gross|9|" << gross(9) << "\n"; } catch (...) { std::cout << "service.gross|9|ERR" << "\n"; }
  try { std::cout << "service.gross|7|" << gross(7) << "\n"; } catch (...) { std::cout << "service.gross|7|ERR" << "\n"; }
  try { std::cout << "utils.unit_price|11|" << unit_price(11) << "\n"; } catch (...) { std::cout << "utils.unit_price|11|ERR" << "\n"; }
  try { std::cout << "utils.unit_price|50|" << unit_price(50) << "\n"; } catch (...) { std::cout << "utils.unit_price|50|ERR" << "\n"; }
  try { std::cout << "utils.unit_price|9|" << unit_price(9) << "\n"; } catch (...) { std::cout << "utils.unit_price|9|ERR" << "\n"; }
  try { std::cout << "utils.unit_price|7|" << unit_price(7) << "\n"; } catch (...) { std::cout << "utils.unit_price|7|ERR" << "\n"; }
return 0;
}
