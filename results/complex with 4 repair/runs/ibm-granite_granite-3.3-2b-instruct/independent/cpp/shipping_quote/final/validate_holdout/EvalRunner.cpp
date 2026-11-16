#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|2501|" << solve(2501) << "\n"; } catch (...) { std::cout << "main.solve|2501|ERR" << "\n"; }
  try { std::cout << "main.solve|-3000|" << solve(-3000) << "\n"; } catch (...) { std::cout << "main.solve|-3000|ERR" << "\n"; }
  try { std::cout << "main.solve|499|" << solve(499) << "\n"; } catch (...) { std::cout << "main.solve|499|ERR" << "\n"; }
  try { std::cout << "main.solve|5001|" << solve(5001) << "\n"; } catch (...) { std::cout << "main.solve|5001|ERR" << "\n"; }
  try { std::cout << "main.solve|501|" << solve(501) << "\n"; } catch (...) { std::cout << "main.solve|501|ERR" << "\n"; }
  try { std::cout << "main.solve|0|" << solve(0) << "\n"; } catch (...) { std::cout << "main.solve|0|ERR" << "\n"; }
  try { std::cout << "main.solve|1|" << solve(1) << "\n"; } catch (...) { std::cout << "main.solve|1|ERR" << "\n"; }
  try { std::cout << "main.solve|9999|" << solve(9999) << "\n"; } catch (...) { std::cout << "main.solve|9999|ERR" << "\n"; }
  try { std::cout << "main.solve|4999|" << solve(4999) << "\n"; } catch (...) { std::cout << "main.solve|4999|ERR" << "\n"; }
  try { std::cout << "service.transport_cost|2501|" << transport_cost(2501) << "\n"; } catch (...) { std::cout << "service.transport_cost|2501|ERR" << "\n"; }
  try { std::cout << "service.transport_cost|-3000|" << transport_cost(-3000) << "\n"; } catch (...) { std::cout << "service.transport_cost|-3000|ERR" << "\n"; }
  try { std::cout << "service.transport_cost|499|" << transport_cost(499) << "\n"; } catch (...) { std::cout << "service.transport_cost|499|ERR" << "\n"; }
  try { std::cout << "service.transport_cost|5001|" << transport_cost(5001) << "\n"; } catch (...) { std::cout << "service.transport_cost|5001|ERR" << "\n"; }
  try { std::cout << "service.transport_cost|501|" << transport_cost(501) << "\n"; } catch (...) { std::cout << "service.transport_cost|501|ERR" << "\n"; }
  try { std::cout << "service.transport_cost|0|" << transport_cost(0) << "\n"; } catch (...) { std::cout << "service.transport_cost|0|ERR" << "\n"; }
  try { std::cout << "service.transport_cost|1|" << transport_cost(1) << "\n"; } catch (...) { std::cout << "service.transport_cost|1|ERR" << "\n"; }
  try { std::cout << "service.transport_cost|9999|" << transport_cost(9999) << "\n"; } catch (...) { std::cout << "service.transport_cost|9999|ERR" << "\n"; }
  try { std::cout << "service.transport_cost|4999|" << transport_cost(4999) << "\n"; } catch (...) { std::cout << "service.transport_cost|4999|ERR" << "\n"; }
  try { std::cout << "utils.weight_blocks|2501|" << weight_blocks(2501) << "\n"; } catch (...) { std::cout << "utils.weight_blocks|2501|ERR" << "\n"; }
  try { std::cout << "utils.weight_blocks|-3000|" << weight_blocks(-3000) << "\n"; } catch (...) { std::cout << "utils.weight_blocks|-3000|ERR" << "\n"; }
  try { std::cout << "utils.weight_blocks|499|" << weight_blocks(499) << "\n"; } catch (...) { std::cout << "utils.weight_blocks|499|ERR" << "\n"; }
  try { std::cout << "utils.weight_blocks|5001|" << weight_blocks(5001) << "\n"; } catch (...) { std::cout << "utils.weight_blocks|5001|ERR" << "\n"; }
  try { std::cout << "utils.weight_blocks|501|" << weight_blocks(501) << "\n"; } catch (...) { std::cout << "utils.weight_blocks|501|ERR" << "\n"; }
  try { std::cout << "utils.weight_blocks|0|" << weight_blocks(0) << "\n"; } catch (...) { std::cout << "utils.weight_blocks|0|ERR" << "\n"; }
  try { std::cout << "utils.weight_blocks|1|" << weight_blocks(1) << "\n"; } catch (...) { std::cout << "utils.weight_blocks|1|ERR" << "\n"; }
  try { std::cout << "utils.weight_blocks|9999|" << weight_blocks(9999) << "\n"; } catch (...) { std::cout << "utils.weight_blocks|9999|ERR" << "\n"; }
  try { std::cout << "utils.weight_blocks|4999|" << weight_blocks(4999) << "\n"; } catch (...) { std::cout << "utils.weight_blocks|4999|ERR" << "\n"; }
return 0;
}
