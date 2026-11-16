#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|0|" << solve(0) << "\n"; } catch (...) { std::cout << "main.solve|0|ERR" << "\n"; }
  try { std::cout << "main.solve|20230229|" << solve(20230229) << "\n"; } catch (...) { std::cout << "main.solve|20230229|ERR" << "\n"; }
  try { std::cout << "main.solve|20261301|" << solve(20261301) << "\n"; } catch (...) { std::cout << "main.solve|20261301|ERR" << "\n"; }
  try { std::cout << "main.solve|20000229|" << solve(20000229) << "\n"; } catch (...) { std::cout << "main.solve|20000229|ERR" << "\n"; }
  try { std::cout << "main.solve|20280101|" << solve(20280101) << "\n"; } catch (...) { std::cout << "main.solve|20280101|ERR" << "\n"; }
  try { std::cout << "main.solve|20270100|" << solve(20270100) << "\n"; } catch (...) { std::cout << "main.solve|20270100|ERR" << "\n"; }
  try { std::cout << "main.solve|20230431|" << solve(20230431) << "\n"; } catch (...) { std::cout << "main.solve|20230431|ERR" << "\n"; }
  try { std::cout << "main.solve|20261231|" << solve(20261231) << "\n"; } catch (...) { std::cout << "main.solve|20261231|ERR" << "\n"; }
  try { std::cout << "main.solve|20281231|" << solve(20281231) << "\n"; } catch (...) { std::cout << "main.solve|20281231|ERR" << "\n"; }
  try { std::cout << "main.solve|-1|" << solve(-1) << "\n"; } catch (...) { std::cout << "main.solve|-1|ERR" << "\n"; }
  try { std::cout << "service.day_of_year|0|" << day_of_year(0) << "\n"; } catch (...) { std::cout << "service.day_of_year|0|ERR" << "\n"; }
  try { std::cout << "service.day_of_year|20230229|" << day_of_year(20230229) << "\n"; } catch (...) { std::cout << "service.day_of_year|20230229|ERR" << "\n"; }
  try { std::cout << "service.day_of_year|20261301|" << day_of_year(20261301) << "\n"; } catch (...) { std::cout << "service.day_of_year|20261301|ERR" << "\n"; }
  try { std::cout << "service.day_of_year|20000229|" << day_of_year(20000229) << "\n"; } catch (...) { std::cout << "service.day_of_year|20000229|ERR" << "\n"; }
  try { std::cout << "service.day_of_year|20280101|" << day_of_year(20280101) << "\n"; } catch (...) { std::cout << "service.day_of_year|20280101|ERR" << "\n"; }
  try { std::cout << "service.day_of_year|20270100|" << day_of_year(20270100) << "\n"; } catch (...) { std::cout << "service.day_of_year|20270100|ERR" << "\n"; }
  try { std::cout << "service.day_of_year|20230431|" << day_of_year(20230431) << "\n"; } catch (...) { std::cout << "service.day_of_year|20230431|ERR" << "\n"; }
  try { std::cout << "service.day_of_year|20261231|" << day_of_year(20261231) << "\n"; } catch (...) { std::cout << "service.day_of_year|20261231|ERR" << "\n"; }
  try { std::cout << "service.day_of_year|20281231|" << day_of_year(20281231) << "\n"; } catch (...) { std::cout << "service.day_of_year|20281231|ERR" << "\n"; }
  try { std::cout << "service.day_of_year|-1|" << day_of_year(-1) << "\n"; } catch (...) { std::cout << "service.day_of_year|-1|ERR" << "\n"; }
  try { std::cout << "utils.valid_date|0|" << valid_date(0) << "\n"; } catch (...) { std::cout << "utils.valid_date|0|ERR" << "\n"; }
  try { std::cout << "utils.valid_date|20230229|" << valid_date(20230229) << "\n"; } catch (...) { std::cout << "utils.valid_date|20230229|ERR" << "\n"; }
  try { std::cout << "utils.valid_date|20261301|" << valid_date(20261301) << "\n"; } catch (...) { std::cout << "utils.valid_date|20261301|ERR" << "\n"; }
  try { std::cout << "utils.valid_date|20000229|" << valid_date(20000229) << "\n"; } catch (...) { std::cout << "utils.valid_date|20000229|ERR" << "\n"; }
  try { std::cout << "utils.valid_date|20280101|" << valid_date(20280101) << "\n"; } catch (...) { std::cout << "utils.valid_date|20280101|ERR" << "\n"; }
  try { std::cout << "utils.valid_date|20270100|" << valid_date(20270100) << "\n"; } catch (...) { std::cout << "utils.valid_date|20270100|ERR" << "\n"; }
  try { std::cout << "utils.valid_date|20230431|" << valid_date(20230431) << "\n"; } catch (...) { std::cout << "utils.valid_date|20230431|ERR" << "\n"; }
  try { std::cout << "utils.valid_date|20261231|" << valid_date(20261231) << "\n"; } catch (...) { std::cout << "utils.valid_date|20261231|ERR" << "\n"; }
  try { std::cout << "utils.valid_date|20281231|" << valid_date(20281231) << "\n"; } catch (...) { std::cout << "utils.valid_date|20281231|ERR" << "\n"; }
  try { std::cout << "utils.valid_date|-1|" << valid_date(-1) << "\n"; } catch (...) { std::cout << "utils.valid_date|-1|ERR" << "\n"; }
return 0;
}
