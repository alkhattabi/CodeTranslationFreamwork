public class EvalRunner {
public static void main(String[] args) {
  try { System.out.println("main.solve|8|" + Main.solve(8)); } catch (Throwable e) { System.out.println("main.solve|8|ERR"); }
  try { System.out.println("main.solve|-9|" + Main.solve(-9)); } catch (Throwable e) { System.out.println("main.solve|-9|ERR"); }
  try { System.out.println("main.solve|1|" + Main.solve(1)); } catch (Throwable e) { System.out.println("main.solve|1|ERR"); }
  try { System.out.println("main.solve|-1|" + Main.solve(-1)); } catch (Throwable e) { System.out.println("main.solve|-1|ERR"); }
  try { System.out.println("service.weighted|8|" + Service.weighted(8)); } catch (Throwable e) { System.out.println("service.weighted|8|ERR"); }
  try { System.out.println("service.weighted|-9|" + Service.weighted(-9)); } catch (Throwable e) { System.out.println("service.weighted|-9|ERR"); }
  try { System.out.println("service.weighted|1|" + Service.weighted(1)); } catch (Throwable e) { System.out.println("service.weighted|1|ERR"); }
  try { System.out.println("service.weighted|-1|" + Service.weighted(-1)); } catch (Throwable e) { System.out.println("service.weighted|-1|ERR"); }
  try { System.out.println("utils.normalize|8|" + Utils.normalize(8)); } catch (Throwable e) { System.out.println("utils.normalize|8|ERR"); }
  try { System.out.println("utils.normalize|-9|" + Utils.normalize(-9)); } catch (Throwable e) { System.out.println("utils.normalize|-9|ERR"); }
  try { System.out.println("utils.normalize|1|" + Utils.normalize(1)); } catch (Throwable e) { System.out.println("utils.normalize|1|ERR"); }
  try { System.out.println("utils.normalize|-1|" + Utils.normalize(-1)); } catch (Throwable e) { System.out.println("utils.normalize|-1|ERR"); }
}
}
