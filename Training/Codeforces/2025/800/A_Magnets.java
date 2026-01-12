/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 29/06/23 21:10:32
**/
import java.util.Scanner;
import java.util.Arrays;
import static java.lang.Math.*;

public class A_Magnets {
   public static void main(String[] authorJosuerom) {
      readInput();
   }

   static void solve(String[] a, int n) {
      int ans = 1;
      for (int i = 1; i < n; i++)
         ans += (!a[i].equals(a[i-1]) ? 1 : 0);
      System.out.println(ans);
   }

   static void readInput() {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      String[] elements = new String[n];
      for (int i = 0; i < n; i++)
         elements[i] = sc.next();
      solve(elements, n);
      sc.close(); System.out.close();
   }
}