public class EvalRunner {
public static void main(String[] args) {
  try { System.out.println("main.solve|-5|" + Main.solve(-5)); } catch (Throwable e) { System.out.println("main.solve|-5|ERR"); }
  try { System.out.println("main.solve|9|" + Main.solve(9)); } catch (Throwable e) { System.out.println("main.solve|9|ERR"); }
  try { System.out.println("main.solve|99|" + Main.solve(99)); } catch (Throwable e) { System.out.println("main.solve|99|ERR"); }
  try { System.out.println("main.solve|50|" + Main.solve(50)); } catch (Throwable e) { System.out.println("main.solve|50|ERR"); }
  try { System.out.println("main.solve|12|" + Main.solve(12)); } catch (Throwable e) { System.out.println("main.solve|12|ERR"); }
  try { System.out.println("service.discount|-5|" + Service.discount(-5)); } catch (Throwable e) { System.out.println("service.discount|-5|ERR"); }
  try { System.out.println("service.discount|9|" + Service.discount(9)); } catch (Throwable e) { System.out.println("service.discount|9|ERR"); }
  try { System.out.println("service.discount|99|" + Service.discount(99)); } catch (Throwable e) { System.out.println("service.discount|99|ERR"); }
  try { System.out.println("service.discount|50|" + Service.discount(50)); } catch (Throwable e) { System.out.println("service.discount|50|ERR"); }
  try { System.out.println("service.discount|12|" + Service.discount(12)); } catch (Throwable e) { System.out.println("service.discount|12|ERR"); }
  try { System.out.println("utils.tier|-5|" + Utils.tier(-5)); } catch (Throwable e) { System.out.println("utils.tier|-5|ERR"); }
  try { System.out.println("utils.tier|9|" + Utils.tier(9)); } catch (Throwable e) { System.out.println("utils.tier|9|ERR"); }
  try { System.out.println("utils.tier|99|" + Utils.tier(99)); } catch (Throwable e) { System.out.println("utils.tier|99|ERR"); }
  try { System.out.println("utils.tier|50|" + Utils.tier(50)); } catch (Throwable e) { System.out.println("utils.tier|50|ERR"); }
  try { System.out.println("utils.tier|12|" + Utils.tier(12)); } catch (Throwable e) { System.out.println("utils.tier|12|ERR"); }
}
}
