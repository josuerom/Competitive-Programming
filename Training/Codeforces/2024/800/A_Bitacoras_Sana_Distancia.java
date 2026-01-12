import java.util.Scanner;
import java.util.Stack;

/**
 * author: josuerom
 * created: 12/07/23 20:25:32
 **/
public class A_Bitacoras_Sana_Distancia {
   public static void main(String[] authorJosuerom) {
      Scanner sc = new Scanner(System.in);
      Stack<Integer> pila = new Stack<>();
      Stack<Integer> aux = new Stack<>();
      int n = sc.nextInt();
      int[] t = new int[n];
      int[] nt = new int[n];
      for (int i = 0; i < n; i++)
         t[i] = sc.nextInt();
      for (int i = 0; i < n; i++) {
         nt[i] = sc.nextInt();
         pila.push(nt[i]);
      }
      for (int i = 0, j = 0; i < n; j++) {
         System.out.println(nt[i]);
         aux.push(nt[i]);
         pila.remove(aux.peek());
         i = i + t[j];
      }
      while (!pila.empty()) {
         System.out.println(pila.pop());
      }
      sc.close();
      System.out.close();
   }
}