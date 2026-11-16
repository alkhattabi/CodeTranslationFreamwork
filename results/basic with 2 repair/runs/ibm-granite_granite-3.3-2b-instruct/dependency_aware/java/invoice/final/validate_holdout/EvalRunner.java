public class EvalRunner {
public static void main(String[] args) {
  try { System.out.println("main.solve|0|" + Main.solve(0)); } catch (Throwable e) { System.out.println("main.solve|0|ERR"); }
  try { System.out.println("main.solve|10|" + Main.solve(10)); } catch (Throwable e) { System.out.println("main.solve|10|ERR"); }
  try { System.out.println("main.solve|1|" + Main.solve(1)); } catch (Throwable e) { System.out.println("main.solve|1|ERR"); }
  try { System.out.println("main.solve|-3|" + Main.solve(-3)); } catch (Throwable e) { System.out.println("main.solve|-3|ERR"); }
  try { System.out.println("service.gross|0|" + Service.gross(0)); } catch (Throwable e) { System.out.println("service.gross|0|ERR"); }
  try { System.out.println("service.gross|10|" + Service.gross(10)); } catch (Throwable e) { System.out.println("service.gross|10|ERR"); }
  try { System.out.println("service.gross|1|" + Service.gross(1)); } catch (Throwable e) { System.out.println("service.gross|1|ERR"); }
  try { System.out.println("service.gross|-3|" + Service.gross(-3)); } catch (Throwable e) { System.out.println("service.gross|-3|ERR"); }
  try { System.out.println("utils.unit_price|0|" + Utils.unit_price(0)); } catch (Throwable e) { System.out.println("utils.unit_price|0|ERR"); }
  try { System.out.println("utils.unit_price|10|" + Utils.unit_price(10)); } catch (Throwable e) { System.out.println("utils.unit_price|10|ERR"); }
  try { System.out.println("utils.unit_price|1|" + Utils.unit_price(1)); } catch (Throwable e) { System.out.println("utils.unit_price|1|ERR"); }
  try { System.out.println("utils.unit_price|-3|" + Utils.unit_price(-3)); } catch (Throwable e) { System.out.println("utils.unit_price|-3|ERR"); }
}
}
