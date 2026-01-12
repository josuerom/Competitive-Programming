/**
 *  author:  josuerom
 *  created: 27/11/22 17:30:21
**/
import java.util.Scanner;
import java.util.HashSet;

public class A_Beautiful_Year {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      boolean stop = true;
      while (stop) {
         n++;
         HashSet<Integer> set = new HashSet<>();
         set.add(Integer.parseInt((n+"").charAt(0)+""));
         set.add(Integer.parseInt((n+"").charAt(1)+""));
         set.add(Integer.parseInt((n+"").charAt(2)+""));
         set.add(Integer.parseInt((n+"").charAt(3)+""));
         if (set.size() == 4) stop = false;
      }
      System.out.println(n);
   }
}