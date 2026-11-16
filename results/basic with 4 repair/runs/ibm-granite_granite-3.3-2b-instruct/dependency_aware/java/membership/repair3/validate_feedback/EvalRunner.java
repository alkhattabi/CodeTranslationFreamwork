public class EvalRunner {
public static void main(String[] args) {
  try { System.out.println("main.solve|0|" + Main.solve(0)); } catch (Throwable e) { System.out.println("main.solve|0|ERR"); }
  try { System.out.println("main.solve|10|" + Main.solve(10)); } catch (Throwable e) { System.out.println("main.solve|10|ERR"); }
  try { System.out.println("main.solve|49|" + Main.solve(49)); } catch (Throwable e) { System.out.println("main.solve|49|ERR"); }
  try { System.out.println("main.solve|150|" + Main.solve(150)); } catch (Throwable e) { System.out.println("main.solve|150|ERR"); }
  try { System.out.println("main.solve|100|" + Main.solve(100)); } catch (Throwable e) { System.out.println("main.solve|100|ERR"); }
  try { System.out.println("service.discount|0|" + Service.discount(0)); } catch (Throwable e) { System.out.println("service.discount|0|ERR"); }
  try { System.out.println("service.discount|10|" + Service.discount(10)); } catch (Throwable e) { System.out.println("service.discount|10|ERR"); }
  try { System.out.println("service.discount|49|" + Service.discount(49)); } catch (Throwable e) { System.out.println("service.discount|49|ERR"); }
  try { System.out.println("service.discount|150|" + Service.discount(150)); } catch (Throwable e) { System.out.println("service.discount|150|ERR"); }
  try { System.out.println("service.discount|100|" + Service.discount(100)); } catch (Throwable e) { System.out.println("service.discount|100|ERR"); }
  try { System.out.println("utils.tier|0|" + Utils.tier(0)); } catch (Throwable e) { System.out.println("utils.tier|0|ERR"); }
  try { System.out.println("utils.tier|10|" + Utils.tier(10)); } catch (Throwable e) { System.out.println("utils.tier|10|ERR"); }
  try { System.out.println("utils.tier|49|" + Utils.tier(49)); } catch (Throwable e) { System.out.println("utils.tier|49|ERR"); }
  try { System.out.println("utils.tier|150|" + Utils.tier(150)); } catch (Throwable e) { System.out.println("utils.tier|150|ERR"); }
  try { System.out.println("utils.tier|100|" + Utils.tier(100)); } catch (Throwable e) { System.out.println("utils.tier|100|ERR"); }
}
}
