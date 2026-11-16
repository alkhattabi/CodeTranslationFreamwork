#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|3|" << solve(3) << "\n"; } catch (...) { std::cout << "main.solve|3|ERR" << "\n"; }
  try { std::cout << "main.solve|49999|" << solve(49999) << "\n"; } catch (...) { std::cout << "main.solve|49999|ERR" << "\n"; }
  try { std::cout << "main.solve|29999|" << solve(29999) << "\n"; } catch (...) { std::cout << "main.solve|29999|ERR" << "\n"; }
  try { std::cout << "main.solve|99|" << solve(99) << "\n"; } catch (...) { std::cout << "main.solve|99|ERR" << "\n"; }
  try { std::cout << "main.solve|2|" << solve(2) << "\n"; } catch (...) { std::cout << "main.solve|2|ERR" << "\n"; }
  try { std::cout << "main.solve|1|" << solve(1) << "\n"; } catch (...) { std::cout << "main.solve|1|ERR" << "\n"; }
  try { std::cout << "main.solve|30104|" << solve(30104) << "\n"; } catch (...) { std::cout << "main.solve|30104|ERR" << "\n"; }
  try { std::cout << "main.solve|30000|" << solve(30000) << "\n"; } catch (...) { std::cout << "main.solve|30000|ERR" << "\n"; }
  try { std::cout << "main.solve|-1|" << solve(-1) << "\n"; } catch (...) { std::cout << "main.solve|-1|ERR" << "\n"; }
  try { std::cout << "main.solve|10100|" << solve(10100) << "\n"; } catch (...) { std::cout << "main.solve|10100|ERR" << "\n"; }
  try { std::cout << "main.solve|20100|" << solve(20100) << "\n"; } catch (...) { std::cout << "main.solve|20100|ERR" << "\n"; }
  try { std::cout << "main.solve|20203|" << solve(20203) << "\n"; } catch (...) { std::cout << "main.solve|20203|ERR" << "\n"; }
  try { std::cout << "service.upgrade_cost|3|" << upgrade_cost(3) << "\n"; } catch (...) { std::cout << "service.upgrade_cost|3|ERR" << "\n"; }
  try { std::cout << "service.upgrade_cost|49999|" << upgrade_cost(49999) << "\n"; } catch (...) { std::cout << "service.upgrade_cost|49999|ERR" << "\n"; }
  try { std::cout << "service.upgrade_cost|29999|" << upgrade_cost(29999) << "\n"; } catch (...) { std::cout << "service.upgrade_cost|29999|ERR" << "\n"; }
  try { std::cout << "service.upgrade_cost|99|" << upgrade_cost(99) << "\n"; } catch (...) { std::cout << "service.upgrade_cost|99|ERR" << "\n"; }
  try { std::cout << "service.upgrade_cost|2|" << upgrade_cost(2) << "\n"; } catch (...) { std::cout << "service.upgrade_cost|2|ERR" << "\n"; }
  try { std::cout << "service.upgrade_cost|1|" << upgrade_cost(1) << "\n"; } catch (...) { std::cout << "service.upgrade_cost|1|ERR" << "\n"; }
  try { std::cout << "service.upgrade_cost|30104|" << upgrade_cost(30104) << "\n"; } catch (...) { std::cout << "service.upgrade_cost|30104|ERR" << "\n"; }
  try { std::cout << "service.upgrade_cost|30000|" << upgrade_cost(30000) << "\n"; } catch (...) { std::cout << "service.upgrade_cost|30000|ERR" << "\n"; }
  try { std::cout << "service.upgrade_cost|-1|" << upgrade_cost(-1) << "\n"; } catch (...) { std::cout << "service.upgrade_cost|-1|ERR" << "\n"; }
  try { std::cout << "service.upgrade_cost|10100|" << upgrade_cost(10100) << "\n"; } catch (...) { std::cout << "service.upgrade_cost|10100|ERR" << "\n"; }
  try { std::cout << "service.upgrade_cost|20100|" << upgrade_cost(20100) << "\n"; } catch (...) { std::cout << "service.upgrade_cost|20100|ERR" << "\n"; }
  try { std::cout << "service.upgrade_cost|20203|" << upgrade_cost(20203) << "\n"; } catch (...) { std::cout << "service.upgrade_cost|20203|ERR" << "\n"; }
  try { std::cout << "utils.release_rank|3|" << release_rank(3) << "\n"; } catch (...) { std::cout << "utils.release_rank|3|ERR" << "\n"; }
  try { std::cout << "utils.release_rank|49999|" << release_rank(49999) << "\n"; } catch (...) { std::cout << "utils.release_rank|49999|ERR" << "\n"; }
  try { std::cout << "utils.release_rank|29999|" << release_rank(29999) << "\n"; } catch (...) { std::cout << "utils.release_rank|29999|ERR" << "\n"; }
  try { std::cout << "utils.release_rank|99|" << release_rank(99) << "\n"; } catch (...) { std::cout << "utils.release_rank|99|ERR" << "\n"; }
  try { std::cout << "utils.release_rank|2|" << release_rank(2) << "\n"; } catch (...) { std::cout << "utils.release_rank|2|ERR" << "\n"; }
  try { std::cout << "utils.release_rank|1|" << release_rank(1) << "\n"; } catch (...) { std::cout << "utils.release_rank|1|ERR" << "\n"; }
  try { std::cout << "utils.release_rank|30104|" << release_rank(30104) << "\n"; } catch (...) { std::cout << "utils.release_rank|30104|ERR" << "\n"; }
  try { std::cout << "utils.release_rank|30000|" << release_rank(30000) << "\n"; } catch (...) { std::cout << "utils.release_rank|30000|ERR" << "\n"; }
  try { std::cout << "utils.release_rank|-1|" << release_rank(-1) << "\n"; } catch (...) { std::cout << "utils.release_rank|-1|ERR" << "\n"; }
  try { std::cout << "utils.release_rank|10100|" << release_rank(10100) << "\n"; } catch (...) { std::cout << "utils.release_rank|10100|ERR" << "\n"; }
  try { std::cout << "utils.release_rank|20100|" << release_rank(20100) << "\n"; } catch (...) { std::cout << "utils.release_rank|20100|ERR" << "\n"; }
  try { std::cout << "utils.release_rank|20203|" << release_rank(20203) << "\n"; } catch (...) { std::cout << "utils.release_rank|20203|ERR" << "\n"; }
return 0;
}
