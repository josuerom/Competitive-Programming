/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 10/07/23 11:22:34
**/
import java.util.Scanner;
import java.util.Arrays;
import java.util.Stack;
import static java.lang.Math.*;

public class A_Los_Ultimos {
   public static void main(String[] authorJosuerom) {
      readInput();
   }

   static void solve(Stack<String> pila, int n) {
      while (!pila.empty()) {
         System.out.println(pila.pop());
      }
   }

   static void readInput() {
      Scanner sc = new Scanner(System.in);
      Stack<String> pila = new Stack<>();
      boolean stop = true;
      while (stop) {
         String nom = sc.next();
         if (nom.equals("#")) stop = false;
         else pila.push(nom);
      }
      int n = pila.size();
      solve(pila, n);
      sc.close(); System.out.close();
   }
}