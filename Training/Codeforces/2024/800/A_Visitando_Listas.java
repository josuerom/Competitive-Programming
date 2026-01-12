
/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
**/
import java.util.*;

public class A_Visitando_Listas {
   public static void main(String[] authorJosuerom) {
      Scanner sc = new Scanner(System.in);
      LinkedList<Integer> list = new LinkedList<Integer>();
      int tt = sc.nextInt();
      while (tt-- > 0) {
         String cmd = sc.next();
         int e = sc.nextInt();
         if (cmd.equals("AGREGA_IZQ") || cmd.equals("AGREGA_DER")) {
            if (cmd.equals("AGREGA_DER"))
               list.addLast(e);
            else
               list.addFirst(e);
         } else if (cmd.equals("QUITA_PRIMER")) {
            list.remove(e);
         } else {
            // list.remove(list.lastIndexOf(e));
            list.remove(e);
         }
      }
      System.out.println(list.toString().replaceAll("[\\[\\],]", ""));
      System.exit(0);
   }
}