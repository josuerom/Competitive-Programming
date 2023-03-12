/**
 *  author:  josuerom
 *  created: 11/03/23 20:28:03
**/
import java.util.Scanner;
import java.text.DecimalFormat;

public class Contest {
   public static void main(String[] args) {
      DecimalFormat df1 = new DecimalFormat(".#######");
      Scanner sc = new Scanner(System.in);
      int n, k, d, s;
      n = sc.nextInt(); k = sc.nextInt();
      d = sc.nextInt(); s = sc.nextInt();
      double ans = (double) ((n*d)-(k*s)) / (n-k);
      int aux = (int) ans;
      if (s<(d/n) || k==n) System.out.println("impossible");
      else if (ans-aux==0.0) System.out.println(String.valueOf(ans).replaceAll(",", ".") + "0");
      else System.out.println(String.valueOf(df1.format(ans)).replaceAll(",", "."));
   }
}