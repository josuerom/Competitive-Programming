/*********************************************
 * @author:           josuerom               *
 * @created:     25/Nov/22 13:40:27          *
*********************************************/
import java.util.Scanner;

public class A_Hulk {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      String ans = "";
      if (n==1 || n==2) System.out.println(n==1 ? "I hate it" : "I hate that I love it");
      else {
         for (int i = 1; i <= n; i++) {
            if (i==n && i%2!=0) ans += "I hate it";
            else if (i%2!=0) ans += "I hate that";
            else ans += (i!=n ? " I love that " : " I love it");
         }
         System.out.println(ans);
      }
   }
}