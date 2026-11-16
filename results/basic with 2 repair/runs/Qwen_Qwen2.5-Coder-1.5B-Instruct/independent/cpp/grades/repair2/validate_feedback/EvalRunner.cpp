#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|53|" << solve(53) << "\n"; } catch (...) { std::cout << "main.solve|53|ERR" << "\n"; }
  try { std::cout << "main.solve|60|" << solve(60) << "\n"; } catch (...) { std::cout << "main.solve|60|ERR" << "\n"; }
  try { std::cout << "main.solve|100|" << solve(100) << "\n"; } catch (...) { std::cout << "main.solve|100|ERR" << "\n"; }
  try { std::cout << "main.solve|130|" << solve(130) << "\n"; } catch (...) { std::cout << "main.solve|130|ERR" << "\n"; }
  try { std::cout << "service.bonus_score|53|" << bonus_score(53) << "\n"; } catch (...) { std::cout << "service.bonus_score|53|ERR" << "\n"; }
  try { std::cout << "service.bonus_score|60|" << bonus_score(60) << "\n"; } catch (...) { std::cout << "service.bonus_score|60|ERR" << "\n"; }
  try { std::cout << "service.bonus_score|100|" << bonus_score(100) << "\n"; } catch (...) { std::cout << "service.bonus_score|100|ERR" << "\n"; }
  try { std::cout << "service.bonus_score|130|" << bonus_score(130) << "\n"; } catch (...) { std::cout << "service.bonus_score|130|ERR" << "\n"; }
  try { std::cout << "utils.clamp|53|" << clamp(53) << "\n"; } catch (...) { std::cout << "utils.clamp|53|ERR" << "\n"; }
  try { std::cout << "utils.clamp|60|" << clamp(60) << "\n"; } catch (...) { std::cout << "utils.clamp|60|ERR" << "\n"; }
  try { std::cout << "utils.clamp|100|" << clamp(100) << "\n"; } catch (...) { std::cout << "utils.clamp|100|ERR" << "\n"; }
  try { std::cout << "utils.clamp|130|" << clamp(130) << "\n"; } catch (...) { std::cout << "utils.clamp|130|ERR" << "\n"; }
return 0;
}
