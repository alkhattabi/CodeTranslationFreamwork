#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|0|" << solve(0) << "\n"; } catch (...) { std::cout << "main.solve|0|ERR" << "\n"; }
  try { std::cout << "main.solve|208|" << solve(208) << "\n"; } catch (...) { std::cout << "main.solve|208|ERR" << "\n"; }
  try { std::cout << "main.solve|1|" << solve(1) << "\n"; } catch (...) { std::cout << "main.solve|1|ERR" << "\n"; }
  try { std::cout << "main.solve|-1|" << solve(-1) << "\n"; } catch (...) { std::cout << "main.solve|-1|ERR" << "\n"; }
  try { std::cout << "service.score_digits|0|" << score_digits(0) << "\n"; } catch (...) { std::cout << "service.score_digits|0|ERR" << "\n"; }
  try { std::cout << "service.score_digits|208|" << score_digits(208) << "\n"; } catch (...) { std::cout << "service.score_digits|208|ERR" << "\n"; }
  try { std::cout << "service.score_digits|1|" << score_digits(1) << "\n"; } catch (...) { std::cout << "service.score_digits|1|ERR" << "\n"; }
  try { std::cout << "service.score_digits|-1|" << score_digits(-1) << "\n"; } catch (...) { std::cout << "service.score_digits|-1|ERR" << "\n"; }
  try { std::cout << "utils.digit_sum|0|" << digit_sum(0) << "\n"; } catch (...) { std::cout << "utils.digit_sum|0|ERR" << "\n"; }
  try { std::cout << "utils.digit_sum|208|" << digit_sum(208) << "\n"; } catch (...) { std::cout << "utils.digit_sum|208|ERR" << "\n"; }
  try { std::cout << "utils.digit_sum|1|" << digit_sum(1) << "\n"; } catch (...) { std::cout << "utils.digit_sum|1|ERR" << "\n"; }
  try { std::cout << "utils.digit_sum|-1|" << digit_sum(-1) << "\n"; } catch (...) { std::cout << "utils.digit_sum|-1|ERR" << "\n"; }
return 0;
}
