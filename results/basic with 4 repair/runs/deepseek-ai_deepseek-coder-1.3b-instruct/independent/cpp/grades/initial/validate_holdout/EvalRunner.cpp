#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|52|" << solve(52) << "\n"; } catch (...) { std::cout << "main.solve|52|ERR" << "\n"; }
  try { std::cout << "main.solve|95|" << solve(95) << "\n"; } catch (...) { std::cout << "main.solve|95|ERR" << "\n"; }
  try { std::cout << "main.solve|-10|" << solve(-10) << "\n"; } catch (...) { std::cout << "main.solve|-10|ERR" << "\n"; }
  try { std::cout << "main.solve|0|" << solve(0) << "\n"; } catch (...) { std::cout << "main.solve|0|ERR" << "\n"; }
  try { std::cout << "service.bonus_score|52|" << bonus_score(52) << "\n"; } catch (...) { std::cout << "service.bonus_score|52|ERR" << "\n"; }
  try { std::cout << "service.bonus_score|95|" << bonus_score(95) << "\n"; } catch (...) { std::cout << "service.bonus_score|95|ERR" << "\n"; }
  try { std::cout << "service.bonus_score|-10|" << bonus_score(-10) << "\n"; } catch (...) { std::cout << "service.bonus_score|-10|ERR" << "\n"; }
  try { std::cout << "service.bonus_score|0|" << bonus_score(0) << "\n"; } catch (...) { std::cout << "service.bonus_score|0|ERR" << "\n"; }
  try { std::cout << "utils.clamp|52|" << clamp(52) << "\n"; } catch (...) { std::cout << "utils.clamp|52|ERR" << "\n"; }
  try { std::cout << "utils.clamp|95|" << clamp(95) << "\n"; } catch (...) { std::cout << "utils.clamp|95|ERR" << "\n"; }
  try { std::cout << "utils.clamp|-10|" << clamp(-10) << "\n"; } catch (...) { std::cout << "utils.clamp|-10|ERR" << "\n"; }
  try { std::cout << "utils.clamp|0|" << clamp(0) << "\n"; } catch (...) { std::cout << "utils.clamp|0|ERR" << "\n"; }
return 0;
}
