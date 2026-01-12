
/**
 *   author:  josuerom
 *   created: 02/08/23 16:19:59
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class B_Following_Directions {
   static FastReader io = new FastReader();

   public static void main(String[] authorJosuerom) {
      int tt = io.nextInt();
      while (tt-- > 0) {
         int n = io.nextInt();
         char[] a = io.next().toCharArray();
         solve(a, n);
      }
      io.close();
      System.exit(0);
   }

   public static void solve(char a[], int n) {
      boolean ans = false;
      int x = 0, y = 0;
      for (int i = 0; i < n; i++) {
         if (a[i] == 'R')
            ++x;
         else if (a[i] == 'L')
            --x;
         else if (a[i] == 'U')
            ++y;
         else
            --y;
         if (x == 1 && y == 1)
            ans = true;
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