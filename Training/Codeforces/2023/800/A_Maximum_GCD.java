/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 15/06/23 14:08:32
**/
import java.util.Scanner;
import java.util.Arrays;
import static java.lang.Math.*;

public class A_Maximum_GCD {
   static final boolean DEBUG = false;

   public static void main(String[] authorJosuerom) {
      readInput();
   }

   public static void solve(int x) {
      System.out.println(x/2);
   }

   public static void readInput() {
      Scanner sc = new Scanner(System.in);
      int tt = sc.nextInt();
      while(tt-- > 0) {
         int n = sc.nextInt();
         solve(n);
      }
      sc.close(); System.out.close();
   }
}