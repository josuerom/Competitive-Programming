/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 12/07/23 19:13:56
**/
import java.util.Scanner;
import java.util.Stack;

public class A_Balanceo_Parentesis {
   public static void main(String[] authorJosuerom) {
      readInput();
   }

   static void solve(String[] s, int n) {
      Stack<String> pila = new Stack<>();
      int index = -1;
      for (int i = 0; i < n; i++) {
         if (!s[i].equals("(") && !s[i].equals("{") &&  !s[i].equals("[") &&  !s[i].equals("<") && !s[i].equals(")") && !s[i].equals("}") && !s[i].equals("]") && !s[i].equals(">")) continue;
         if (pila.empty() && (s[i].equals(")") || s[i].equals("}") || s[i].equals("]") || s[i].equals(">"))) {
            System.out.println("Error en " + i);
            return;
         }
         if (s[i].equals("(") || s[i].equals("{") || s[i].equals("[") || s[i].equals("<")) {
            if (pila.empty()) index = i;
            pila.push(s[i]);
         } else {
            if (s[i].equals(")") && pila.peek().equals("(")) pila.pop();
            else if (s[i].equals("}") && pila.peek().equals("{")) pila.pop();
            else if (s[i].equals("]") && pila.peek().equals("[")) pila.pop();
            else if (s[i].equals(">") && pila.peek().equals("<")) pila.pop();
            else { index = i; break; }
         }
      }
      System.out.println((pila.empty()) ? "Balanceada" : "Error en " + index);
   }

   static void readInput() {
      Scanner sc = new Scanner(System.in);
      String[] s = sc.next().split("");
      int n = s.length;
      solve(s, n);
      sc.close(); System.out.close();
   }
}