/*********************************************
 * @author:           josuerom               *
 * @created:     25/Nov/22 16:29:34          *
*********************************************/
import java.util.*;

public class A_Vanya_and_Fence {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int ans  = 0, a;
      int n = sc.nextInt(), h = sc.nextInt();
      for (int j = 0; j < n; j++) {
         a = sc.nextInt();
         if (a<=h) ans += 1;
         else ans += 2;
      }
      System.out.println(ans);
   }
}