public class EvalRunner {
public static void main(String[] args) {
  try { System.out.println("main.solve|-123|" + Main.solve(-123)); } catch (Throwable e) { System.out.println("main.solve|-123|ERR"); }
  try { System.out.println("main.solve|1005|" + Main.solve(1005)); } catch (Throwable e) { System.out.println("main.solve|1005|ERR"); }
  try { System.out.println("main.solve|37|" + Main.solve(37)); } catch (Throwable e) { System.out.println("main.solve|37|ERR"); }
  try { System.out.println("main.solve|999|" + Main.solve(999)); } catch (Throwable e) { System.out.println("main.solve|999|ERR"); }
  try { System.out.println("service.score_digits|-123|" + Service.score_digits(-123)); } catch (Throwable e) { System.out.println("service.score_digits|-123|ERR"); }
  try { System.out.println("service.score_digits|1005|" + Service.score_digits(1005)); } catch (Throwable e) { System.out.println("service.score_digits|1005|ERR"); }
  try { System.out.println("service.score_digits|37|" + Service.score_digits(37)); } catch (Throwable e) { System.out.println("service.score_digits|37|ERR"); }
  try { System.out.println("service.score_digits|999|" + Service.score_digits(999)); } catch (Throwable e) { System.out.println("service.score_digits|999|ERR"); }
  try { System.out.println("utils.digit_sum|-123|" + Utils.digit_sum(-123)); } catch (Throwable e) { System.out.println("utils.digit_sum|-123|ERR"); }
  try { System.out.println("utils.digit_sum|1005|" + Utils.digit_sum(1005)); } catch (Throwable e) { System.out.println("utils.digit_sum|1005|ERR"); }
  try { System.out.println("utils.digit_sum|37|" + Utils.digit_sum(37)); } catch (Throwable e) { System.out.println("utils.digit_sum|37|ERR"); }
  try { System.out.println("utils.digit_sum|999|" + Utils.digit_sum(999)); } catch (Throwable e) { System.out.println("utils.digit_sum|999|ERR"); }
}
}
