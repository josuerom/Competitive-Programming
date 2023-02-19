/**
 *  author:  josuerom
 *  created: 27/11/22 17:30:21
**/
import java.util.*;

public class BeautifulYear {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      boolean flag = true;
      while (flag) {
         n++;
         HashSet<Integer> set = new HashSet<>();
         set.add(Integer.parseInt((n+"").charAt(0)+""));
         set.add(Integer.parseInt((n+"").charAt(1)+""));
         set.add(Integer.parseInt((n+"").charAt(2)+""));
         set.add(Integer.parseInt((n+"").charAt(3)+""));
         if (set.size() == 4) flag = false;
      }
      System.out.println(n);
   }
}