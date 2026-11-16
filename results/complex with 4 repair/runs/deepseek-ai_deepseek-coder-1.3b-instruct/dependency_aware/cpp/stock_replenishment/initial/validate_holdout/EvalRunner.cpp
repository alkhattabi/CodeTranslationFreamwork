#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|8|" << solve(8) << "\n"; } catch (...) { std::cout << "main.solve|8|ERR" << "\n"; }
  try { std::cout << "main.solve|-1|" << solve(-1) << "\n"; } catch (...) { std::cout << "main.solve|-1|ERR" << "\n"; }
  try { std::cout << "main.solve|-25|" << solve(-25) << "\n"; } catch (...) { std::cout << "main.solve|-25|ERR" << "\n"; }
  try { std::cout << "main.solve|6|" << solve(6) << "\n"; } catch (...) { std::cout << "main.solve|6|ERR" << "\n"; }
  try { std::cout << "main.solve|5|" << solve(5) << "\n"; } catch (...) { std::cout << "main.solve|5|ERR" << "\n"; }
  try { std::cout << "main.solve|0|" << solve(0) << "\n"; } catch (...) { std::cout << "main.solve|0|ERR" << "\n"; }
  try { std::cout << "main.solve|95|" << solve(95) << "\n"; } catch (...) { std::cout << "main.solve|95|ERR" << "\n"; }
  try { std::cout << "main.solve|34|" << solve(34) << "\n"; } catch (...) { std::cout << "main.solve|34|ERR" << "\n"; }
  try { std::cout << "main.solve|27|" << solve(27) << "\n"; } catch (...) { std::cout << "main.solve|27|ERR" << "\n"; }
  try { std::cout << "main.solve|10|" << solve(10) << "\n"; } catch (...) { std::cout << "main.solve|10|ERR" << "\n"; }
  try { std::cout << "service.order_quantity|8|" << order_quantity(8) << "\n"; } catch (...) { std::cout << "service.order_quantity|8|ERR" << "\n"; }
  try { std::cout << "service.order_quantity|-1|" << order_quantity(-1) << "\n"; } catch (...) { std::cout << "service.order_quantity|-1|ERR" << "\n"; }
  try { std::cout << "service.order_quantity|-25|" << order_quantity(-25) << "\n"; } catch (...) { std::cout << "service.order_quantity|-25|ERR" << "\n"; }
  try { std::cout << "service.order_quantity|6|" << order_quantity(6) << "\n"; } catch (...) { std::cout << "service.order_quantity|6|ERR" << "\n"; }
  try { std::cout << "service.order_quantity|5|" << order_quantity(5) << "\n"; } catch (...) { std::cout << "service.order_quantity|5|ERR" << "\n"; }
  try { std::cout << "service.order_quantity|0|" << order_quantity(0) << "\n"; } catch (...) { std::cout << "service.order_quantity|0|ERR" << "\n"; }
  try { std::cout << "service.order_quantity|95|" << order_quantity(95) << "\n"; } catch (...) { std::cout << "service.order_quantity|95|ERR" << "\n"; }
  try { std::cout << "service.order_quantity|34|" << order_quantity(34) << "\n"; } catch (...) { std::cout << "service.order_quantity|34|ERR" << "\n"; }
  try { std::cout << "service.order_quantity|27|" << order_quantity(27) << "\n"; } catch (...) { std::cout << "service.order_quantity|27|ERR" << "\n"; }
  try { std::cout << "service.order_quantity|10|" << order_quantity(10) << "\n"; } catch (...) { std::cout << "service.order_quantity|10|ERR" << "\n"; }
  try { std::cout << "utils.weekly_demand|8|" << weekly_demand(8) << "\n"; } catch (...) { std::cout << "utils.weekly_demand|8|ERR" << "\n"; }
  try { std::cout << "utils.weekly_demand|-1|" << weekly_demand(-1) << "\n"; } catch (...) { std::cout << "utils.weekly_demand|-1|ERR" << "\n"; }
  try { std::cout << "utils.weekly_demand|-25|" << weekly_demand(-25) << "\n"; } catch (...) { std::cout << "utils.weekly_demand|-25|ERR" << "\n"; }
  try { std::cout << "utils.weekly_demand|6|" << weekly_demand(6) << "\n"; } catch (...) { std::cout << "utils.weekly_demand|6|ERR" << "\n"; }
  try { std::cout << "utils.weekly_demand|5|" << weekly_demand(5) << "\n"; } catch (...) { std::cout << "utils.weekly_demand|5|ERR" << "\n"; }
  try { std::cout << "utils.weekly_demand|0|" << weekly_demand(0) << "\n"; } catch (...) { std::cout << "utils.weekly_demand|0|ERR" << "\n"; }
  try { std::cout << "utils.weekly_demand|95|" << weekly_demand(95) << "\n"; } catch (...) { std::cout << "utils.weekly_demand|95|ERR" << "\n"; }
  try { std::cout << "utils.weekly_demand|34|" << weekly_demand(34) << "\n"; } catch (...) { std::cout << "utils.weekly_demand|34|ERR" << "\n"; }
  try { std::cout << "utils.weekly_demand|27|" << weekly_demand(27) << "\n"; } catch (...) { std::cout << "utils.weekly_demand|27|ERR" << "\n"; }
  try { std::cout << "utils.weekly_demand|10|" << weekly_demand(10) << "\n"; } catch (...) { std::cout << "utils.weekly_demand|10|ERR" << "\n"; }
return 0;
}
