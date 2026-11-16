public class EvalRunner {
public static void main(String[] args) {
  try { System.out.println("main.solve|100|" + Main.solve(100)); } catch (Throwable e) { System.out.println("main.solve|100|ERR"); }
  try { System.out.println("main.solve|27|" + Main.solve(27)); } catch (Throwable e) { System.out.println("main.solve|27|ERR"); }
  try { System.out.println("main.solve|0|" + Main.solve(0)); } catch (Throwable e) { System.out.println("main.solve|0|ERR"); }
  try { System.out.println("main.solve|200|" + Main.solve(200)); } catch (Throwable e) { System.out.println("main.solve|200|ERR"); }
  try { System.out.println("service.weighted|100|" + Service.weighted(100)); } catch (Throwable e) { System.out.println("service.weighted|100|ERR"); }
  try { System.out.println("service.weighted|27|" + Service.weighted(27)); } catch (Throwable e) { System.out.println("service.weighted|27|ERR"); }
  try { System.out.println("service.weighted|0|" + Service.weighted(0)); } catch (Throwable e) { System.out.println("service.weighted|0|ERR"); }
  try { System.out.println("service.weighted|200|" + Service.weighted(200)); } catch (Throwable e) { System.out.println("service.weighted|200|ERR"); }
  try { System.out.println("utils.normalize|100|" + Utils.normalize(100)); } catch (Throwable e) { System.out.println("utils.normalize|100|ERR"); }
  try { System.out.println("utils.normalize|27|" + Utils.normalize(27)); } catch (Throwable e) { System.out.println("utils.normalize|27|ERR"); }
  try { System.out.println("utils.normalize|0|" + Utils.normalize(0)); } catch (Throwable e) { System.out.println("utils.normalize|0|ERR"); }
  try { System.out.println("utils.normalize|200|" + Utils.normalize(200)); } catch (Throwable e) { System.out.println("utils.normalize|200|ERR"); }
}
}
