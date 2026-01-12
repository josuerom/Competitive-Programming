/*********************************************
 * @author:           josuerom               *
 * @created:     25/Nov/22 13:29:13          *
*********************************************/
import java.util.Scanner;

public class A_Elephant {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int x = sc.nextInt();
      int ans = 0;
      if (x>5) { ans = (x/5); x -= (ans*5); }
      if (x==5) ans++;
      else if (x==4) ans++;
      else if (x==3) ans++;
      else if (x==2) ans++;
      else if (x==1) ans++;
      System.out.println(ans);
   }
}