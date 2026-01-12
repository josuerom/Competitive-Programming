/*********************************************
 * @author:           josuerom               *
 * @created:     25/Nov/22 16:45:53          *
*********************************************/
import java.util.*;

public class A_George_and_Accommodation {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int[] P = new int[n];
      int[] Q = new int[n];
      for (int i = 0; i < n; i++) {
         P[i] = sc.nextInt(); Q[i] = sc.nextInt();
      }
      if (Arrays.equals(P, Q)) System.out.println("0");
      else {
         int ans = 0;
         for (int i = 0; i < n; i++) {
            if (P[i]<Q[i] && (Q[i]-P[i])>1) ans++;
         }
         System.out.println(ans);
      }
   }
}