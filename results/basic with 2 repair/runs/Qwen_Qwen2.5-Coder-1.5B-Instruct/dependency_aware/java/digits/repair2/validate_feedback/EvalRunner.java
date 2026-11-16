public class EvalRunner {
public static void main(String[] args) {
  try { System.out.println("main.solve|0|" + Main.solve(0)); } catch (Throwable e) { System.out.println("main.solve|0|ERR"); }
  try { System.out.println("main.solve|208|" + Main.solve(208)); } catch (Throwable e) { System.out.println("main.solve|208|ERR"); }
  try { System.out.println("main.solve|1|" + Main.solve(1)); } catch (Throwable e) { System.out.println("main.solve|1|ERR"); }
  try { System.out.println("main.solve|-1|" + Main.solve(-1)); } catch (Throwable e) { System.out.println("main.solve|-1|ERR"); }
  try { System.out.println("service.score_digits|0|" + Service.score_digits(0)); } catch (Throwable e) { System.out.println("service.score_digits|0|ERR"); }
  try { System.out.println("service.score_digits|208|" + Service.score_digits(208)); } catch (Throwable e) { System.out.println("service.score_digits|208|ERR"); }
  try { System.out.println("service.score_digits|1|" + Service.score_digits(1)); } catch (Throwable e) { System.out.println("service.score_digits|1|ERR"); }
  try { System.out.println("service.score_digits|-1|" + Service.score_digits(-1)); } catch (Throwable e) { System.out.println("service.score_digits|-1|ERR"); }
  try { System.out.println("utils.digit_sum|0|" + Utils.digit_sum(0)); } catch (Throwable e) { System.out.println("utils.digit_sum|0|ERR"); }
  try { System.out.println("utils.digit_sum|208|" + Utils.digit_sum(208)); } catch (Throwable e) { System.out.println("utils.digit_sum|208|ERR"); }
  try { System.out.println("utils.digit_sum|1|" + Utils.digit_sum(1)); } catch (Throwable e) { System.out.println("utils.digit_sum|1|ERR"); }
  try { System.out.println("utils.digit_sum|-1|" + Utils.digit_sum(-1)); } catch (Throwable e) { System.out.println("utils.digit_sum|-1|ERR"); }
}
}
