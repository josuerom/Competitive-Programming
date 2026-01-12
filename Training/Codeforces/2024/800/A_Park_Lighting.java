
/**
 *   author:  josuerom
 *   created: 28/07/23 13:55:02
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class A_Park_Lighting {
   static FastReader io = new FastReader();

   public static void main(String[] authorJosuerom) {
      int tt = io.nextInt();
      while (tt-- > 0) {
         int n = io.nextInt();
         int m = io.nextInt();
         solve(n, m);
      }
      io.close();
      System.exit(0);
   }

   public static void solve(int n, int m) {
      if (n == 1 || m == 1)
         io.println(max(n, m) - (max(n, m) / 2));
      else if (n % 2 != 0 && m % 2 != 0)
         io.println((n * m) / 2 + 1);
      else
         io.println((n * m) / 2);
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