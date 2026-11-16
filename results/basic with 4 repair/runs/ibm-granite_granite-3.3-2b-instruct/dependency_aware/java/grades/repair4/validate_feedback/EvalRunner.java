public class EvalRunner {
public static void main(String[] args) {
  try { System.out.println("main.solve|53|" + Main.solve(53)); } catch (Throwable e) { System.out.println("main.solve|53|ERR"); }
  try { System.out.println("main.solve|60|" + Main.solve(60)); } catch (Throwable e) { System.out.println("main.solve|60|ERR"); }
  try { System.out.println("main.solve|100|" + Main.solve(100)); } catch (Throwable e) { System.out.println("main.solve|100|ERR"); }
  try { System.out.println("main.solve|130|" + Main.solve(130)); } catch (Throwable e) { System.out.println("main.solve|130|ERR"); }
  try { System.out.println("service.bonus_score|53|" + Service.bonus_score(53)); } catch (Throwable e) { System.out.println("service.bonus_score|53|ERR"); }
  try { System.out.println("service.bonus_score|60|" + Service.bonus_score(60)); } catch (Throwable e) { System.out.println("service.bonus_score|60|ERR"); }
  try { System.out.println("service.bonus_score|100|" + Service.bonus_score(100)); } catch (Throwable e) { System.out.println("service.bonus_score|100|ERR"); }
  try { System.out.println("service.bonus_score|130|" + Service.bonus_score(130)); } catch (Throwable e) { System.out.println("service.bonus_score|130|ERR"); }
  try { System.out.println("utils.clamp|53|" + Utils.clamp(53)); } catch (Throwable e) { System.out.println("utils.clamp|53|ERR"); }
  try { System.out.println("utils.clamp|60|" + Utils.clamp(60)); } catch (Throwable e) { System.out.println("utils.clamp|60|ERR"); }
  try { System.out.println("utils.clamp|100|" + Utils.clamp(100)); } catch (Throwable e) { System.out.println("utils.clamp|100|ERR"); }
  try { System.out.println("utils.clamp|130|" + Utils.clamp(130)); } catch (Throwable e) { System.out.println("utils.clamp|130|ERR"); }
}
}
