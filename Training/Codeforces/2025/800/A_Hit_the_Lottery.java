/*********************************************
 * @author:           josuerom               *
 * @created:     25/Nov/22 13:58:56          *
*********************************************/
import java.util.Scanner;

public class A_Hit_the_Lottery {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int ans = 0, aux = 0;
      while (n > 0) {
         if (n>=100) { ans += (n/100); n -= 100*ans; }
         if (n>=20) { ans += (n/20); aux = (n/20); n -= 20*aux; }
         else if (n>=10) { ans += (n/10); aux = (n/10); n -= 10*aux; }
         else if (n>=5) { ans += (n/5); aux = (n/5); n -= 5*aux; }
         else if (n>=1) { ans += n; n -= n; }
      }
      System.out.println(ans);
   }
}