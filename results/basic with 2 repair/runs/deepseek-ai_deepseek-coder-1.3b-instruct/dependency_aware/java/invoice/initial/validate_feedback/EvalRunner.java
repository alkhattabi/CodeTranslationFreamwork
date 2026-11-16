public class EvalRunner {
public static void main(String[] args) {
  try { System.out.println("main.solve|11|" + Main.solve(11)); } catch (Throwable e) { System.out.println("main.solve|11|ERR"); }
  try { System.out.println("main.solve|50|" + Main.solve(50)); } catch (Throwable e) { System.out.println("main.solve|50|ERR"); }
  try { System.out.println("main.solve|9|" + Main.solve(9)); } catch (Throwable e) { System.out.println("main.solve|9|ERR"); }
  try { System.out.println("main.solve|7|" + Main.solve(7)); } catch (Throwable e) { System.out.println("main.solve|7|ERR"); }
  try { System.out.println("service.gross|11|" + Service.gross(11)); } catch (Throwable e) { System.out.println("service.gross|11|ERR"); }
  try { System.out.println("service.gross|50|" + Service.gross(50)); } catch (Throwable e) { System.out.println("service.gross|50|ERR"); }
  try { System.out.println("service.gross|9|" + Service.gross(9)); } catch (Throwable e) { System.out.println("service.gross|9|ERR"); }
  try { System.out.println("service.gross|7|" + Service.gross(7)); } catch (Throwable e) { System.out.println("service.gross|7|ERR"); }
  try { System.out.println("utils.unit_price|11|" + Utils.unit_price(11)); } catch (Throwable e) { System.out.println("utils.unit_price|11|ERR"); }
  try { System.out.println("utils.unit_price|50|" + Utils.unit_price(50)); } catch (Throwable e) { System.out.println("utils.unit_price|50|ERR"); }
  try { System.out.println("utils.unit_price|9|" + Utils.unit_price(9)); } catch (Throwable e) { System.out.println("utils.unit_price|9|ERR"); }
  try { System.out.println("utils.unit_price|7|" + Utils.unit_price(7)); } catch (Throwable e) { System.out.println("utils.unit_price|7|ERR"); }
}
}
