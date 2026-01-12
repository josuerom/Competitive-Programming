
/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 14/07/23 19:04:30
 **/
import java.util.Scanner;
import java.util.Arrays;

public class A_Uniendo_Globos {
   public static void main(String[] authorJosuerom) {
      readInput();
   }

   private static void solve(int[] x, int[] y, int n) {
      Arrays.sort(x);
      Arrays.sort(y);
      for (int i = 0; i < n; i++) {
         int index = Arrays.binarySearch(x, y[i]);
         if (index >= 0)
            System.out.print(" " + y[i]);
         else {
            System.out.print(y[i]);
            return;
         }
      }
   }

   public static void readInput() {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int[] x = new int[n - 1];
      int[] y = new int[n - 1];
      for (int i = 0; i < n - 1; i++) {
         x[i] = sc.nextInt();
         y[i] = sc.nextInt();
      }
      solve(x, y, (n - 1));
      sc.close();
      System.out.close();
   }
}