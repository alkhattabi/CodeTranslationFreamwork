#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|10000|" << solve(10000) << "\n"; } catch (...) { std::cout << "main.solve|10000|ERR" << "\n"; }
  try { std::cout << "main.solve|500|" << solve(500) << "\n"; } catch (...) { std::cout << "main.solve|500|ERR" << "\n"; }
  try { std::cout << "main.solve|1001|" << solve(1001) << "\n"; } catch (...) { std::cout << "main.solve|1001|ERR" << "\n"; }
  try { std::cout << "main.solve|5000|" << solve(5000) << "\n"; } catch (...) { std::cout << "main.solve|5000|ERR" << "\n"; }
  try { std::cout << "main.solve|2500|" << solve(2500) << "\n"; } catch (...) { std::cout << "main.solve|2500|ERR" << "\n"; }
  try { std::cout << "main.solve|1000|" << solve(1000) << "\n"; } catch (...) { std::cout << "main.solve|1000|ERR" << "\n"; }
  try { std::cout << "main.solve|999|" << solve(999) << "\n"; } catch (...) { std::cout << "main.solve|999|ERR" << "\n"; }
  try { std::cout << "main.solve|2499|" << solve(2499) << "\n"; } catch (...) { std::cout << "main.solve|2499|ERR" << "\n"; }
  try { std::cout << "main.solve|-1|" << solve(-1) << "\n"; } catch (...) { std::cout << "main.solve|-1|ERR" << "\n"; }
  try { std::cout << "service.transport_cost|10000|" << transport_cost(10000) << "\n"; } catch (...) { std::cout << "service.transport_cost|10000|ERR" << "\n"; }
  try { std::cout << "service.transport_cost|500|" << transport_cost(500) << "\n"; } catch (...) { std::cout << "service.transport_cost|500|ERR" << "\n"; }
  try { std::cout << "service.transport_cost|1001|" << transport_cost(1001) << "\n"; } catch (...) { std::cout << "service.transport_cost|1001|ERR" << "\n"; }
  try { std::cout << "service.transport_cost|5000|" << transport_cost(5000) << "\n"; } catch (...) { std::cout << "service.transport_cost|5000|ERR" << "\n"; }
  try { std::cout << "service.transport_cost|2500|" << transport_cost(2500) << "\n"; } catch (...) { std::cout << "service.transport_cost|2500|ERR" << "\n"; }
  try { std::cout << "service.transport_cost|1000|" << transport_cost(1000) << "\n"; } catch (...) { std::cout << "service.transport_cost|1000|ERR" << "\n"; }
  try { std::cout << "service.transport_cost|999|" << transport_cost(999) << "\n"; } catch (...) { std::cout << "service.transport_cost|999|ERR" << "\n"; }
  try { std::cout << "service.transport_cost|2499|" << transport_cost(2499) << "\n"; } catch (...) { std::cout << "service.transport_cost|2499|ERR" << "\n"; }
  try { std::cout << "service.transport_cost|-1|" << transport_cost(-1) << "\n"; } catch (...) { std::cout << "service.transport_cost|-1|ERR" << "\n"; }
  try { std::cout << "utils.weight_blocks|10000|" << weight_blocks(10000) << "\n"; } catch (...) { std::cout << "utils.weight_blocks|10000|ERR" << "\n"; }
  try { std::cout << "utils.weight_blocks|500|" << weight_blocks(500) << "\n"; } catch (...) { std::cout << "utils.weight_blocks|500|ERR" << "\n"; }
  try { std::cout << "utils.weight_blocks|1001|" << weight_blocks(1001) << "\n"; } catch (...) { std::cout << "utils.weight_blocks|1001|ERR" << "\n"; }
  try { std::cout << "utils.weight_blocks|5000|" << weight_blocks(5000) << "\n"; } catch (...) { std::cout << "utils.weight_blocks|5000|ERR" << "\n"; }
  try { std::cout << "utils.weight_blocks|2500|" << weight_blocks(2500) << "\n"; } catch (...) { std::cout << "utils.weight_blocks|2500|ERR" << "\n"; }
  try { std::cout << "utils.weight_blocks|1000|" << weight_blocks(1000) << "\n"; } catch (...) { std::cout << "utils.weight_blocks|1000|ERR" << "\n"; }
  try { std::cout << "utils.weight_blocks|999|" << weight_blocks(999) << "\n"; } catch (...) { std::cout << "utils.weight_blocks|999|ERR" << "\n"; }
  try { std::cout << "utils.weight_blocks|2499|" << weight_blocks(2499) << "\n"; } catch (...) { std::cout << "utils.weight_blocks|2499|ERR" << "\n"; }
  try { std::cout << "utils.weight_blocks|-1|" << weight_blocks(-1) << "\n"; } catch (...) { std::cout << "utils.weight_blocks|-1|ERR" << "\n"; }
return 0;
}
