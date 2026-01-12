/**
 *   author:  josuerom
 *   created: 12/07/23 16:34:54
**/
import java.util.Scanner;
import java.util.Stack;

public class A_Balanceo {
   static Scanner sc = new Scanner(System.in);

   public static void main(String[] authorJosuerom) {
      String[] s = sc.next().split("");
      int n = s.length;
      solve(s, n);
      sc.close(); System.out.close();
   }

   static void solve(String[] s, int n) {
      Stack<String> pila = new Stack<>();
      int ans = 0;
      boolean flag = false;
      if (n%2 == 0 && (!s[0].equals(")") || !s[0].equals("}") ||  !s[0].equals("]") ||  !s[0].equals(">"))) {
         for (int i = 0; i < n; i++) {
            if (s[i].equals("(") || s[i].equals("[") || s[i].equals("{") || s[i].equals("<")) pila.push(s[i]);
            else {
               if (s[i].equals(")")) {
                  if (!pila.empty() && pila.peek().equals("(")) pila.pop();
                  else if (!pila.empty() && (pila.peek().equals("[") || pila.peek().equals("{") || pila.peek().equals("<"))) { ans++; pila.pop(); }
                  else flag = true;
               } else if (s[i].equals("}")) {
                  if (!pila.empty() && pila.peek().equals("{")) pila.pop();
                  else if (!pila.empty() && (pila.peek().equals("[") || pila.peek().equals("(") || pila.peek().equals("<"))) { ans++; pila.pop(); }
                  else flag = true;
               } else if (s[i].equals("]")) {
                  if (!pila.empty() && pila.peek().equals("[")) pila.pop();
                  else if (!pila.empty() && (pila.peek().equals("(") || pila.peek().equals("{") || pila.peek().equals("<"))) { ans++; pila.pop(); }
                  else flag = true;
               } else {
                  if (!pila.empty() && pila.peek().equals("<")) pila.pop();
                  else if (!pila.empty() && (pila.peek().equals("[") || pila.peek().equals("{") || pila.peek().equals("("))) { ans++; pila.pop(); }
                  else flag = true;
               }
               if (flag) { System.out.println("imposible"); return; }
            }
         }
      } else { System.out.println("imposible"); return; }
      System.out.println((pila.empty() && !flag) ? ans : "imposible");
   }
}