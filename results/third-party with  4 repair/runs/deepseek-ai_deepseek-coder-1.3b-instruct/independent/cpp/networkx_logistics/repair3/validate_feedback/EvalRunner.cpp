#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|10|" << solve(10) << "\n"; } catch (...) { std::cout << "main.solve|10|ERR" << "\n"; }
  try { std::cout << "main.solve|1|" << solve(1) << "\n"; } catch (...) { std::cout << "main.solve|1|ERR" << "\n"; }
  try { std::cout << "main.solve|9|" << solve(9) << "\n"; } catch (...) { std::cout << "main.solve|9|ERR" << "\n"; }
  try { std::cout << "main.solve|5|" << solve(5) << "\n"; } catch (...) { std::cout << "main.solve|5|ERR" << "\n"; }
  try { std::cout << "main.solve|0|" << solve(0) << "\n"; } catch (...) { std::cout << "main.solve|0|ERR" << "\n"; }
  try { std::cout << "main.solve|11|" << solve(11) << "\n"; } catch (...) { std::cout << "main.solve|11|ERR" << "\n"; }
  try { std::cout << "main.solve|100|" << solve(100) << "\n"; } catch (...) { std::cout << "main.solve|100|ERR" << "\n"; }
  try { std::cout << "main.solve|-5|" << solve(-5) << "\n"; } catch (...) { std::cout << "main.solve|-5|ERR" << "\n"; }
  try { std::cout << "main.solve|-9|" << solve(-9) << "\n"; } catch (...) { std::cout << "main.solve|-9|ERR" << "\n"; }
  try { std::cout << "main.solve|-2|" << solve(-2) << "\n"; } catch (...) { std::cout << "main.solve|-2|ERR" << "\n"; }
  try { std::cout << "main.solve|-12|" << solve(-12) << "\n"; } catch (...) { std::cout << "main.solve|-12|ERR" << "\n"; }
  try { std::cout << "main.solve|4|" << solve(4) << "\n"; } catch (...) { std::cout << "main.solve|4|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|10|" << disruption_score(10) << "\n"; } catch (...) { std::cout << "service.disruption_score|10|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|1|" << disruption_score(1) << "\n"; } catch (...) { std::cout << "service.disruption_score|1|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|9|" << disruption_score(9) << "\n"; } catch (...) { std::cout << "service.disruption_score|9|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|5|" << disruption_score(5) << "\n"; } catch (...) { std::cout << "service.disruption_score|5|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|0|" << disruption_score(0) << "\n"; } catch (...) { std::cout << "service.disruption_score|0|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|11|" << disruption_score(11) << "\n"; } catch (...) { std::cout << "service.disruption_score|11|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|100|" << disruption_score(100) << "\n"; } catch (...) { std::cout << "service.disruption_score|100|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|-5|" << disruption_score(-5) << "\n"; } catch (...) { std::cout << "service.disruption_score|-5|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|-9|" << disruption_score(-9) << "\n"; } catch (...) { std::cout << "service.disruption_score|-9|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|-2|" << disruption_score(-2) << "\n"; } catch (...) { std::cout << "service.disruption_score|-2|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|-12|" << disruption_score(-12) << "\n"; } catch (...) { std::cout << "service.disruption_score|-12|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|4|" << disruption_score(4) << "\n"; } catch (...) { std::cout << "service.disruption_score|4|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|10|" << route_cost(10) << "\n"; } catch (...) { std::cout << "utils.route_cost|10|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|1|" << route_cost(1) << "\n"; } catch (...) { std::cout << "utils.route_cost|1|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|9|" << route_cost(9) << "\n"; } catch (...) { std::cout << "utils.route_cost|9|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|5|" << route_cost(5) << "\n"; } catch (...) { std::cout << "utils.route_cost|5|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|0|" << route_cost(0) << "\n"; } catch (...) { std::cout << "utils.route_cost|0|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|11|" << route_cost(11) << "\n"; } catch (...) { std::cout << "utils.route_cost|11|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|100|" << route_cost(100) << "\n"; } catch (...) { std::cout << "utils.route_cost|100|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|-5|" << route_cost(-5) << "\n"; } catch (...) { std::cout << "utils.route_cost|-5|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|-9|" << route_cost(-9) << "\n"; } catch (...) { std::cout << "utils.route_cost|-9|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|-2|" << route_cost(-2) << "\n"; } catch (...) { std::cout << "utils.route_cost|-2|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|-12|" << route_cost(-12) << "\n"; } catch (...) { std::cout << "utils.route_cost|-12|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|4|" << route_cost(4) << "\n"; } catch (...) { std::cout << "utils.route_cost|4|ERR" << "\n"; }
return 0;
}
