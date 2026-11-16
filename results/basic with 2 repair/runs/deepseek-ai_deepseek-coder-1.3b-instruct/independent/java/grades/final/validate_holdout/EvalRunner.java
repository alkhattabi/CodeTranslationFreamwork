public class EvalRunner {
public static void main(String[] args) {
  try { System.out.println("main.solve|52|" + Main.solve(52)); } catch (Throwable e) { System.out.println("main.solve|52|ERR"); }
  try { System.out.println("main.solve|95|" + Main.solve(95)); } catch (Throwable e) { System.out.println("main.solve|95|ERR"); }
  try { System.out.println("main.solve|-10|" + Main.solve(-10)); } catch (Throwable e) { System.out.println("main.solve|-10|ERR"); }
  try { System.out.println("main.solve|0|" + Main.solve(0)); } catch (Throwable e) { System.out.println("main.solve|0|ERR"); }
  try { System.out.println("service.bonus_score|52|" + Service.bonus_score(52)); } catch (Throwable e) { System.out.println("service.bonus_score|52|ERR"); }
  try { System.out.println("service.bonus_score|95|" + Service.bonus_score(95)); } catch (Throwable e) { System.out.println("service.bonus_score|95|ERR"); }
  try { System.out.println("service.bonus_score|-10|" + Service.bonus_score(-10)); } catch (Throwable e) { System.out.println("service.bonus_score|-10|ERR"); }
  try { System.out.println("service.bonus_score|0|" + Service.bonus_score(0)); } catch (Throwable e) { System.out.println("service.bonus_score|0|ERR"); }
  try { System.out.println("utils.clamp|52|" + Utils.clamp(52)); } catch (Throwable e) { System.out.println("utils.clamp|52|ERR"); }
  try { System.out.println("utils.clamp|95|" + Utils.clamp(95)); } catch (Throwable e) { System.out.println("utils.clamp|95|ERR"); }
  try { System.out.println("utils.clamp|-10|" + Utils.clamp(-10)); } catch (Throwable e) { System.out.println("utils.clamp|-10|ERR"); }
  try { System.out.println("utils.clamp|0|" + Utils.clamp(0)); } catch (Throwable e) { System.out.println("utils.clamp|0|ERR"); }
}
}
