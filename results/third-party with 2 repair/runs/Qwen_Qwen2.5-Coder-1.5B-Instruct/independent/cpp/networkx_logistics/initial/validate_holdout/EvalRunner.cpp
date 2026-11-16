#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|25|" << solve(25) << "\n"; } catch (...) { std::cout << "main.solve|25|ERR" << "\n"; }
  try { std::cout << "main.solve|12|" << solve(12) << "\n"; } catch (...) { std::cout << "main.solve|12|ERR" << "\n"; }
  try { std::cout << "main.solve|-25|" << solve(-25) << "\n"; } catch (...) { std::cout << "main.solve|-25|ERR" << "\n"; }
  try { std::cout << "main.solve|8|" << solve(8) << "\n"; } catch (...) { std::cout << "main.solve|8|ERR" << "\n"; }
  try { std::cout << "main.solve|-100|" << solve(-100) << "\n"; } catch (...) { std::cout << "main.solve|-100|ERR" << "\n"; }
  try { std::cout << "main.solve|-1|" << solve(-1) << "\n"; } catch (...) { std::cout << "main.solve|-1|ERR" << "\n"; }
  try { std::cout << "main.solve|-3|" << solve(-3) << "\n"; } catch (...) { std::cout << "main.solve|-3|ERR" << "\n"; }
  try { std::cout << "main.solve|2|" << solve(2) << "\n"; } catch (...) { std::cout << "main.solve|2|ERR" << "\n"; }
  try { std::cout << "main.solve|-7|" << solve(-7) << "\n"; } catch (...) { std::cout << "main.solve|-7|ERR" << "\n"; }
  try { std::cout << "main.solve|-11|" << solve(-11) << "\n"; } catch (...) { std::cout << "main.solve|-11|ERR" << "\n"; }
  try { std::cout << "main.solve|7|" << solve(7) << "\n"; } catch (...) { std::cout << "main.solve|7|ERR" << "\n"; }
  try { std::cout << "main.solve|6|" << solve(6) << "\n"; } catch (...) { std::cout << "main.solve|6|ERR" << "\n"; }
  try { std::cout << "main.solve|3|" << solve(3) << "\n"; } catch (...) { std::cout << "main.solve|3|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|25|" << disruption_score(25) << "\n"; } catch (...) { std::cout << "service.disruption_score|25|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|12|" << disruption_score(12) << "\n"; } catch (...) { std::cout << "service.disruption_score|12|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|-25|" << disruption_score(-25) << "\n"; } catch (...) { std::cout << "service.disruption_score|-25|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|8|" << disruption_score(8) << "\n"; } catch (...) { std::cout << "service.disruption_score|8|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|-100|" << disruption_score(-100) << "\n"; } catch (...) { std::cout << "service.disruption_score|-100|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|-1|" << disruption_score(-1) << "\n"; } catch (...) { std::cout << "service.disruption_score|-1|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|-3|" << disruption_score(-3) << "\n"; } catch (...) { std::cout << "service.disruption_score|-3|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|2|" << disruption_score(2) << "\n"; } catch (...) { std::cout << "service.disruption_score|2|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|-7|" << disruption_score(-7) << "\n"; } catch (...) { std::cout << "service.disruption_score|-7|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|-11|" << disruption_score(-11) << "\n"; } catch (...) { std::cout << "service.disruption_score|-11|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|7|" << disruption_score(7) << "\n"; } catch (...) { std::cout << "service.disruption_score|7|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|6|" << disruption_score(6) << "\n"; } catch (...) { std::cout << "service.disruption_score|6|ERR" << "\n"; }
  try { std::cout << "service.disruption_score|3|" << disruption_score(3) << "\n"; } catch (...) { std::cout << "service.disruption_score|3|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|25|" << route_cost(25) << "\n"; } catch (...) { std::cout << "utils.route_cost|25|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|12|" << route_cost(12) << "\n"; } catch (...) { std::cout << "utils.route_cost|12|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|-25|" << route_cost(-25) << "\n"; } catch (...) { std::cout << "utils.route_cost|-25|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|8|" << route_cost(8) << "\n"; } catch (...) { std::cout << "utils.route_cost|8|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|-100|" << route_cost(-100) << "\n"; } catch (...) { std::cout << "utils.route_cost|-100|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|-1|" << route_cost(-1) << "\n"; } catch (...) { std::cout << "utils.route_cost|-1|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|-3|" << route_cost(-3) << "\n"; } catch (...) { std::cout << "utils.route_cost|-3|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|2|" << route_cost(2) << "\n"; } catch (...) { std::cout << "utils.route_cost|2|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|-7|" << route_cost(-7) << "\n"; } catch (...) { std::cout << "utils.route_cost|-7|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|-11|" << route_cost(-11) << "\n"; } catch (...) { std::cout << "utils.route_cost|-11|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|7|" << route_cost(7) << "\n"; } catch (...) { std::cout << "utils.route_cost|7|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|6|" << route_cost(6) << "\n"; } catch (...) { std::cout << "utils.route_cost|6|ERR" << "\n"; }
  try { std::cout << "utils.route_cost|3|" << route_cost(3) << "\n"; } catch (...) { std::cout << "utils.route_cost|3|ERR" << "\n"; }
return 0;
}
