import java.util.Scanner;

/**
 * created: 13/07/23 19:06:54
 **/
public class A_Nodos_Alcanzables {

   public static void main(String[] authorJosuerom) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt(), m = sc.nextInt();
      int a = 0, b = 1, ans = 0;
      for (int i = 0; i < m; i++) {
         int x = sc.nextInt(), y = sc.nextInt();
         if (x == a && y == b) {
            ans++;
            a++;
            b++;
         }
      }
      System.out.println((ans >= n - 1) ? 1 : 0);
      sc.close();
      System.out.close();
   }
}
/**
 * ░░░░░██╗░█████╗░░██████╗██╗░░░██╗███████╗██████╗░░█████╗░███╗░░░███╗
 * ░░░░░██║██╔══██╗██╔════╝██║░░░██║██╔════╝██╔══██╗██╔══██╗████╗░████║
 * ░░░░░██║██║░░██║╚█████╗░██║░░░██║█████╗░░██████╔╝██║░░██║██╔████╔██║
 * ██╗░░██║██║░░██║░╚═══██╗██║░░░██║██╔══╝░░██╔══██╗██║░░██║██║╚██╔╝██║
 * ╚█████╔╝╚█████╔╝██████╔╝╚██████╔╝███████╗██║░░██║╚█████╔╝██║░╚═╝░██║
 * ░╚════╝░░╚════╝░╚═════╝░░╚═════╝░╚══════╝╚═╝░░╚═╝░╚════╝░╚═╝░░░░░╚═╝
 **/