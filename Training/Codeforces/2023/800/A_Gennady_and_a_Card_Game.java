
/**
 *   author:  josuerom
 *   created: 06/08/23 21:54:39
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class A_Gennady_and_a_Card_Game {
   public static void main(String[] authorJosuerom) {
      String[] card = io.next().split("");
      String[] card_hands = io.nextLine().split("");
      solve(card, card_hands);
      io.close();
      System.exit(0);
   }

   static FastReader io = new FastReader();

   public static void solve(String c[], String ch[]) {
      boolean ans = false;
      for (int i = 0; i < ch.length; i++) {
         if (ch[i].equals(c[0]) || ch[i].equals(c[1])) {
            ans = true;
            break;
         }
      }
      io.println((ans) ? "YES" : "NO");
   }

   static class FastReader extends PrintWriter {
      private BufferedReader br;
      private StringTokenizer st;

      public FastReader() {
         this(System.in, System.out);
      }

      public FastReader(InputStream i, OutputStream o) {
         super(o);
         br = new BufferedReader(new InputStreamReader(i));
      }

      public FastReader(String problemName) throws IOException {
         super(problemName + ".out");
         br = new BufferedReader(new FileReader(problemName + ".in"));
      }

      public String next() {
         try {
            while (st == null || !st.hasMoreTokens())
               st = new StringTokenizer(br.readLine());
            return st.nextToken();
         } catch (Exception e) {
            e.printStackTrace();
         }
         return null;
      }

      public String nextLine() {
         String line = null;
         try {
            line = br.readLine();
         } catch (IOException e) {
            e.printStackTrace();
         }
         return line;
      }

      public int nextInt() {
         return Integer.parseInt(next());
      }

      public long nextLong() {
         return Long.parseLong(next());
      }

      public double nextDouble() {
         return Double.parseDouble(next());
      }

      public int[] readArray(int n) {
         int[] a = new int[n];
         for (int i = 0; i < n; i++) {
            a[i] = io.nextInt();
         }
         return a;
      }
   }
}