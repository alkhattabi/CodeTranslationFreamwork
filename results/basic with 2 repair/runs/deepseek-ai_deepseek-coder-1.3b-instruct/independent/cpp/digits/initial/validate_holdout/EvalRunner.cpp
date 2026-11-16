#include "api.hpp"
#include <iostream>
int main() {
  try { std::cout << "main.solve|-123|" << solve(-123) << "\n"; } catch (...) { std::cout << "main.solve|-123|ERR" << "\n"; }
  try { std::cout << "main.solve|1005|" << solve(1005) << "\n"; } catch (...) { std::cout << "main.solve|1005|ERR" << "\n"; }
  try { std::cout << "main.solve|37|" << solve(37) << "\n"; } catch (...) { std::cout << "main.solve|37|ERR" << "\n"; }
  try { std::cout << "main.solve|999|" << solve(999) << "\n"; } catch (...) { std::cout << "main.solve|999|ERR" << "\n"; }
  try { std::cout << "service.score_digits|-123|" << score_digits(-123) << "\n"; } catch (...) { std::cout << "service.score_digits|-123|ERR" << "\n"; }
  try { std::cout << "service.score_digits|1005|" << score_digits(1005) << "\n"; } catch (...) { std::cout << "service.score_digits|1005|ERR" << "\n"; }
  try { std::cout << "service.score_digits|37|" << score_digits(37) << "\n"; } catch (...) { std::cout << "service.score_digits|37|ERR" << "\n"; }
  try { std::cout << "service.score_digits|999|" << score_digits(999) << "\n"; } catch (...) { std::cout << "service.score_digits|999|ERR" << "\n"; }
  try { std::cout << "utils.digit_sum|-123|" << digit_sum(-123) << "\n"; } catch (...) { std::cout << "utils.digit_sum|-123|ERR" << "\n"; }
  try { std::cout << "utils.digit_sum|1005|" << digit_sum(1005) << "\n"; } catch (...) { std::cout << "utils.digit_sum|1005|ERR" << "\n"; }
  try { std::cout << "utils.digit_sum|37|" << digit_sum(37) << "\n"; } catch (...) { std::cout << "utils.digit_sum|37|ERR" << "\n"; }
  try { std::cout << "utils.digit_sum|999|" << digit_sum(999) << "\n"; } catch (...) { std::cout << "utils.digit_sum|999|ERR" << "\n"; }
return 0;
}
